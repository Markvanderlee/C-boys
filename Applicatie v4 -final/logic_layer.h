/*logic_layer.h
 *
 * created	: 4-5-2017
 * Author	: Niels
 */
#define COMMAND_BUF 128
#define COMMAND_NR	8
#define COMMAND_LENGTH 16
#define COLOUR_NR 15

#define ARG_LENGTH	16
#define TXT_LENGTH	64

#define TXT_TYPE_NR		3
#define TXT_TYPE_LENGTH 16

#define CLEARSCHERM_ARG_N	2
#define LIJN_ARG_N 			7
#define ELLIPS_ARG_N		6
#define RECHTHOEK_ARG_N		6
#define DRIEHOEK_ARG_N		8
#define TEKST_ARG_N			6
#define BITMAP_ARG_N		4
#define WACHT_ARG_N			2

enum axis_t{ x_pos = 0, y_pos = 1};

enum CommandError
{
	err_noError,
	err_unknownCommand,
	err_invalidPos,
	err_unknownColour,
	err_unknownBitmap,
	err_unknownTxtStyle,
	err_invalidRadius,
	err_invalidArg
};

enum CommandType
{
	clearscherm,
	lijn,
	ellips,
	rechthoek,
	driehoek,
	tekst,
	bitmap,
	wacht
};

enum ColourType
{
	zwart,
	blauw,
	lichtblauw,
	groen,
	lichtgroen,
	cyaan,
	lichtcyaan,
	rood,
	lichtrood,
	magenta,
	lichtmagenta,
	bruin,
	geel,
	grijs,
	wit
};

enum TxtType
{
	normaal,
	vet,
	cursief
};

static const char CmdTypes[COMMAND_NR][COMMAND_LENGTH] = {
		"clearscherm",
		"lijn",
		"ellips",
		"rechthoek",
		"driehoek",
		"tekst",
		"bitmap",
		"wacht"
};

static const char ColourTypes[COLOUR_NR][COMMAND_LENGTH] = {
		"zwart",
		"blauw",
		"lichtblauw",
		"groen",
		"lichtgroen",
		"cyaan",
		"lichtcyaan",
		"rood",
		"lichtrood",
		"magenta",
		"lichtmagenta",
		"bruin",
		"geel",
		"grijs",
		"wit"
};

static const char TxtTypes[TXT_TYPE_NR][TXT_TYPE_LENGTH] ={
	"norm",
	"vet",
	"cursief"
};

typedef struct Args_t{
	char arg1[ARG_LENGTH];
	char arg2[ARG_LENGTH];
	char arg3[ARG_LENGTH];
	char arg4[TXT_LENGTH];
	char arg5[ARG_LENGTH];
	char arg6[ARG_LENGTH];
	char arg7[ARG_LENGTH];
	char arg8[ARG_LENGTH];
	int  arg_nr;
}ARGS;

typedef struct command_t{
	enum CommandType type;
	int x1;
	int y1;
	int x2;
	int	y2;
	int x3;
	int y3;
	int linestyle;
	enum ColourType Colour;
	int ColourInt;
	char txt[TXT_LENGTH];
	int txt_size;
	enum TxtType TxtStyle;
}COMMAND;

/** Functie die bepaald welk commandtype er gebruikt worden. */
enum CommandError LL_execute(char* buf);


