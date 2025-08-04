// menu


#include<iostream>
using namespace std;

int main(){
	int opcao;

	do{
		system("cls"); //limpa a tela
		cout << "\n\n\tMENU PRINCIPAL";
		cout << "\n\t1 - Comprar lanche";
		cout << "\n\t2 - Comprar somente bebida";
		cout << "\n\t3 - Comprar somente sanduiche";
		cout << "\n\t4 - Sair do sistema";
		cout << "\n\n\tDigite a opcao desejada: ";
		cin >> opcao;
		
		switch(opcao){
			case 1: cout << "\n\n\tVoce decidiu comprar um lanche.";
				cout << "\n\tHoje temos suco de fruta e hamburger.";
				cout << "\n\tValor = 15.00";
				break;
			case 2: cout << "\n\n\tVoce decidiu comprar somente bebida.";
				cout << "\n\tHoje temos suco de fruta";
				cout << "\n\tValor = 5.00";
				break;
			case 3: cout << "\n\n\tVoce decidiu comprar somente sanduiche.";
				cout << "\n\tHoje temos hamburger.";
				cout << "\n\tValor = 10.00";
				break;			
			case 4: cout << "\n\n\tAte outro dia!";
				break;		
			default: cout << "\n\tOpcao invalida, tente novamente.";
		}	
			
		cout << "\n\n";
		system("Pause");

	}while(opcao!=4);

	
	cout << "\n\nFim de programa\n";
	system("Pause");
}
