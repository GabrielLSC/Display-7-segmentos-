/*
 * File:   delay.c
 * Author: 21193442
 *
 * Created on 18 de Fevereiro de 2022, 10:17
 */


#include <xc.h>

#define _XTAL_FREQ 4000000

void delay (unsigned int t) 
{
    while(t)
    {
        __delay_ms(1);
        --t;
    }
}
