#include <stdio.h>
#include <string.h>
#include "../include/BitX.h"

endian_t getEndian(void){
    endian_t e = BIG_ENDIAN;
    ComplexWORD cw = INIT_SEQ(0x12AB); //w.base = 0x12AB;

    if(cw.oct1 == 0x12  &&  cw.oct2 == 0xAB)
        e = LITTLE_ENDIAN;

    return e;
}

void* multiplexer(const void* arr, size_t sel, size_t dim, size_t data_size){
    void* done = NULL;

    if(sel < dim)
        done = (void*)arr + sel*data_size; //arr + offset

    return done;
}

bool demultiplexer(void* in, void* arr, size_t sel, size_t dim, size_t data_size){
    bool done = false;

    if(sel < dim){
        //arr[sel+offset]
        Byte_t* destination = (Byte_t*)arr + sel * data_size;
        
        // Copia i dati da 'in' a 'arr[sel]'
        memcpy(destination, in, data_size);
        done = true;
    }

    return done;
}

