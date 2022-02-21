/*
 * File:   Estados.c
 * Author: 21193442
 *
 * Created on 18 de Fevereiro de 2022, 10:42
 */


#include <xc.h>
#include "display.h"

unsigned char c;


const char display_7seg [10] = 
{
    0xfc, 0x60, 0xda, 0xf2, 0x66, 
    0xb6, 0xbe, 0xe0, 0xfe, 0xf6,
};


void numero(unsigned char num)
{
    PORTB = (num < 16) ? display_7seg [num] : 0;
}
