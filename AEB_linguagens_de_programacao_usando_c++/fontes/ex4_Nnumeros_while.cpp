// Elabore um algoritmo que leia N números reais (o valor de N também deve ser lido), 
// calcule e escreva a soma desses números.
// Exemplo: numeros digitados foram: 2, 4.5, 3, 10.5
// soma = 0
// soma = 0 + 2 = 2;
// soma = 2 + 4.5 = 6.5;
// soma = 6.5 + 3 = 9.5;
// soma = 9.5 + 10.5 = 20;

#include<iostream>
using namespace std;

int main(){

	int N, cont;
	float numero, soma = 0;
	
	cout << "\n\tDigite a quantidade de numeros que serao lidos: ";
	cin >> N;

	cont = 1;
	while(cont<=N){
		cout << "\n\tDigite um numero: ";
		cin >> numero;
		soma = soma + numero;
		cont++;
	}
	
	cout << "\n\tSoma dos numeros = " << soma;
	
	cout << "\n\nFim de programa\n";
	system("Pause");
}
