#ifndef __BITX_H
#	define __BITX_H
#	include <stdint.h>

/* bit wise operator */
#define AND(a, b)	((a) & (b))
#define OR(a, b)	((a) | (b))
#define NOT(a)		(~(a))
#define XOR(a, b)	((a) ^ (b))
#define LSHIFT(a)	((a) << 1)
#define RSHIFT(a)	((a) >> 1)

/* subsection bit wise operator */
#endif
