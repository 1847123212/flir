#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "sys.h" 


	  	
extern u8  USART_RX_BUF; //���ջ���,���USART_REC_LEN���ֽ�.ĩ�ֽ�Ϊ���з� 
extern u16 USART_RX_STA;         		//����״̬���	
//����봮���жϽ��գ��벻Ҫע�����º궨��
void uart_init(u32 bound);
void send_once(void);




#endif


