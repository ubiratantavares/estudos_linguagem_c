// Elabore um algoritmo que leia um numero (1-7)
// representando o dia da semana (1-domingo, 7-sábado),
// verifique e escreva por extendo o dia da semana correspondente.
// Exemplo: dia = 1, escreva "domingo".

#include<iostream>
using namespace std;

int main(){
	int dia;
	
	//entrada
	cout << "Digite o dia da semana, considerando 1-domingo, 2-segunda...: ";
	cin >> dia;
	
	//processamento
	
	cout << "\n\nExecutando com o if...\n";
		
	if(dia==1){
		cout << "\nDomingo";
	}else{
		if(dia==2){
			cout << "\nSegunda-feira";
		}else{
			if(dia==3){
				cout << "\nTerca-feira";
			}else{
				if(dia==4){
					cout << "\nQuarta-feira";
				}else{
					if(dia==5){
						cout << "\nQuinta-feira";
					}else{
						if(dia==6){
							cout << "\nSexta-feira";
						}else{
							if(dia==7){
								cout << "\nSabado";
							}else{
								cout << "\nDia invalido";
							}
						}
					}
				}
			}
		}
	}
	
	cout << "\n\nExecutando com o switch...\n";
	
	switch(dia){
		case 1: cout << "\nDomingo";
			break;
		case 2: cout << "\nSegunda-feira";
			break;
		case 3: cout << "\nTerca-feira";
			break;
		case 4: cout << "\nQuarta-feira";
			break;
		case 5: cout << "\nQuinta-feira";
			break;
		case 6: cout << "\nSexta-feira";
			break;
		case 7: cout << "\nSabado";
			break;
		default: cout << "\nDia invalido";
	}
	
	
	
	cout << "\n\nFim de programa\n";
	system("Pause");
}
