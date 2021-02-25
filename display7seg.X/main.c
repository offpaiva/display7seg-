/*
 * File:   main.c
 * Author: 20185206
 *
 * Created on 25 de Fevereiro de 2021, 14:54
 * 
 * 
-------------------------------------------------
 *          MAPA DE ENTRADAS E SAIDAS
 * -------------------------------------------------
 *  Pinos   |nº     |Conexão
 * ---------|-------|-------------------------------
 *  RD0     |19     | Segmento a
 *  RD1     |20     | Segmento b
 *  RD2     |21     | Segmento c
 *  RD3     |22     | Segmento d
 *  RD4     |27     | Segmento e
 *  RD5     |28     | Segmento f
 *  RD6     |29     | Segmento g
 *  RD7     |30     | Segmento p
 * -------------------------------------------------
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "disp7seg.h"

void main(void)

{
    char cont = 0;
    
    disp7seg_init();
    
    while( 1 )
    {
        disp7seg( cont );
        delay(1000);
        cont = ++cont % 16;
    }
    return;
}
   
