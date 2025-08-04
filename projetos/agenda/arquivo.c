#include "agenda.h"

FILE* abrirArquivo(const char* caminho) {
    FILE* arquivo = fopen(caminho, "rb+");
    if (!arquivo) {
        arquivo = fopen(caminho, "wb+");
        if (!arquivo) {
            perror("Erro ao abrir o arquivo");
            exit(EXIT_FAILURE);
        }
    }
    return arquivo;
}

void fecharArquivo(FILE* arquivo) {
    if (arquivo) {
        fclose(arquivo);
    }
}

