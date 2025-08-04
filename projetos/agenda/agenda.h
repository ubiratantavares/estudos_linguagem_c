#ifndef AGENDA_H
#define AGENDA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NOME_ARQUIVO "agenda.dat"

#define TAMANHO_MAXIMO_NOME 100
#define TAMANHO_MAXIMO_CELULAR 15
#define TAMANHO_MAXIMO_EMAIL 100
#define TAMANHO_MAXIMO_ENDERECO 200
#define TAMANHO_MAXIMO_CIDADE 50
#define TAMANHO_MAXIMO_ESTADO 50
#define TAMANHO_MAXIMO_CEP 10  

struct Contato {
    int id;
    char nome[TAMANHO_MAXIMO_NOME];
    char celular[TAMANHO_MAXIMO_CELULAR];
    char email[TAMANHO_MAXIMO_EMAIL];
    char endereco[TAMANHO_MAXIMO_ENDERECO];
    char cidade[TAMANHO_MAXIMO_CIDADE];
    char estado[TAMANHO_MAXIMO_ESTADO];
    char cep[TAMANHO_MAXIMO_CEP];
    char status; // 'A' para ativo, 'I' para inativo
};

// funções utilitárias
FILE* abrirArquivo(const char* caminho);
void fecharArquivo(FILE* arquivo);

int menu();

// funções de manipulação de contatos
void limparEntrada(char* campo, int tamanho);
void preencherDadosContato(struct Contato* contato);
int gravarContato(struct Contato* contato);
void cadastrarContato();
long buscarContatoPorId(int id, struct Contato* contato);   
struct Contato* buscarContato(int id);
void editarContato(int id);
void excluirContato(int id);
void listarContatos();
void exibirContato(struct Contato* contato);
int lerID();

#endif // AGENDA_H
