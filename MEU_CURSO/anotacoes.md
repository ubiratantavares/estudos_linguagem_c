# **Algoritmos e Estruturas de Dados em Linguagem C**

O curso pode ser dividido em três partes principais: 

1. Fundamentos da Linguagem C;

2. Estruturas de Dados Básicas e suas Implementações;

3. Estruturas de Dados Abstratas e Algoritmos Clássicos.

## **Parte 1: Fundamentos da Linguagem C e Programação Estruturada**

Esta parte visa solidificar o conhecimento em C, focando nas características da linguagem que são essenciais para a manipulação de estruturas de dados.

*   **1.1 Introdução à Ciência da Computação e Algoritmos**
    *   Definição de Algoritmo e Programa: Uma sequência finita de passos para solucionar um problema.
    *   Componentes de um Computador: Unidade Central de Processamento (UCP), Memória e Dispositivos de Entrada e Saída (E/S), e o barramento.
    *   Hardware e Software.
    *   Linguagens de Programação: Alto, Médio e Baixo Nível, com C sendo classificada como de nível médio.
    *   Compiladores: Conversão de programas de alto nível para linguagem de máquina. O ciclo de desenvolvimento (editor, pré-processador, compilador, ligador, executável).
    *   Qualidades de um Bom Algoritmo e Programa: Correção, Eficiência e Elegância.

*   **1.2 Estrutura Básica de Programas em C**
    *   Esqueleto de um Programa C: A função `main()` como ponto de partida da execução.
    *   Comentários: Uso de `/* ... */` para documentação do código.
    *   Diretivas de Pré-processamento: `#include` para incluir arquivos de cabeçalho (`.h`) e `#define` para constantes simbólicas.
    *   Estilo de Código: Importância do layout e indentação para legibilidade.

*   **1.3 Tipos de Dados, Variáveis e Operadores**
    *   Declaração de Variáveis: Definição do tipo e nome da variável, reservando espaço na memória.
    *   Tipos Básicos em C: `int`, `float`, `double`, `char`, e seus modificadores (`short`, `long`, `signed`, `unsigned`).
    *   Expressões Aritméticas, Relacionais e Lógicas: Operadores `+`, `-`, `*`, `/`, `%`; `==`, `!=`, `<`, `>`, `<=`, `>=`; `&&`, `||`, `!`.
    *   Operadores de Atribuição: `=` e formas compactas como `+=`, `-=`.
    *   Operadores de Incremento e Decremento: `++`, `--`.

*   **1.4 Entrada e Saída (I/O) Básicas**
    *   Funções `printf()` e `scanf()`: Entrada e saída formatada de dados.
    *   Bibliotecas Padrão de C: `stdio.h` (essencial para I/O), `math.h` (funções matemáticas, requer `-lm` na compilação), `stdlib.h` (funções de utilidade geral como `atoi`, `atof`), `ctype.h` (manipulação de caracteres).

*   **1.5 Estruturas de Controle de Fluxo**
    *   Comando `if-else`: Tomada de decisão, blocos de comandos (`{}`).
    *   Comando `switch`: Seleção múltipla baseada em valor de expressão.
    *   Laços de Repetição: `while`, `do-while`, `for` (inicialização, condição, incremento).
    *   Instruções de Desvio: `break` (sair do laço/switch), `continue` (próxima iteração do laço), `goto` (uso e cautela).

*   **1.6 Funções e Modularização**
    *   Conceito de Função: Reuso de código e estruturação de programas.
    *   Definição e Estrutura de Funções: Protótipos, corpo da função, instrução `return`.
    *   Passagem de Parâmetros: Passagem por Valor (cópia dos dados).
    *   Variáveis Locais e Globais: Escopo e tempo de vida.
    *   Modularização em C: Divisão de programas em múltiplos arquivos-fonte (`.c`), arquivos de cabeçalho (`.h`) para interfaces, e compilação separada.

### **Parte 2: Estruturas de Dados Básicas e Suas Implementações em C**

Esta parte foca nas estruturas de dados intrínsecas à linguagem C e no conceito fundamental de ponteiros.

*   **2.1 Vetores (Arrays)**
    *   Conceito de Vetor: Coleção de variáveis do mesmo tipo em posições consecutivas de memória, acessadas por índice.
    *   Declaração, Inicialização e Acesso a Elementos.
    *   Vetores Multidimensionais (Matrizes): Conceito e declaração.
    *   Vetores como Parâmetros de Funções: Necessidade de passar o tamanho.

*   **2.2 Ponteiros**
    *   Conceito de Ponteiro: Variável que armazena um endereço de memória.
    *   Operadores de Ponteiros: `*` (indireção) e `&` (endereço de).
    *   Aritmética de Ponteiros: Operações como `p + 1` e sua relação com os tipos de dados.
    *   Dualidade Ponteiro-Vetor: Nomes de vetores como ponteiros constantes para o primeiro elemento.
    *   Ponteiros Genéricos (`void*`): Capacidade de apontar para qualquer tipo de dado.
    *   Ponteiros como Parâmetros de Funções: Permitindo que funções modifiquem variáveis externas (passagem por referência).
    *   Ponteiros para Funções: Capacidade de passar funções como argumentos para outras funções, útil para algoritmos genéricos (ex: ordenação).

*   **2.3 Strings (Cadeias de Caracteres)**
    *   Conceito de String: Vetor de caracteres terminado por um caractere nulo (`\0`).
    *   Operações Padrão com Strings: Funções da biblioteca `string.h` como `strlen`, `strcpy`, `strcat`, `strcmp`, `strstr`.
    *   Strings como Parâmetros de Funções.
    *   Vetores de Strings: Implementação eficiente usando vetores de ponteiros para caracteres.
    *   Argumentos da Linha de Comando (`argc`, `argv`): Acesso a parâmetros passados na execução do programa como strings.

*   **2.4 Estruturas Heterogêneas (`struct`)**
    *   Conceito de Estrutura: Agrupamento de variáveis de tipos diferentes sob um único nome, formando "membros" ou "campos".
    *   Declaração e Definição de Novos Tipos: Uso de `typedef` para criar sinônimos para tipos de estrutura.
    *   Acesso aos Membros: Operadores `.` (para variáveis de estrutura) e `->` (para ponteiros para estrutura).
    *   Estruturas Aninhadas/Hierárquicas: Estruturas contendo outras estruturas como membros.
    *   Vetores de Estruturas: Agrupando múltiplas instâncias de uma estrutura em um vetor.
    *   Passagem de Estruturas para Funções: Discussão sobre passagem por valor versus passagem por ponteiro para eficiência e modificação de dados.
    *   Estruturas auto-referenciadas: Fundamentais para listas encadeadas e árvores.

*   **2.5 Uniões (`union`) e Enumerações (`enum`)**
    *   Uniões: Permitem que diferentes tipos de dados compartilhem o mesmo espaço de memória.
    *   Enumerações: Definição de um conjunto de constantes simbólicas inteiras.

### **Parte 3: Estruturas de Dados Abstratas e Algoritmos Clássicos**

Esta parte aborda as principais estruturas de dados abstratas, suas implementações em C (muitas vezes usando ponteiros e alocação dinâmica), e os algoritmos clássicos associados.

*   **3.1 Gerenciamento de Memória Dinâmica**
    *   Alocação e Desalocação: Funções `malloc()`, `calloc()`, `realloc()`, `free()` da `stdlib.h`.
    *   Tamanho dos Tipos: Uso do operador `sizeof()`.
    *   Alocação de Blocos de Tamanho Variável e Desafios de Fragmentação.
    *   Introdução a Técnicas de Coleta de Lixo (Garbage Collection): Marca Limítrofe, Compactação (em um nível mais conceitual).

*   **3.2 Pilhas (Stacks)**
    *   Definição e Conceito LIFO (Last In, First Out).
    *   Operações Primitivas: `push` (inserir), `pop` (remover), `top` (acessar topo).
    *   Implementações em C: Uso de vetores ou listas encadeadas.
    *   Aplicações: Avaliação de Expressões (infixa para posfixa, posfixa), verificação de balanceamento de parênteses.
    *   Pilha de Execução de um Programa: Como a recursividade é implementada internamente via pilha.

*   **3.3 Filas (Queues)**
    *   Definição e Conceito FIFO (First In, First Out).
    *   Operações Primitivas: `insert` (enfileirar), `delete` (desenfileirar).
    *   Implementações em C: Uso de vetores (com considerações de estouro e subfluxo) e listas encadeadas (incluindo filas circulares e filas duplas).
    *   Filas de Prioridade.
    *   Aplicações: Simulação.

*   **3.4 Listas Encadeadas (Linked Lists)**
    *   Conceito: Sequência de nós conectados por ponteiros, o último nó aponta para `NULL`.
    *   Estrutura de um Nó: Campo de informação e ponteiro para o próximo nó (auto-referenciada).
    *   Implementações em C: Uso de vetor de nós disponíveis versus alocação dinâmica.
    *   Tipos de Listas:
        *   Listas Lineares Simples.
        *   Listas Circulares: O último nó aponta para o primeiro.
        *   Listas Duplamente Encadeadas: Nós com ponteiros para o anterior e o próximo.
    *   Operações Típicas: Inserção, remoção, percurso, busca.
    *   Listas Gerais: Nós que podem conter diferentes tipos de dados ou até outras listas, possibilitando listas recursivas.

*   **3.5 Árvores (Trees)**
    *   Conceito de Árvore: Estrutura de dados hierárquica (raiz, nós, filhos, folhas).
    *   Árvores Binárias: Cada nó tem no máximo dois filhos.
    *   Representações em C: Estrutura de nó com campos `info`, `left` e `right` (ponteiros).
    *   Percursos de Árvores Binárias: Pré-ordem, Em ordem (in-order), Pós-ordem (recursivos).
    *   Aplicações: Árvores de Expressões (avaliação de expressões), Árvores de Huffman (codificação).
    *   Árvores de Busca Binária: Generalização da busca binária em vetores, suportando inserção e remoção eficientes.

*   **3.6 Grafos (Graphs)**
    *   Conceito de Grafo: Conjunto de nós (vértices) e conjunto de arcos (arestas), grafos orientados (dígrafos) vs. não-orientados.
    *   Representações em C: Matriz de adjacência e lista de adjacência.
    *   Percursos de Grafos: Busca em Profundidade (DFS) e Busca em Largura (BFS).
    *   Aplicações: Caminho Mínimo, Fluxo Máximo, Escalonamento de Tarefas, Ordenação Topológica.

*   **3.7 Algoritmos de Busca (Searching)**
    *   Importância da Busca Eficiente: Minimizando comparações.
    *   Busca Sequencial (Linear): Percurso elemento a elemento.
    *   Busca Binária: Eficiente para dados ordenados em vetores.
    *   Tabelas de Dispersão (Hash Tables): Ideal para busca O(1).
        *   Funções de Espalhamento (Hashing Functions).
        *   Tratamento de Colisões: Reespalhamento (rehashing) e Encadeamento (chaining).
    *   Árvores de Busca Binária como alternativa para busca eficiente com inserção/remoção.

*   **3.8 Algoritmos de Ordenação (Sorting)**
    *   Importância da Ordenação: Preparação de dados para busca eficiente e outras aplicações.
    *   Análise de Eficiência: Tempo de execução (complexidade O), espaço de memória, número de comparações e trocas.
    *   Algoritmos Elementares:
        *   Ordenação por Bolha (Bubble Sort).
        *   Ordenação por Seleção (Selection Sort).
        *   Ordenação por Inserção (Insertion Sort).
    *   Algoritmos Avançados e Eficientes:
        *   Quick Sort: Algoritmo recursivo amplamente utilizado.
        *   Merge Sort: Algoritmo recursivo baseado em fusão.
        *   Heap Sort.
        *   Radix Sort (Classificação por Cálculo de Endereço).
    *   Ordenação Genérica: Utilização de `void*` e ponteiros para funções de comparação (ex: função `qsort` da `stdlib.h`).
    
