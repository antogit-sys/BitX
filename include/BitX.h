#ifndef __BITX_H
#   define __BITX_H
#   include <stdint.h>
#   include <stdbool.h>
#   include <stdlib.h>

/* macro bit wise operator */
#   define AND(a, b)   ((a) & (b))
#   define OR(a, b)    ((a) | (b))
#   define NOT(a)      (~(a))
#   define XOR(a, b)   ((a) ^ (b))
#   define LSHIFT(a)   ((a) << 1)
#   define RSHIFT(a)   ((a) >> 1)

/* macro subsection bit wise operator */
#   define NAND(a, b)       (NOT(AND(a, b)))
#   define NOR(a, b)        (NOT(OR(a, b)))
#   define XNOR(a, b)       (NOT(XOR(a, b)))
#   define EXNOR(a, b)      (XNOR(a, b))
#   define LSHIFT_POS(a, n) ((a) << (n))
#   define RSHIFT_POS(a, n) ((a) >> (n)) 


/* simple macro type */
#   define CWORD ComplexWORD
#   define CDWORD ComplexDWORD
#   define CQWORD ComplexQWORD

/* MUX & DEMUX macro*/
#   define MUX(arr, sel, dim, ds)       (multiplexer(arr, sel, dim, sizeof(ds)))
#   define DEMUX(in, arr, sel, dim, ds) (demultiplexer(in, arr, sel, dim, sizeof(ds)))

/* Generic Macro Utility */
#   define GETENDIAN() ((getEndian() == BIG_ENDIAN)?\
        "Big Endian":"Little Endian")
#   define INIT_SEQ(value)      {.base = value}
#   define BITCOUNT(type)       (sizeof(type)*8)
#   define BITLEN(type)         (BITCOUNT(type))
#   define BIT_POS(value, pos)  (AND(RSHIFT_POS(value, pos), 1)) //((value>>pos)&1)
#   define PRINTB(v, type) \
        for(size_t i=BITLEN(type); i-->0;) \
            printf("%d",BIT_POS(v, i)); \
        fflush(stdout);

typedef enum{
    BIG_ENDIAN,     // = 0
    LITTLE_ENDIAN   // = 1
}endian_t;

/* defined simple type */
typedef uint8_t Byte_t;
typedef uint16_t word;
typedef uint32_t dword;
typedef uint64_t qword;
// define subsection simple type
typedef uint16_t word16_t;
typedef uint32_t word32_t;
typedef uint64_t word64_t;


/* defined complex type */
typedef union{
    struct{
        Byte_t oct1;
        Byte_t oct2;
    };
    word base;
}ComplexWORD;

typedef union{
    struct{
        Byte_t oct1;
        Byte_t oct2;
        Byte_t oct3;
        Byte_t oct4;
    };
    dword base;
}ComplexDWORD;

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
    qword base;
}ComplexQWORD;

/* Functions Utility */
endian_t getEndian(void);
void* multiplexer(const void*, size_t, size_t, size_t);
bool demultiplexer(void*, void*, size_t, size_t, size_t);

#endif
