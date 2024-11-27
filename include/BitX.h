#ifndef __BITX_H
#   define __BITX_H
#   include <stdint.h>

/* macro bit wise operator */
#   define AND(a, b)   ((a) & (b))
#   define OR(a, b)    ((a) | (b))
#   define NOT(a)      (~(a))
#   define XOR(a, b)   ((a) ^ (b))
#   define LSHIFT(a)   ((a) << 1)
#   define RSHIFT(a)   ((a) >> 1)

/* macro subsection bit wise operator */
#   define NAND(a, b)       (NOT(AND(a, b))
#   define NOR(a, b)        (NOT(OR(a, b))
#   define XNOR(a, b)       (NOT(XOR(a, b))
#   define EXNOR(a, b)      (XNOR(a, b))
#   define LSHIFT_POS(a, b) ((a) << (n))
#   define RSHIFT_POS(a, b) ((a) >> (n)) 


/* Generic Macro Utility */
#   define GETENDIAN() ((getEndian() == BIG_ENDIAN)?\
        "Big Endian":"Little Endian")
#   define INIT_SEQ(value) {.base = value}

typedef enum{
    BIG_ENDIAN,     // = 0
    LITTLE_ENDIAN   // = 1
}endian_t;

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

/* Functions Utility */
endian_t getEndian(void);

#endif
