// Comando para compilar: gcc -Wall -o exemplo4 exemplo4.c
// Comando para executar: ./exemplo4

#include <stdio.h>

unsigned int count = 10; // variável global

// protótipo de função
unsigned int Soma(unsigned char x, unsigned char z);
int Divide(int x, int z);

int main (void) {
    unsigned int result = Soma(200, 56);
    printf("Soma: %d \n", result); 
    printf("Divisão: %d \n", Divide(100, 50));
    printf("Divisão somado com count: %d \n", Divide(100, 5) + count); // Teste de divisão por zero
    return 0;
}

unsigned int Soma(unsigned char x, unsigned char z) {
    return x + z;
}

int Divide(int x, int z) {
    if (z == 0) {
        printf("Erro: Divisão por zero.\n");
        return -1; // Retorna -1 em caso de erro
    }
    return x / z;
}

