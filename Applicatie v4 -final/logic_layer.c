/*
 * Logic Layer.c
 *
 * created	: 4-5-2017
 * Author	: Niels
 */

#include "logic_layer.h"
#include "string.h"
#include "draw.h"
#include "stdio.h"
#include "stdlib.h"
#include "delay.h"

enum CommandError LL_getType(char* s, enum CommandType* c);
enum CommandError LL_getColour(char* s, enum ColourType* c);
enum CommandError LL_clearschermArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_lijnArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_ellipsArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_rechthoekArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_driehoekArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_tekstArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_bitmapArg(COMMAND* cmd, ARGS* arg);
enum CommandError LL_wachtArg(COMMAND* cmd, ARGS* arg);
void LL_splitBuf(char* buf, ARGS* arg);
void LL_clearArg(ARGS* arg);

/** Functie die bepaald welk commandtype er gebruikt worden. */
enum CommandError LL_execute(char* buf)
{
	static enum CommandError err;
	static COMMAND cmd;
	static ARGS args;

	LL_clearArg(&args);
	LL_splitBuf(buf, &args);
	err = LL_getType(args.arg1, &cmd.type);
	cmd.ColourInt = 160;

//	clearscreen(0);
	if(err == err_noError)
	{
		switch(cmd.type)
		{
			case clearscherm:
				err = LL_clearschermArg(&cmd, &args);
				break;

			case lijn:
				err = LL_lijnArg(&cmd, &args);
				break;

			case ellips:
				err = LL_ellipsArg(&cmd, &args);
				break;

			case rechthoek:
				err = LL_rechthoekArg(&cmd, &args);
				break;

			case driehoek:
				err = LL_driehoekArg(&cmd, &args);
				break;

			case tekst:
				err = LL_tekstArg(&cmd, &args);
				break;

			case bitmap:
				err = LL_bitmapArg(&cmd, &args);
				break;

			case wacht:
				err = LL_wachtArg(&cmd, &args);
				break;
		}
	}
	return err;
}

/** Bepaald het type commando*/
enum CommandError LL_getType(char* s, enum CommandType* c)
{
	int i, ret;
	for(i = 0; i < COMMAND_NR; i++)
	{
		ret = strcmp(s, &CmdTypes[i][0]);
		if(ret == 0)
		{
			*c = i;
			return err_noError;
		}
	}
	return err_unknownCommand;
}

/** Functie die de textstyle bepaald.*/
enum CommandError LL_getTxtStyle(char* s, enum TxtType* txt)
{
	int i, ret;
	for(i = 0; i < COMMAND_NR; i++)
	{
		ret = strcmp(s, &TxtTypes[i][0]);
		if(ret == 0)
		{
			*txt = i;
			return err_noError;
		}
	}
	return err_unknownTxtStyle;
}

/** Functie die de de kleur bepaald.*/
enum CommandError LL_getColour(char* s, enum ColourType* c)
{
	int i, ret;

	for(i = 0; i < COLOUR_NR; i++)
	{
		ret = strcmp(s, &ColourTypes[i][0]);
		if(ret == 0)
		{
			*c = i;
			return err_noError;
		}
	}
	return err_unknownColour;
}

/** Functie die het kleurtype omzet in een integer.*/
enum CommandError LL_getColourInt(char* s, enum ColourType* c, int* ColInt)
{
	enum CommandError e;
	e = LL_getColour(s, c);
	if(e)
		return e;

	switch(*c)
		{
			case zwart:
				*ColInt = VGA_ZWART;
				break;
			case blauw:
				*ColInt = VGA_BLAUW;
				break;
			case lichtblauw:
				*ColInt = VGA_LICHTBLAUW;
				break;
			case groen:
				*ColInt = VGA_GROEN;
				break;
			case lichtgroen:
				*ColInt = VGA_LICHTGROEN;
				break;
			case cyaan:
				*ColInt = VGA_CYAAN;
				break;
			case lichtcyaan:
				*ColInt = VGA_LICHTCYAAN;
				break;
			case rood:
				*ColInt = VGA_ROOD;
				break;
			case lichtrood:
				*ColInt = VGA_LICHTROOD;
				break;
			case magenta:
				*ColInt = VGA_MAGENTA;
				break;
			case lichtmagenta:
				*ColInt = VGA_LICHTMAGENTA;
				break;
			case bruin:
				*ColInt = VGA_BRUIN;
				break;
			case geel:
				*ColInt = VGA_GEEL;
				break;
			case grijs:
				*ColInt = VGA_GRIJS;
				break;
			case wit:
				*ColInt = VGA_WIT;
				break;
		}
	return err_noError;
}

/** Functie die de positie op het scherm bepaald.*/
enum CommandError LL_getPos(int* pos, char* str, enum axis_t axis)
{
	enum CommandError err = err_noError;

	*pos = atoi(str);

	if(axis == x_pos && *pos >= VGA_X)
		err = err_invalidPos;

	if(axis == y_pos && *pos >= VGA_Y)
		err = err_invalidPos;

	return err;
}

/** Functie die de parameters voor het leegmaken van het scherm bepaald.*/
enum CommandError LL_clearschermArg(COMMAND* cmd, ARGS* arg)
{
	enum CommandError err;

	if(arg->arg_nr < CLEARSCHERM_ARG_N)
		return err_invalidArg;

	err = LL_getColourInt(arg->arg2, &cmd->Colour, &cmd-> ColourInt);

	if(err == err_noError)
		clearscreen(cmd->ColourInt);

	return err;
}

/** Functie die de parameters van de lijn tonen functie bepaald.*/
enum CommandError LL_lijnArg(COMMAND* cmd, ARGS* arg)
{
	if(arg->arg_nr < LIJN_ARG_N)
		return err_invalidArg;

	if(LL_getPos(&cmd->x1, arg->arg2, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y1, arg->arg3, y_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->x2, arg->arg4, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y2, arg->arg5, y_pos))
		return err_invalidPos;

	cmd->linestyle = atoi(arg->arg6);

	if(LL_getColourInt(arg->arg7, &cmd->Colour, &cmd-> ColourInt))
		return err_unknownColour;


	lijn_tonen(cmd->x1,cmd->y1, cmd->x2, cmd->y2, cmd->linestyle, cmd->ColourInt);

	return err_noError;
}

/** Functie die de parameters van de ellips tonen functie bepaald.*/
enum CommandError LL_ellipsArg(COMMAND* cmd, ARGS* arg)
{
	if(arg->arg_nr < ELLIPS_ARG_N)
			return err_invalidArg;

	if(LL_getPos(&cmd->x1, arg->arg2, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y1, arg->arg3, y_pos))
		return err_invalidPos;

	cmd->x2 = atoi(arg->arg4);//use cmd.x2 to hold x-radius
	cmd->y2 = atoi(arg->arg5);//use cmd.y2 to hold y-radius

	if((cmd->x1 + cmd->x2) > VGA_X || (cmd->y1 + cmd->y2) > VGA_Y)
		return err_invalidRadius;

	if(LL_getColourInt(arg->arg6, &cmd->Colour, &cmd-> ColourInt))
		return err_unknownColour;


	ellipse_tonen(cmd->x1,cmd->y1, cmd->x2, cmd->y2, cmd->ColourInt);

	return err_noError;
}

/** Functie die de parameters van de rechthoek tonen functie bepaald.*/
enum CommandError LL_rechthoekArg(COMMAND* cmd, ARGS* arg)
{
	if(arg->arg_nr < RECHTHOEK_ARG_N)
			return err_invalidArg;

	if(LL_getPos(&cmd->x1, arg->arg2, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y1, arg->arg3, y_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->x2, arg->arg4, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y2, arg->arg5, y_pos))
		return err_invalidPos;

	if(LL_getColourInt(arg->arg6, &cmd->Colour, &cmd-> ColourInt))
		return err_unknownColour;

	rechthoek_tonen(cmd->x1,cmd->y1, cmd->x2, cmd->y2, cmd->ColourInt);

	return err_noError;
}

/** Functie die de parameters van de driehoek tonen functie bepaald.*/
enum CommandError LL_driehoekArg(COMMAND* cmd, ARGS* arg)
{
	if(arg->arg_nr < DRIEHOEK_ARG_N)
			return err_invalidArg;

	if(LL_getPos(&cmd->x1, arg->arg2, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y1, arg->arg3, y_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->x2, arg->arg4, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y2, arg->arg5, y_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->x3, arg->arg6, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y3, arg->arg7, y_pos))
		return err_invalidPos;

	if(LL_getColourInt(arg->arg8, &cmd->Colour, &cmd-> ColourInt))
		return err_unknownColour;

	driehoek_tonen(cmd->x1,cmd->y1, cmd->x2, cmd->y2, cmd->x3, cmd->y3, cmd->ColourInt);

	return err_noError;
}

/** Functie die de parameters van de tekst tonen functie bepaald.*/
enum CommandError LL_tekstArg(COMMAND* cmd, ARGS* arg)
{
	if(arg->arg_nr < TEKST_ARG_N)
			return err_invalidArg;

	if(LL_getPos(&cmd->x1, arg->arg2, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y1, arg->arg3, y_pos))
		return err_invalidPos;

	if(LL_getColourInt(arg->arg5, &cmd->Colour, &cmd-> ColourInt))
		return err_unknownColour;

	cmd->txt_size = sizeof(arg->arg4);
//	&cmd->txt[0] = arg->arg4;

	if(LL_getTxtStyle(arg->arg6, &cmd->TxtStyle))
		return err_unknownTxtStyle;

	switch(cmd->TxtStyle)
	{
	case normaal:
		tekst_tonen_arial_normaal(cmd->x1, cmd->y1, cmd->ColourInt, arg->arg4, cmd->txt_size);
		break;

	case vet:
		tekst_tonen_arial_vet(cmd->x1, cmd->y1, cmd->ColourInt, arg->arg4, cmd->txt_size);
		break;

	case cursief:
		tekst_tonen_arial_cursief(cmd->x1, cmd->y1, cmd->ColourInt, arg->arg4, cmd->txt_size);
		break;

	}
	return err_noError;
}

/** Functie die de parameters van de bitmap tonen functie bepaald.*/
enum CommandError LL_bitmapArg(COMMAND* cmd, ARGS* arg)
{
	enum CommandError err;

	if(arg->arg_nr < BITMAP_ARG_N)
			return err_invalidArg;

	cmd->x1 = atoi(arg->arg2);//use cmd.x1 to hold bitmap nr

	if(LL_getPos(&cmd->x2, arg->arg3, x_pos))
		return err_invalidPos;

	if(LL_getPos(&cmd->y2, arg->arg4, y_pos))
		return err_invalidPos;

	switch(cmd->x1)
	{
		case BM_SMILEY:
			smiley_tonen(cmd->x2, cmd->y2);
			break;
		case BM_BOOS:
			boos_tonen(cmd->x2, cmd->y2);
			break;
		case BM_PIJL_LINKS:
			pijl_links_tonen(cmd->x2, cmd->y2);
			break;
		case BM_PIJL_HOOG:
			pijl_omhoog_tonen(cmd->x2, cmd->y2);
			break;
		case BM_PIJL_LAAG:
			pijl_omlaag_tonen(cmd->x2, cmd->y2);
			break;
		case BM_PIJL_RECHTS:
			pijl_rechts_tonen(cmd->x2, cmd->y2);
			break;
		default:
			err = err_unknownBitmap;
	}
	return err;
}

/** Functie die de parameters van de wacht functie bepaald.*/
enum CommandError LL_wachtArg(COMMAND* cmd, ARGS* arg)
{
	if(arg->arg_nr < WACHT_ARG_N)
			return err_invalidArg;

	cmd->x1 = atoi(arg->arg2);//use cmd.x1 to hold delay time
	DELAY_ms(cmd->x1);

	return err_noError;
}

/** Functie die de buffer opdeelt in de losse argumenten van de commands.*/
void LL_splitBuf(char* buf, ARGS* arg)
{
	int i = 0;
	arg->arg_nr = 1;

	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg1[i] = *buf;
		i++;
		buf++;
	}
	arg->arg1[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg2[i] = *buf;
		i++;
		buf++;
	}
	arg->arg2[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg3[i] = *buf;
		i++;
		buf++;
	}
	arg->arg3[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < TXT_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg4[i] = *buf;
		i++;
		buf++;
	}
	arg->arg4[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg5[i] = *buf;
		i++;
		buf++;
	}
	arg->arg5[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg6[i] = *buf;
		i++;
		buf++;
	}
	arg->arg6[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg7[i] = *buf;
		i++;
		buf++;
	}
	arg->arg7[i] = '\0';
	arg->arg_nr++;

	i=0;
	buf++;
	while(*buf != ',' && i < ARG_LENGTH)
	{
		if(*buf == 0)
			return;

		arg->arg8[i] = *buf;
		i++;
		buf++;
	}
	arg->arg8[i] = '\0';
	arg->arg_nr++;
}

/** Functie die de argument struct leegmaakt.*/
void LL_clearArg(ARGS* arg)
{
	int i;
	for(i=0; i<ARG_LENGTH; i++)
		arg->arg1[i] = 0;

	for(i=0; i<ARG_LENGTH; i++)
		arg->arg2[i] = 0;

	for(i=0; i<ARG_LENGTH; i++)
		arg->arg3[i] = 0;

	for(i=0; i<TXT_LENGTH; i++)
		arg->arg4[i] = 0;

	for(i=0; i<ARG_LENGTH; i++)
		arg->arg5[i] = 0;

	for(i=0; i<ARG_LENGTH; i++)
		arg->arg6[i] = 0;

	for(i=0; i<ARG_LENGTH; i++)
		arg->arg7[i] = 0;

	for(i=0; i<ARG_LENGTH; i++)
		arg->arg8[i] = 0;
}
