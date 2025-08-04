// Elabore um algoritmo que escreva a tabuada de um numero inteiro.
// Considere a tabuada como o exemplo abaixo:
// número: 5; saída: 5 x 1 = 5; 5 x 2 = 10; ... 5 x 10 = 50;
// Considere que os fatores de multiplicação deverão ser informados pelo usuário
// (fator inicial e fator final)
// Exemplo: número = 7; fatorInicial = 4; fatorFinal = 12
// Saída: 7 X 4 = 28; 7 X 5 = 35; ... 7 X 12 = 84.

#include<iostream>
using namespace std;

int main(){
	
	int numero, cont, fatorInicial, fatorFinal;
	
	cout << "\n\tDigite um numero para a tabuada: ";
	cin >> numero;
	cout << "\n\tQual o fator inicial da multiplicacao: ";
	cin >> fatorInicial;
	cout << "\n\tQual o fator final da multiplicacao: ";
	cin >> fatorFinal;
	
	
	cout << "\n\tTABUADA DO NUMERO " << numero << ": ";
	
	cont = fatorInicial; //inicialização
	while(cont <= fatorFinal){
		cout << "\n\t" << numero << " X " << cont << " = " << (numero*cont);
		cont++;
	}


	cout << "\n\nFim de programa\n";
	system("Pause");
}
