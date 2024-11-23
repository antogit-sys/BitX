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

#endif
