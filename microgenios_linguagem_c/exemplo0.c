// Comando para compilar: gcc -Wall -o exemplo0 exemplo0.c
// Comando para executar: ./exemplo0


// Cálculo da área do círculo

// Diretivas de processamento
#include <stdio.h> // arquivo de cabeçalho

#define PI 3.14159 // declaração de constante

// função principal
void main(void) {
	// declarações de variáveis
	float radius, area;

	// calcular area do circulo
	radius = 12.0;

	area = PI * radius * radius; // processamento

	// declaração de saída
	printf("Area = %f\n", area);
	
}
