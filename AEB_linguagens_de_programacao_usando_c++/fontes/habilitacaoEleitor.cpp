#include<iostream>
using namespace std;


int main(){                     
    int idade;
    
    cout << "\nQual a sua idade? ";
    cin >> idade;    
    
    if(idade>=16) {
        cout << "\nVoce pode tirar Titulo de Eleitor";
        if(idade>=18)
            cout << "\nVoce pode tirar Carteira de Habilitacao";
        else    
            cout << "\nVoce NAO pode tirar Carteira de Habilitacao";
    }
    else
        cout << "\nVoce NAO pode tirar Titulo de Eleitor ou Carteira de Habilitacao";

    cout << "\n\nFim de programa\n";
    system("PAUSE");           
    
}

