// Elabore um algoritmo que escreva a tabuada de um numero inteiro.
// Considere a tabuada como o exemplo abaixo:
// número: 5; saída: 5 x 1 = 5; 5 x 2 = 10; ... 5 x 10 = 50;

#include<iostream>
using namespace std;

int main(){
	
	int numero, cont;
	
	cout << "\n\tDigite um numero para a tabuada: ";
	cin >> numero;
	
	cout << "\n\tTABUADA DO NUMERO " << numero << ": ";
	
	cont = 1; //inicialização
	while(cont <= 10){
		cout << "\n\t" << numero << " X " << cont << " = " << (numero*cont);
		cont++;
	}


	cout << "\n\nFim de programa\n";
	system("Pause");
}
