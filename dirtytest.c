#include <stdio.h>
#include "include/BitX.h"

int main()
{
    CWORD cin[4]={{.base = 0x0000}, {.base= 0x0001}, {.base=0x0002}, {.base=0x0003}};
    word in[4]={0x0000, 0x0001, 0x0002, 0x0003};

    int sel;
    size_t dim = sizeof(in)/sizeof(in[0]);
    

    printf("questo e' un sistema: %s\n",GETENDIAN());
    putchar('\n');
    printf("inserisci selettore: ");
    scanf("%d",&sel);

    word* output = (word*)multiplexer(in, sel, dim, sizeof(word));
    ComplexWORD* cout = MUX(in, sel, dim, ComplexWORD);

    if (output==NULL && cout == NULL){
        printf("errore, qualcosa e' andato storto!\n");
        free(output);
        exit(0);
    }
    printf("out: 0x%04X\n", *output);
    printf("out complex: 0x%04X\n",cout->base);

}
