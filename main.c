#include <stdio.h>
#include "include/BitX.h"


int main(void)
{
    word w[5] = {0x0000, 0x0000, 0x0000, 0x0000};

    word in = 0xAB12;
    Byte_t b=0b10101101;

    if(DEMUX(&in, w, 2, 5, word)){
        printf("Dato copiato 0x%04X\n",w[2]);
    }

    //for(size_t i=BITLEN(CWORD)-1; i-->0;)
    //    printf("%d",(b.base>>i)&1);
    PRINTB(b, Byte_t);
}
