// Comando para compilar: gcc -Wall -o exemplo1 exemplo1.c
// Comando para executar: ./exemplo1

#include <stdio.h>

int main (void) {
    unsigned char a;
    unsigned int b;
    float c;
    double d;
    long double e;

    printf("CHAR         = %zu bytes\n", sizeof(a));
    printf("INT          = %zu bytes\n", sizeof(b));
    printf("FLOAT        = %zu bytes\n", sizeof(c));
    printf("DOUBLE       = %zu bytes\n", sizeof(d));
    printf("LONG DOUBLE  = %zu bytes\n", sizeof(e));
  
    return 0;
}
