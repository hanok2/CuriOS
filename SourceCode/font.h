//
//  font.h
//  
//
//  Created by Matt Parsons on 20/10/2020.
//
//


#ifndef font_h
#define font_h

#include "stdheaders.h"
#include "list.h"

typedef struct{
    node_t node;
    uint32_t width;
    uint32_t height;
    uint8_t* data;
} font_t;


uint8_t topazOld_font[] = {126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,108,108,24,0,56,24,12,48,0,0,0,0,0,3,60,24,60,60,28,126,28,126,60,60,0,0,12,0,48,60,124,24,252,60,248,254,254,60,102,126,14,230,240,130,198,56,252,56,252,60,126,102,195,198,195,195,254,60,192,60,16,0,24,0,224,0,14,0,28,0,224,24,6,224,56,0,0,0,0,0,0,0,8,0,0,0,0,0,0,14,24,112,114,204,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,12,28,66,195,24,60,102,126,48,0,62,0,126,126,60,24,240,240,24,0,126,0,0,48,112,0,32,32,192,24,48,12,24,113,195,60,31,60,96,24,48,102,48,12,24,102,248,113,48,12,24,113,195,0,61,48,12,24,102,6,240,124,48,12,24,113,51,60,0,0,48,12,24,102,48,12,24,102,96,113,48,12,24,113,102,0,0,48,12,24,102,12,240,102,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,108,108,24,0,56,24,12,48,0,0,0,0,0,3,60,24,60,60,28,126,28,126,60,60,0,0,12,0,48,60,124,24,252,60,248,254,254,60,102,126,14,230,240,130,198,56,252,56,252,60,126,102,195,198,195,195,254,60,192,60,16,0,24,0,224,0,14,0,28,0,224,24,6,224,56,0,0,0,0,0,0,0,8,0,0,0,0,0,0,14,24,112,114,204,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,12,28,66,195,24,60,102,126,48,0,62,0,126,126,60,24,240,240,24,0,126,0,0,48,112,0,32,32,192,24,48,12,24,113,195,60,31,60,96,24,48,102,48,12,24,102,248,113,48,12,24,113,195,0,61,48,12,24,102,6,240,124,48,12,24,113,51,60,0,0,48,12,24,102,48,12,24,102,96,113,48,12,24,113,102,0,0,48,12,24,102,12,240,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,108,108,62,198,108,24,24,24,102,24,0,0,0,6,102,56,102,102,60,96,48,102,102,102,24,24,24,0,24,102,198,60,102,102,108,102,102,102,102,24,6,102,96,198,230,108,102,108,102,102,90,102,195,198,102,195,198,48,96,12,56,0,24,0,96,0,6,0,54,0,96,0,0,96,24,0,0,0,0,0,0,0,24,0,0,0,0,0,0,24,24,24,156,51,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,62,54,60,102,24,64,0,129,72,51,6,0,129,0,102,24,24,24,48,0,244,0,0,112,136,204,99,99,35,0,8,16,36,142,24,102,60,102,16,32,72,0,8,16,36,0,108,142,8,16,36,142,60,99,102,8,16,36,0,8,96,102,8,16,36,142,0,102,0,0,8,16,36,0,8,16,36,0,252,142,8,16,36,142,0,24,1,8,16,36,0,16,96,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,108,108,62,198,108,24,24,24,102,24,0,0,0,6,102,56,102,102,60,96,48,102,102,102,24,24,24,0,24,102,198,60,102,102,108,102,102,102,102,24,6,102,96,198,230,108,102,108,102,102,90,102,195,198,102,195,198,48,96,12,56,0,24,0,96,0,6,0,54,0,96,0,0,96,24,0,0,0,0,0,0,0,24,0,0,0,0,0,0,24,24,24,156,51,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,62,54,60,102,24,64,0,129,72,51,6,0,129,0,102,24,24,24,48,0,244,0,0,112,136,204,99,99,35,0,8,16,36,142,24,102,60,102,16,32,72,0,8,16,36,0,108,142,8,16,36,142,60,99,102,8,16,36,0,8,96,102,8,16,36,142,0,102,0,0,8,16,36,0,8,16,36,0,252,142,8,16,36,142,0,24,1,8,16,36,0,16,96,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,0,254,96,204,104,48,48,12,60,24,0,0,0,12,110,24,6,6,108,124,96,6,102,102,24,24,48,126,12,6,222,60,102,192,102,96,96,192,102,24,6,108,96,238,246,198,102,198,102,112,24,102,102,198,60,102,140,48,48,12,108,0,12,60,108,60,54,60,48,59,108,56,6,102,24,102,124,60,220,61,236,62,62,102,102,99,99,102,126,24,24,24,0,204,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,48,102,60,24,60,0,157,136,102,0,126,185,0,60,126,48,48,0,198,244,24,0,48,136,102,38,38,102,24,60,60,60,60,60,60,60,192,254,254,254,254,126,126,126,126,102,198,60,60,60,60,102,54,207,102,102,102,102,195,126,102,60,60,60,60,60,60,126,60,60,60,60,60,56,56,56,56,24,124,60,60,60,60,60,0,62,102,102,102,102,102,124,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,0,254,96,204,104,48,48,12,60,24,0,0,0,12,110,24,6,6,108,124,96,6,102,102,24,24,48,126,12,6,222,60,102,192,102,96,96,192,102,24,6,108,96,238,246,198,102,198,102,112,24,102,102,198,60,102,140,48,48,12,108,0,12,60,108,60,54,60,48,59,108,56,6,102,24,102,124,60,220,61,236,62,62,102,102,99,99,102,126,24,24,24,0,204,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,48,102,60,24,60,0,157,136,102,0,126,185,0,60,126,48,48,0,198,244,24,0,48,136,102,38,38,102,24,60,60,60,60,60,60,60,192,254,254,254,254,126,126,126,126,102,198,60,60,60,60,102,54,207,102,102,102,102,195,126,102,60,60,60,60,60,60,126,60,60,60,60,60,56,56,56,56,24,124,60,60,60,60,60,0,62,102,102,102,102,102,124,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,108,60,24,118,0,48,12,255,126,0,126,0,24,126,24,28,28,204,6,124,12,60,62,0,0,96,0,6,12,222,102,124,192,102,120,120,206,126,24,6,120,96,254,222,198,124,198,124,56,24,102,102,214,24,60,24,48,24,12,198,0,0,6,118,102,110,102,120,102,118,24,6,108,24,119,102,102,102,102,118,96,24,102,102,107,54,102,76,112,24,14,0,51,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,120,60,24,0,102,0,177,248,204,0,126,185,0,0,24,96,24,0,198,116,24,0,48,112,51,44,44,44,48,102,102,102,102,102,102,111,192,96,96,96,96,24,24,24,24,246,230,102,102,102,102,195,28,219,102,102,102,102,102,99,108,6,6,6,6,6,6,27,102,102,102,102,102,24,24,24,24,124,102,102,102,102,102,102,126,103,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,108,60,24,118,0,48,12,255,126,0,126,0,24,126,24,28,28,204,6,124,12,60,62,0,0,96,0,6,12,222,102,124,192,102,120,120,206,126,24,6,120,96,254,222,198,124,198,124,56,24,102,102,214,24,60,24,48,24,12,198,0,0,6,118,102,110,102,120,102,118,24,6,108,24,119,102,102,102,102,118,96,24,102,102,107,54,102,76,112,24,14,0,51,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,120,60,24,0,102,0,177,248,204,0,126,185,0,0,24,96,24,0,198,116,24,0,48,112,51,44,44,44,48,102,102,102,102,102,102,111,192,96,96,96,96,24,24,24,24,246,230,102,102,102,102,195,28,219,102,102,102,102,102,99,108,6,6,6,6,6,6,27,102,102,102,102,102,24,24,24,24,124,102,102,102,102,102,102,126,103,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,254,6,48,220,0,48,12,60,24,0,0,0,48,118,24,48,6,254,6,102,24,102,6,0,0,48,0,12,24,222,126,102,192,102,96,96,198,102,24,102,108,98,214,206,198,96,198,108,14,24,102,60,254,60,24,50,48,12,12,0,0,0,30,102,96,102,126,48,102,102,24,6,120,24,107,102,102,102,102,102,60,24,102,102,107,28,102,24,24,24,24,0,204,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,62,48,66,60,24,60,0,177,0,102,0,0,177,0,0,24,248,240,0,198,20,0,0,48,0,102,25,27,217,96,126,126,126,126,126,126,124,102,120,120,120,120,24,24,24,24,102,214,195,195,195,195,195,54,243,102,102,102,102,60,99,102,30,30,30,30,30,30,127,96,126,126,126,126,24,24,24,24,198,102,102,102,102,102,102,0,107,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,254,6,48,220,0,48,12,60,24,0,0,0,48,118,24,48,6,254,6,102,24,102,6,0,0,48,0,12,24,222,126,102,192,102,96,96,198,102,24,102,108,98,214,206,198,96,198,108,14,24,102,60,254,60,24,50,48,12,12,0,0,0,30,102,96,102,126,48,102,102,24,6,120,24,107,102,102,102,102,102,60,24,102,102,107,28,102,24,24,24,24,0,204,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,62,48,66,60,24,60,0,177,0,102,0,0,177,0,0,24,248,240,0,198,20,0,0,48,0,102,25,27,217,96,126,126,126,126,126,126,124,102,120,120,120,120,24,24,24,24,102,214,195,195,195,195,195,54,243,102,102,102,102,60,99,102,30,30,30,30,30,30,127,96,126,126,126,126,24,24,24,24,198,102,102,102,102,102,102,0,107,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,0,108,124,102,204,0,24,24,102,24,24,0,24,96,102,24,102,102,12,102,102,24,102,12,24,24,24,126,24,0,192,195,102,102,108,102,96,102,102,24,102,102,102,198,198,108,96,108,102,102,24,102,60,238,102,24,102,48,6,12,0,0,0,102,102,102,102,96,48,60,102,24,6,108,24,99,102,102,124,62,96,6,26,102,60,54,54,60,50,24,24,24,0,51,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,12,48,0,24,24,2,0,157,252,51,0,0,169,0,0,0,0,0,0,238,20,0,0,0,248,204,51,49,51,102,195,195,195,195,195,195,204,60,96,96,96,96,24,24,24,24,108,206,102,102,102,102,102,99,102,102,102,102,102,24,126,102,102,102,102,102,102,102,216,102,96,96,96,96,24,24,24,24,198,102,102,102,102,102,102,24,115,102,102,102,102,60,124,60,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,0,108,124,102,204,0,24,24,102,24,24,0,24,96,102,24,102,102,12,102,102,24,102,12,24,24,24,126,24,0,192,195,102,102,108,102,96,102,102,24,102,102,102,198,198,108,96,108,102,102,24,102,60,238,102,24,102,48,6,12,0,0,0,102,102,102,102,96,48,60,102,24,6,108,24,99,102,102,124,62,96,6,26,102,60,54,54,60,50,24,24,24,0,51,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,60,12,48,0,24,24,2,0,157,252,51,0,0,169,0,0,0,0,0,0,238,20,0,0,0,248,204,51,49,51,102,195,195,195,195,195,195,204,60,96,96,96,96,24,24,24,24,108,206,102,102,102,102,102,99,102,102,102,102,102,24,126,102,102,102,102,102,102,102,216,102,96,96,96,96,24,24,24,24,198,102,102,102,102,102,102,24,115,102,102,102,102,60,124,60,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,108,24,198,118,0,12,48,0,0,24,0,24,192,60,126,126,60,30,60,60,24,60,56,24,24,12,0,48,24,120,195,252,60,248,254,240,62,102,126,60,230,254,198,198,56,240,60,227,60,60,62,24,198,195,60,254,60,3,60,0,0,0,59,60,60,59,60,120,198,230,60,102,230,60,99,102,60,96,6,240,124,12,59,24,54,99,24,126,14,24,112,0,204,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,126,0,60,24,60,0,129,0,0,0,0,129,0,0,126,0,0,0,250,20,0,24,0,0,0,103,98,103,60,195,195,195,195,195,195,207,8,254,254,254,254,126,126,126,126,248,198,60,60,60,60,60,0,188,62,62,62,62,60,96,108,59,59,59,59,59,59,119,60,60,60,60,60,60,60,60,60,124,102,60,60,60,60,60,0,62,59,59,59,59,24,96,24,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,108,24,198,118,0,12,48,0,0,24,0,24,192,60,126,126,60,30,60,60,24,60,56,24,24,12,0,48,24,120,195,252,60,248,254,240,62,102,126,60,230,254,198,198,56,240,60,227,60,60,62,24,198,195,60,254,60,3,60,0,0,0,59,60,60,59,60,120,198,230,60,102,230,60,99,102,60,96,6,240,124,12,59,24,54,99,24,126,14,24,112,0,204,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,126,0,60,24,60,0,129,0,0,0,0,129,0,0,126,0,0,0,250,20,0,24,0,0,0,103,98,103,60,195,195,195,195,195,195,207,8,254,254,254,254,126,126,126,126,248,198,60,60,60,60,60,0,188,62,62,62,62,60,96,108,59,59,59,59,59,59,119,60,60,60,60,60,60,60,60,60,124,102,60,60,60,60,60,0,62,59,59,59,59,24,96,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,0,0,0,0,0,124,0,0,60,0,0,0,0,0,240,7,0,0,0,0,0,0,0,112,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,126,0,0,0,0,0,0,192,0,0,48,0,0,0,1,7,1,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,96,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,112,240,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,0,0,0,0,0,124,0,0,60,0,0,0,0,0,240,7,0,0,0,0,0,0,0,112,0,0,0,0,0,51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,126,0,0,0,0,0,0,192,0,0,48,0,0,0,1,7,1,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,96,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,64,0,0,0,0,112,240,112};

uint8_t topazNew_font[] ={126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,108,108,24,0,56,24,12,48,0,0,0,0,0,3,60,24,60,60,28,126,28,126,60,60,0,0,0,0,0,60,124,60,124,30,120,126,126,60,102,60,6,198,96,198,198,60,124,120,124,60,126,102,102,198,195,195,254,60,192,60,16,0,24,0,96,0,6,0,28,0,96,24,12,96,24,0,0,0,0,0,0,0,48,0,0,0,0,0,0,14,24,112,114,102,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,28,60,195,24,60,102,126,28,0,62,0,126,126,60,24,120,120,56,0,62,0,36,48,56,0,119,0,102,24,48,12,24,113,102,24,31,30,48,12,24,102,48,12,24,102,120,113,48,12,24,113,195,0,63,48,12,24,102,6,192,60,48,12,24,113,102,24,0,0,48,12,24,102,48,12,24,0,96,113,48,12,24,113,0,0,0,48,12,24,0,12,96,0,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,108,108,24,0,56,24,12,48,0,0,0,0,0,3,60,24,60,60,28,126,28,126,60,60,0,0,0,0,0,60,124,60,124,30,120,126,126,60,102,60,6,198,96,198,198,60,124,120,124,60,126,102,102,198,195,195,254,60,192,60,16,0,24,0,96,0,6,0,28,0,96,24,12,96,24,0,0,0,0,0,0,0,48,0,0,0,0,0,0,14,24,112,114,102,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,28,60,195,24,60,102,126,28,0,62,0,126,126,60,24,120,120,56,0,62,0,36,48,56,0,119,0,102,24,48,12,24,113,102,24,31,30,48,12,24,102,48,12,24,102,120,113,48,12,24,113,195,0,63,48,12,24,102,6,192,60,48,12,24,113,102,24,0,0,48,12,24,102,48,12,24,0,96,113,48,12,24,113,0,0,0,48,12,24,0,12,96,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,108,62,102,108,24,24,24,102,24,0,0,0,6,102,56,102,102,60,96,48,6,102,102,24,24,6,0,96,102,198,102,102,48,108,96,96,102,102,24,6,204,96,238,230,102,102,204,102,102,24,102,102,198,102,102,12,48,96,12,56,0,24,0,96,0,6,0,48,0,96,0,0,96,24,0,0,0,0,0,0,0,48,0,0,0,0,0,0,24,24,24,156,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,12,54,98,102,24,96,102,129,36,51,6,0,129,0,102,24,12,12,254,0,122,0,24,112,68,204,204,0,0,0,24,24,102,142,0,36,60,48,24,24,102,0,24,24,102,0,108,206,24,24,102,142,60,198,102,24,24,36,0,8,192,102,24,24,102,142,0,36,0,0,24,24,102,0,24,24,102,102,252,142,24,24,102,142,102,24,2,24,24,102,102,24,96,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,108,62,102,108,24,24,24,102,24,0,0,0,6,102,56,102,102,60,96,48,6,102,102,24,24,6,0,96,102,198,102,102,48,108,96,96,102,102,24,6,204,96,238,230,102,102,204,102,102,24,102,102,198,102,102,12,48,96,12,56,0,24,0,96,0,6,0,48,0,96,0,0,96,24,0,0,0,0,0,0,0,48,0,0,0,0,0,0,24,24,24,156,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,12,54,98,102,24,96,102,129,36,51,6,0,129,0,102,24,12,12,254,0,122,0,24,112,68,204,204,0,0,0,24,24,102,142,0,36,60,48,24,24,102,0,24,24,102,0,108,206,24,24,102,142,60,198,102,24,24,36,0,8,192,102,24,24,102,142,0,36,0,0,24,24,102,0,24,24,102,102,252,142,24,24,102,142,102,24,2,24,24,102,102,24,96,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,254,96,172,104,48,48,12,60,24,0,0,0,12,110,120,6,6,108,124,96,6,102,102,24,24,24,126,24,6,222,102,102,96,102,96,96,96,102,24,6,216,96,254,246,102,102,204,102,112,24,102,102,198,60,60,24,48,48,12,108,0,12,60,124,60,62,60,124,62,124,24,12,102,24,236,124,60,124,62,124,60,124,102,102,198,198,102,126,24,24,24,0,195,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,62,48,248,60,24,60,0,157,68,102,0,0,185,0,60,126,24,24,12,102,122,24,126,48,68,102,204,126,195,24,60,60,60,60,60,60,60,96,126,126,126,126,60,60,60,60,102,230,60,60,60,60,102,108,110,102,102,102,102,195,252,102,60,60,60,60,60,60,126,60,60,60,60,60,0,0,0,0,24,0,0,0,0,0,0,0,124,0,0,0,0,0,124,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,254,96,172,104,48,48,12,60,24,0,0,0,12,110,120,6,6,108,124,96,6,102,102,24,24,24,126,24,6,222,102,102,96,102,96,96,96,102,24,6,216,96,254,246,102,102,204,102,112,24,102,102,198,60,60,24,48,48,12,108,0,12,60,124,60,62,60,124,62,124,24,12,102,24,236,124,60,124,62,124,60,124,102,102,198,198,102,126,24,24,24,0,195,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,62,48,248,60,24,60,0,157,68,102,0,0,185,0,60,126,24,24,12,102,122,24,126,48,68,102,204,126,195,24,60,60,60,60,60,60,60,96,126,126,126,126,60,60,60,60,102,230,60,60,60,60,102,108,110,102,102,102,102,195,252,102,60,60,60,60,60,60,126,60,60,60,60,60,0,0,0,0,24,0,0,0,0,0,0,0,124,0,0,0,0,0,124,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,108,60,216,118,0,48,12,255,126,0,126,0,24,126,24,12,28,204,6,124,12,60,62,0,0,96,0,6,12,214,126,124,96,102,120,120,110,126,24,6,240,96,214,222,102,124,204,124,60,24,102,102,214,24,24,48,48,24,12,198,0,0,6,102,96,102,102,48,102,102,24,12,108,24,254,102,102,102,102,102,96,48,102,102,198,108,102,12,112,24,14,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,120,96,24,0,102,0,177,60,204,0,126,165,0,0,24,48,12,24,102,58,24,12,48,56,51,207,219,102,48,102,102,102,102,102,102,111,96,96,96,96,96,24,24,24,24,246,246,102,102,102,102,102,56,126,102,102,102,102,102,198,108,6,6,6,6,6,6,27,96,102,102,102,102,24,24,24,24,60,124,60,60,60,60,60,126,206,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,108,60,216,118,0,48,12,255,126,0,126,0,24,126,24,12,28,204,6,124,12,60,62,0,0,96,0,6,12,214,126,124,96,102,120,120,110,126,24,6,240,96,214,222,102,124,204,124,60,24,102,102,214,24,24,48,48,24,12,198,0,0,6,102,96,102,102,48,102,102,24,12,108,24,254,102,102,102,102,102,96,48,102,102,198,108,102,12,112,24,14,0,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,108,120,96,24,0,102,0,177,60,204,0,126,165,0,0,24,48,12,24,102,58,24,12,48,56,51,207,219,102,48,102,102,102,102,102,102,111,96,96,96,96,96,24,24,24,24,246,246,102,102,102,102,102,56,126,102,102,102,102,102,198,108,6,6,6,6,6,6,27,96,102,102,102,102,24,24,24,24,60,124,60,60,60,60,60,126,206,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,254,6,54,220,0,48,12,60,24,0,0,0,48,118,24,24,6,254,6,102,24,102,6,0,0,24,126,24,24,222,102,102,96,102,96,96,102,102,24,6,216,96,198,206,102,96,204,108,14,24,102,60,254,60,24,96,48,12,12,0,0,0,62,102,96,102,126,48,102,102,24,12,120,24,214,102,102,102,102,96,60,48,102,102,214,56,102,24,24,24,24,0,60,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,62,48,248,60,24,60,0,157,0,102,0,0,185,0,0,24,124,120,48,102,10,0,24,48,0,102,204,223,60,96,126,126,126,126,126,126,124,48,120,120,120,120,24,24,24,24,102,222,102,102,102,102,102,108,118,102,102,102,102,60,252,102,62,62,62,62,62,62,127,96,126,126,126,126,24,24,24,24,102,102,102,102,102,102,102,0,214,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,0,254,6,54,220,0,48,12,60,24,0,0,0,48,118,24,24,6,254,6,102,24,102,6,0,0,24,126,24,24,222,102,102,96,102,96,96,102,102,24,6,216,96,198,206,102,96,204,108,14,24,102,60,254,60,24,96,48,12,12,0,0,0,62,102,96,102,126,48,102,102,24,12,120,24,214,102,102,102,102,96,60,48,102,102,214,56,102,24,24,24,24,0,60,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,24,62,48,248,60,24,60,0,157,0,102,0,0,185,0,0,24,124,120,48,102,10,0,24,48,0,102,204,223,60,96,126,126,126,126,126,126,124,48,120,120,120,120,24,24,24,24,102,222,102,102,102,102,102,108,118,102,102,102,102,60,252,102,62,62,62,62,62,62,127,96,126,126,126,126,24,24,24,24,102,102,102,102,102,102,102,0,214,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,0,108,124,106,206,0,24,24,102,24,24,0,24,96,102,24,48,102,12,102,102,24,102,12,24,24,6,0,96,0,192,102,102,48,108,96,96,102,102,24,102,204,96,198,198,102,96,220,102,102,24,102,60,238,102,24,192,48,6,12,0,0,0,102,102,96,102,96,48,62,102,24,12,108,24,198,102,102,124,62,96,6,48,102,60,254,108,60,48,24,24,24,0,24,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,198,24,12,48,98,24,24,6,0,129,126,51,0,0,165,0,0,0,0,0,96,102,10,0,48,0,124,204,204,216,24,102,102,102,102,102,102,102,204,30,96,96,96,96,24,24,24,24,108,206,102,102,102,102,102,198,102,102,102,102,102,24,192,102,102,102,102,102,102,102,216,96,96,96,96,96,24,24,24,24,102,102,102,102,102,102,102,24,230,102,102,102,102,60,124,60,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,0,0,0,108,124,106,206,0,24,24,102,24,24,0,24,96,102,24,48,102,12,102,102,24,102,12,24,24,6,0,96,0,192,102,102,48,108,96,96,102,102,24,102,204,96,198,198,102,96,220,102,102,24,102,60,238,102,24,192,48,6,12,0,0,0,102,102,96,102,96,48,62,102,24,12,108,24,198,102,102,124,62,96,6,48,102,60,254,108,60,48,24,24,24,0,24,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,198,24,12,48,98,24,24,6,0,129,126,51,0,0,165,0,0,0,0,0,96,102,10,0,48,0,124,204,204,216,24,102,102,102,102,102,102,102,204,30,96,96,96,96,24,24,24,24,108,206,102,102,102,102,102,198,102,102,102,102,102,24,192,102,102,102,102,102,102,102,216,96,96,96,96,96,24,24,24,24,102,102,102,102,102,102,102,24,230,102,102,102,102,60,124,60,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,108,24,204,123,0,12,48,0,0,24,0,24,192,60,24,126,60,12,60,60,24,60,56,24,24,0,0,0,24,120,102,124,30,120,126,96,62,102,60,60,198,126,198,198,60,96,126,102,60,24,60,24,198,195,24,254,60,3,60,0,0,0,62,124,60,62,60,48,6,102,12,12,102,12,198,102,60,96,6,96,124,28,62,24,108,198,24,126,14,24,112,0,24,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,254,24,0,126,60,24,24,60,0,126,0,0,0,0,129,0,0,126,0,0,254,127,10,0,126,0,0,0,119,119,24,60,102,102,102,102,102,102,207,12,126,126,126,126,60,60,60,60,120,198,60,60,60,60,60,0,252,60,60,60,60,24,192,108,62,62,62,62,62,62,119,60,60,60,60,60,12,12,12,12,60,102,60,60,60,60,60,0,124,62,62,62,62,24,96,24,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,0,24,0,108,24,204,123,0,12,48,0,0,24,0,24,192,60,24,126,60,12,60,60,24,60,56,24,24,0,0,0,24,120,102,124,30,120,126,96,62,102,60,60,198,126,198,198,60,96,126,102,60,24,60,24,198,195,24,254,60,3,60,0,0,0,62,124,60,62,60,48,6,102,12,12,102,12,198,102,60,96,6,96,124,28,62,24,108,198,24,126,14,24,112,0,24,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,126,254,24,0,126,60,24,24,60,0,126,0,0,0,0,129,0,0,126,0,0,254,127,10,0,126,0,0,0,119,119,24,60,102,102,102,102,102,102,207,12,126,126,126,126,60,60,60,60,120,198,60,60,60,60,60,0,252,60,60,60,60,24,192,108,62,62,62,62,62,62,119,60,60,60,60,60,12,12,12,12,60,102,60,60,60,60,60,0,124,62,62,62,62,24,96,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,0,0,0,0,0,60,0,0,120,0,0,0,0,0,96,6,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,0,0,0,0,48,96,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,0,0,0,0,0,60,0,0,120,0,0,0,0,0,96,6,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,0,0,0,0,48,96,48};

#endif
