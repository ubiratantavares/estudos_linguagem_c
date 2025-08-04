#include "agenda.h"

void limparEntrada(char* campo, int tamanho) {
    fgets(campo, tamanho, stdin);
    campo[strcspn(campo, "\n")] = '\0'; // Remove o newline
}

void preencherDadosContato(struct Contato* contato) {
    setbuf(stdin, NULL); // Limpa o buffer de entrada

    printf("Digite o nome: ");
    limparEntrada(contato->nome, TAMANHO_MAXIMO_NOME);

    printf("Digite o celular: ");
    limparEntrada(contato->celular, TAMANHO_MAXIMO_CELULAR);

    printf("Digite o email: ");
    limparEntrada(contato->email, TAMANHO_MAXIMO_EMAIL);

    printf("Digite o endereço: ");
    limparEntrada(contato->endereco, TAMANHO_MAXIMO_ENDERECO);

    printf("Digite a cidade: ");
    limparEntrada(contato->cidade, TAMANHO_MAXIMO_CIDADE);

    printf("Digite o estado: ");
    limparEntrada(contato->estado, TAMANHO_MAXIMO_ESTADO);

    printf("Digite o CEP: ");
    limparEntrada(contato->cep, TAMANHO_MAXIMO_CEP);
}

int gravarContato(struct Contato* contato) {

    FILE* arquivo = abrirArquivo(NOME_ARQUIVO);

    if (!arquivo) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    fseek(arquivo, (contato->id - 1) * sizeof(struct Contato), SEEK_SET);
    fwrite(contato, sizeof(struct Contato), 1, arquivo);
    fecharArquivo(arquivo);

    return 1; // Sucesso
}

void cadastrarContato() {

    FILE* arquivo = abrirArquivo(NOME_ARQUIVO);

    if (!arquivo) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // posiciona o ponteiro do arquivo no final para calcular o próximo ID
    fseek(arquivo, 0, SEEK_END);
    long pos = ftell(arquivo);
    int proximoId = (int)(pos / sizeof(struct Contato)) + 1;

    struct Contato contato;
    contato.id = proximoId; // Atribui o próximo ID
    contato.status = 'A'; // Marca como ativo        
    preencherDadosContato(&contato);

    if (gravarContato(&contato)) {
        printf("Contato cadastrado com sucesso!\n");
    } else {
        printf("Erro ao cadastrar o contato.\n");
    }
}

long buscarContatoPorId(int id, struct Contato* contato) {
    FILE* arquivo = abrirArquivo(NOME_ARQUIVO);
    if (!arquivo) return -1;

    fseek(arquivo, 0, SEEK_SET);
    long pos = 0;

    while (fread(contato, sizeof(struct Contato), 1, arquivo) == 1) {
        if (contato->id == id && contato->status == 'A') {
            pos = ftell(arquivo) - sizeof(struct Contato);
            fecharArquivo(arquivo);
            return pos;
        }
    }

    fecharArquivo(arquivo);
    return -1; // não encontrado
}

struct Contato* buscarContato(int id) { 
    
    struct Contato* contato = malloc(sizeof(struct Contato));

    if (!contato) {
        perror("Erro ao alocar memória para contato");
        exit(EXIT_FAILURE);
    }   

    FILE* arquivo = abrirArquivo(NOME_ARQUIVO);

    if (!arquivo) {
        printf("Erro ao abrir o arquivo.\n");
        free(contato);
        return NULL;
    }   

    fseek(arquivo, 0, SEEK_SET);

    while (fread(contato, sizeof(struct Contato), 1, arquivo) == 1) {
        if (contato->id == id && contato->status == 'A') { // Verifica se o contato está ativo
            fecharArquivo(arquivo); // Fecha o arquivo
            return contato; // Retorna o contato encontrado
        }
    }

    fecharArquivo(arquivo); // Fecha o arquivo
    free(contato); // Libera a memória alocada
    return NULL;
}



void editarContato(int id) {
    struct Contato* contato = buscarContato(id);

    if (contato == NULL) {
        printf("Contato não encontrado.\n");
        return;
    }

    printf("Editando contato ID: %d\n", contato->id);
    preencherDadosContato(contato);

    if (gravarContato(contato)) {
        printf("Contato atualizado com sucesso!\n");
    } else {
        printf("Erro ao atualizar o contato.\n");
    }

    free(contato); // Libera a memória alocada
}

void excluirContato(int id) {
    struct Contato* contato = buscarContato(id);

    if (!contato) {
        printf("Contato não encontrado.\n");
        return;
    }

    // Confirmação opcional
    printf("Deseja realmente excluir o contato \"%s\"? (s/n): ", contato->nome);
    char confirmacao;
    scanf(" %c", &confirmacao);
    getchar(); // Limpa o newline do buffer

    if (confirmacao != 's' && confirmacao != 'S') {
        printf("Exclusão cancelada pelo usuário.\n");
        free(contato);
        return;
    }

    // Marca o contato como inativo
    contato->status = 'I';

    if (gravarContato(contato)) {
        printf("Contato excluído com sucesso!\n");
    } else {
        printf("Erro ao excluir o contato.\n");
    }

    free(contato);    
}

void listarContatos() {
    FILE* arquivo = abrirArquivo(NOME_ARQUIVO);

    if (!arquivo) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    struct Contato contato;
    int total = 0;

    fseek(arquivo, 0, SEEK_SET);

    printf("Lista de Contatos:\n");

    while (fread(&contato, sizeof(struct Contato), 1, arquivo) == 1) {
        if (contato.status == 'A') { // Apenas contatos ativos
            printf("ID: %d\n", contato.id);
            printf("Nome: %s\n", contato.nome);
            printf("Celular: %s\n", contato.celular);
            printf("Email: %s\n", contato.email);
            printf("Endereço: %s\n", contato.endereco);
            printf("Cidade: %s\n", contato.cidade);
            printf("Estado: %s\n", contato.estado);
            printf("CEP: %s\n", contato.cep);
            printf("-------------------------\n");
            total++;
        }
    }
    fecharArquivo(arquivo); // Fecha o arquivo

    if (total == 0) {
        printf("Nenhum contato cadastrado.\n");
    } else {    
        printf("Total de contatos ativos: %d\n", total);
    }
}

void exibirContato(struct Contato* contato) {
    if (contato) {
        printf("ID: %d\n", contato->id);
        printf("Nome: %s\n", contato->nome);
        printf("Celular: %s\n", contato->celular);
        printf("Email: %s\n", contato->email);
        printf("Endereço: %s\n", contato->endereco);
        printf("Cidade: %s\n", contato->cidade);
        printf("Estado: %s\n", contato->estado);
        printf("CEP: %s\n", contato->cep);
    } else {
        printf("Contato não encontrado.\n");
    }
}

int lerID() {
    int id;
    printf("Digite o ID do contato: ");
    scanf("%d", &id);
    getchar(); // Limpa o buffer
    return id;
}

