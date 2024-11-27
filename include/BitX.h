#ifndef __BITX_H
#   define __BITX_H
#   include <stdint.h>

/* bit wise operator */
#   define AND(a, b)   ((a) & (b))
#   define OR(a, b)    ((a) | (b))
#   define NOT(a)      (~(a))
#   define XOR(a, b)   ((a) ^ (b))
#   define LSHIFT(a)   ((a) << 1)
#   define RSHIFT(a)   ((a) >> 1)

/* subsection bit wise operator */
#   define NAND(a, b)       (NOT(AND(a, b))
#   define NOR(a, b)        (NOT(OR(a, b))
#   define XNOR(a, b)       (NOT(XOR(a, b))
#   define EXNOR(a, b)      (XNOR(a, b))
#   define LSHIFT_POS(a, b) ((a) << (n))
#   define RSHIFT_POS(a, b) ((a) >> (n)) 

typedef uint8_t Byte_t;
typedef union{
    struct{
        Byte_t oct1;
        Byte_t oct2;
    };
    uint16_t base;
}word16_t;

typedef union{
    struct{
        Byte_t oct1;
        Byte_t oct2;
        Byte_t oct3;
        Byte_t oct4;
    };
    uint32_t base;
}word32_t;

typedef union{
    struct{
        Byte_t oct1;
        Byte_t oct2;
        Byte_t oct3;
        Byte_t oct4;
        Byte_t oct5;
        Byte_t oct6;
        Byte_t oct7;
        Byte_t oct8;
    };
    uint64_t base;
}word64_t;

typedef word16_t word;
typedef word32_t dword;
typedef word64_t qword;


#endif
