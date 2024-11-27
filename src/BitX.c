#include <stdio.h>
#include "../include/BitX.h"

endian_t getEndian(void){
    endian_t e = BIG_ENDIAN;
    word w;

    w.base = 0x12AB;

    if(w.oct1 == 0x12  &&  w.oct2 == 0xAB)
        e = LITTLE_ENDIAN;

    return e;
}

