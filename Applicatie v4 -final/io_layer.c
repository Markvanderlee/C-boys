/*
 * IO Layer.c
 *
 * created	: 4-5-2017
 * Author	: Niels
 */

#include "io_layer.h"
#include "draw.h"
#include "delay.h"

/** Initialiseert de Uart, VGA en DELAY. */
void IO_init()
{
	UART_init();
	VGA_init();
	DELAY_init();
}

/** Functie voor het ontvangen van de commands doormiddel van de UART */
enum UARTStatus IO_readUART(char* buf)
{

	static enum UARTStatus err = UART_RX_Ready;
	UART_gets(buf,0);
	if(*buf==0xFF)
		err = UART_noData;

	return err;
}
/** Functie voor het sturen van de feedback naar de UART */
void IO_writeUART(char* buf)
{
	int i;
	for(i=0; buf[i]; i++)
		UART_putchar(buf[i]);
}
