#include "agenda.h"

int main() {
    int opcao, id;

    do {
        opcao = menu();
        switch (opcao) {
            case 1:
                cadastrarContato();
                break;
            case 2:
                id = lerID();
                struct Contato* contato = buscarContato(id);
                exibirContato(contato);
                free(contato); // Libera a memória alocada
                break;

                break;
            case 3:
                id = lerID();
                editarContato(id);
                break;
            case 4:
                id = lerID();
                excluirContato(id);
                break;
            case 5:
                listarContatos();
                break;
            case 0:
                printf("Saindo da agenda...\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
