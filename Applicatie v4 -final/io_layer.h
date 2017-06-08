/*
 * io_layer.h
 *
 * created	: 4-5-2017
 * Author	: Niels
 */
#include "uart.h"

#define UART_BUF 128

enum UARTStatus
{
	UART_noData,
	UART_TX_Ready,
	UART_RX_Ready
};

/** Initialiseert de Uart, VGA en DELAY. */
void IO_init();

/** Functie voor het ontvangen van de commands doormiddel van de UART */
enum UARTStatus IO_readUART(char* buf);

/** Functie voor het sturen van de feedback naar de UART */
void IO_writeUART(char* buf);
