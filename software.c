#include <stdio.h>

volatile unsigned int * e = (unsigned int *) 0x80000000;
volatile unsigned int * z = (unsigned int *) 0x80000004;
volatile unsigned int * lda = (unsigned int *) 0x800000012;
volatile unsigned int * d = (unsigned int *) 0x80000008;

int main() {
    *lda = 0;
    unsigned int p = 3;
    unsigned int q = 17;
    unsigned int n = p * q;
    *e = 2;
    *z = (p - 1) * (q - 1);
    *d = 2;
    *lda = 1;
    while (1)
    {
        /* code */
    }
    
    return 0;
}
