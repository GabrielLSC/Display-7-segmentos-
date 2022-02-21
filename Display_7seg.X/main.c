/*
 * File:   main.c
 * Author: Gabriel Lacerda
 *
 * Created on 18 de Fevereiro de 2022, 08:46
 */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "display.h"
#include "botao.h"

unsigned int contagem;

void main(void) 
{
    init();
    numero(0);
    display_7seg[10];
    contagem = 0;
    
    while(1)
    {    
        
        if(inc())
        {
           ++contagem; 
           while(inc()){}
        }
        if(dec())
        {
           --contagem;
           while(dec()){}
        }
                
        switch ( contagem )
        {
            
            case -1 : contagem = 9; break;
            case 0  : numero(0); break;
            case 1  : numero(1); break;
            case 2  : numero(2); break;
            case 3  : numero(3); break;
            case 4  : numero(4); break;
            case 5  : numero(5); break;
            case 6  : numero(6); break;
            case 7  : numero(7); break; 
            case 8  : numero(8); break; 
            case 9  : numero(9); break; 
            case 10 : contagem = 0; break;
            
        }
   
    }

}


void init(void)
{
    ANSELH = 0;
    TRISB = 0;
    PORTD = 0;
    PORTB = 0;
    TRISD = 0xff;
}