// Comando para compilar: gcc -Wall -o exemplo3 exemplo3.c
// Comando para executar: ./exemplo3

#include <stdio.h>

unsigned int Soma(unsigned char x, unsigned char z) {
    return x + z;
}

int main (void) {
    unsigned int result = Soma(200, 56);
    printf("Soma: %d \n", result); 
    return 0;
}
