/*
 * Application Layer.c
 *
 * created	: 4-5-2017
 * Author	: Niels
 */

#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "logic_layer.h"
#include "io_layer.h"

#define TRUE		1
#define FALSE		0

enum globalstate_t
{
	gsInit,
	gsInput,
	gsExecute
};

void AL_handleError(enum CommandError err);
void clear_buffer(char* buf);

/** Statemachine voor de applicatie */
int main(void)
{
	enum globalstate_t globalState = gsInit;
	enum CommandError err;
	char buffer[UART_BUF];

	SystemInit();

    while(1)
    {
    	switch(globalState){//state machine
    		case gsInit:
    			IO_init();
    			globalState = gsInput;
    			break;

    		case gsInput:
    			clear_buffer(buffer);
    			if(IO_readUART(buffer) == UART_RX_Ready)
    				globalState = gsExecute;
    			break;

    		case gsExecute:
    			err = LL_execute(buffer);
    			AL_handleError(err);
    			globalState = gsInput;
    			break;
    	}
    }
}


/** Error afhandelings functie.

Input/ouput  	| Toelichting
------------- 	| -------------
err				| Output van LL_execute, geeft weer of er iets is fout gegaan met het invoeren van een command.
Output			| Uart ontvangt een errorcode of succes afhankelijk van hoe goed het command is ingevoerd.
 */
void AL_handleError(enum CommandError err)
{
	switch(err)
	{
	case err_noError:
		IO_writeUART("Succes\n");
		break;

	case err_unknownCommand:
		IO_writeUART("Error: unknown command\n");
		break;

	case err_invalidPos:
		IO_writeUART("Error: invalid position\n");
		break;

	case err_unknownColour:
		IO_writeUART("Error: unknown colour\n");
		break;

	case err_unknownBitmap:
		IO_writeUART("Error: unknown bitmap\n");
		break;

	case err_unknownTxtStyle:
		IO_writeUART("Error: unknown tekst style\n");
		break;

	case err_invalidRadius:
		IO_writeUART("Error: radius out of bounds\n");
		break;

	case err_invalidArg:
		IO_writeUART("Error: too few arguments\n");
		break;
	}
}

/** Functie om de buffer te clearen voordat nieuwe data wordt ontvangen.
 */
void clear_buffer(char* buf)
{
	int i;
	for(i=0; i<UART_BUF;i++)
	{
		*buf = 0;
		buf++;
	}
}
