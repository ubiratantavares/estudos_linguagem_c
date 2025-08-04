// Elabore um algoritmo que leia a idade de uma pessoa. 
// Enquanto o valor fornecido não estiver correto, (maior ou igual a 1) 
// escreva uma mensagem de erro e solicite novamente a idade. 
// Quando o valor fornecido estiver correto, calcule e escreva 
// quantos anos faltam para chegar aos 40 anos, se for o caso.

#include<iostream>
using namespace std;

int main(){
	int idade;
	
	cout << "\n\tDigite a idade de uma pessoa: ";
	cin >> idade;

	while(idade<1){
		cout << "\n\tIdade incorreta, digite novamente: ";	
		cin >> idade;
	}

	if(idade<40){
		cout << "\n\tFaltam " << (40-idade) << " anos para os 40";
	}else{
		cout << "\n\t40 anos ja atingidos";
	}

	cout << "\n\nFim de programa\n";
	system("Pause");
}
