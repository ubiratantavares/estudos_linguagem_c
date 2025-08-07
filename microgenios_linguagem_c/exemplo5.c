// Comando para compilar: gcc -Wall -o exemplo5 exemplo5.c
// Comando para executar: ./exemplo5

#include <stdio.h>

unsigned int Soma(void);

int main (void) {
    printf("Soma: %d \n", Soma()); 
    printf("Soma: %d \n", Soma()); 
    printf("Soma: %d \n", Soma()); 

    return 0;
}

unsigned int Soma(void) {
	static unsigned char t = 0;
	t++;
	t++;
    return t;
}
