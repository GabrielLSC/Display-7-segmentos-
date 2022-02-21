/*
 * File:   Botão.c
 * Author: 21193442
 *
 * Created on 21 de Fevereiro de 2022, 08:34
 */


#include <xc.h>

#define BT_INC PORTDbits.RD0
#define BT_DEC PORTDbits.RD1

char inc (void) 
{
    return(!PORTDbits.RD0);
}

char dec (void) 
{
    return(!PORTDbits.RD1);
}
