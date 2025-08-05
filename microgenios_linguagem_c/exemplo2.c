// Comando para compilar: gcc -Wall -o exemplo2 exemplo2.c
// Comando para executar: ./exemplo2

#include <stdio.h>

int main (void) {
    unsigned int a;
    unsigned short int b;
    unsigned long int c;
    unsigned long long int d;

    printf("INT             = %zu bytes\n", sizeof(a));
    printf("SHORT INT       = %zu bytes\n", sizeof(b));
    printf("LONG INT        = %zu bytes\n", sizeof(c));
    printf("LONG LONG INT   = %zu bytes\n", sizeof(d));
    
    return 0;
}
