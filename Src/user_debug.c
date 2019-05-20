//#include <string.h>
//#include <stdio.h>
//#include "stm32f0xx_hal.h"
//
//extern UART_HandleTypeDef huart1;
//char input[10];
//
//#ifdef __GNUC__
//
//#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
//PUTCHAR_PROTOTYPE
//{
//	HAL_UART_Transmit(&huart1, (uint8_t*)&ch, 1, HAL_MAX_DELAY);
//
//	return ch;
//}
//#endif
//
//int _write(int file, char *ptr, int len)
//{
//	int DataIdx;
//
//	for (DataIdx = 0; DataIdx < len;DataIdx++)
//	{
//		__io_putchar(*ptr++);
//	}
//
//	return len;
//}
//
//int user_printString(char *ptr, int len) {
//	_write(0, ptr, len);
//
//	return 0;
//}
//
//int user_printbyte(uint8_t data) {
//	sprintf(input, "%d\n", data);
//	return _write(0, input, strlen(input));
//}
//
