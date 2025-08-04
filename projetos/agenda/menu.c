#include "agenda.h"

int menu() {
    int opcao;
    printf("\nMenu:\n");
    printf("1. Cadastrar Contato\n");
    printf("2. Consultar Contato\n");
    printf("3. Editar Contato\n");
    printf("4. Excluir Contato\n");
    printf("5. Listar Contados\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
    
    while (scanf("%d", &opcao) != 1 || opcao < 0 || opcao > 5) {
        printf("Opção inválida. Por favor, escolha uma opção entre 0 e 5: ");
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }
    
    return opcao;
}
