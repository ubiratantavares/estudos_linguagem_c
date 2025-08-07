# Microgênios - Linguagem C (Padrão ANSI)

## Testes Lógicos e Fluxo de Compilação

### 1. Exercício - Teste Lógico

* Operadores Relacionais

Diga se as seguintes expressões são verdadeiras ou falsas:

10 > 5: Verdadeiro

5 > 10: Falso

5 == 6: Falso

5 != 6: Verdadeiro

2 <= 1: Falso

0 < (10 > 5): Verdadeiro

0 < 10 > 5: Falso

NOTA:

* A precedência NORMALMENTE é da esquerda para a direita.

* SEMPRE o que estiver entre parênteses é executado primeiro.

* Operadores Lógicos

Diga se as seguintes expressões são verdadeiras ou falsas:

((10 > 5) || (5 < 6)): Verdadeiro

((5 > 10) && (5 == 5)): Falso

(!(5 == 6)): Verdadeiro

((5 != 6) || (!(5 == 6))): Verdadeiro

(!((2 >= 1) && (1))): Falso

(!(5 <= 4)): Verdadeiro

((5 < 10) && (!(0))): Verdadeiro

* Operadores Booleanos

Diga se as seguintes expressões são verdadeiras ou falsas:

10101010 & 01010101: 00000000

10101010 | 01010101: 11111111

10101010 & (~01010101): 10101010

10101010 & (!01010101): 00000000

00000001 << 4: 00010000

01010101 >> 1: 00101010

10101010 & (01010101 << 1): 10101010

### 2. Fluxo de Compilação de Programas em C

* Sumário do Curso

História e introdução a linguagem C
Variáveis
Operadores
Tomada de decisão
Laços de repetição
Estrutura básica do programa em C
Matrizes
Função
Vetores e ponteiros
Diretivas de compilação

* História de Linguagem C - A Evolução

* Criada por Dennis Ritchie e por Brian W. Kernighan no Laboratório da Bell em 1972.

* Inicialmente linguagem BCPL.

* Linguagem B.

* Linguagem C.

* Linguagem C ANSI (Virou Padrão).

* Linguagem C++ (Orientado a Objeto).

* Linguagem C# e Java.

* Diferenças entre Assembly e C

* Linguagem Assembly: linguagem interpretada. Código gerado possui menor quantidade de bytes.

* Linguagem C: linguagem compilada. Código gerado possui maior quantidade de bytes.

* Gerando um arquivo hex

![Gerando um arquivo hex](gerando_um_arquivo_hex.png)

## Estudo Aprofundado de Variáveis

### 3. Tipos de Variáveis

```c
// Cálculo da área do círculo

// Diretivas de processamento
#include <stdio.h> // arquivo de cabeçalho

#define PI 3.14159 // declaração de constante

// função principal
void main(void) {
    // declarações de variáveis
    float radius, area;

    // calcular area do circulo
    radius = 12.0;

    area = PI * radius * radius; // processamento

    // declaração de saída
    printf("Area = %f", area);
}
```

* Variáveis

* Definição: variável é o nome que é dado à uma posição de memória usada para armazenar dados do programa.

* A variável pode ser vista como uma caixa que guarda os dados usados em seu programa.

```c
int variavel;

variavel = 5;
```

* Tipos de dados

| Tipo   | Descrição               | Bits |
| ---    | ----------------------- | ---- |
| char   | caractere               | 8    |
| int    | inteiro                 | 16   |
| float  | ponto flutuante - reais | 32   |
| double | ponto flutuante - reais | 64   |

O tamanho do int varia de acordo com o compilador.

* MPLAB-C30 int é 16-bits.
* MPLAB-C18 int é 16-bits.
* CCS PCB, PCM & PCH int é 8-bits.
* Hi-Tech PICC int é 16-bits.
* MikroC int é 16-bits.
* Keil (8051) int é 16-bits.

* Tipos de dados - Modificadores (unsigned, signed, short, long)

| Tipo de modificador         | Min      | Max           | Bits |
| -------------------         | -----    | ---           | ---- |
| unsigned char               | 0        | 255           | 8    |
| char, signed char           | -128     | 127           | 8    |
| unsigned short int          | 0        | 65535         | 16   |
| short int, signed short int | -32768   | 32767         | 16   |
| unsigned int                | 0        | 65535         | 16   |
| int, signed int             | -32768   | 32767         | 16   |
| unsigned long int           | 0        | $2^{32} - 1$  | 32   |
| long int, signed long int   | $-2{31}$ | $2^{31} - 1$  | 32   |
| unsigned long long int      | 0        | $2^{64} - 1$  | 64   |
| long long int               | $-2{63}$ | $2^{63} - 1$  | 64   |
| signed long long int        | $-2{63}$ | $2^{63} - 1$  | 64   |

### 4. Declarações de Variáveis Locais

* Classes de armazenamento

    Informam ao compilador como ele deve armazenar e fazer o acesso às variáveis. Abaixo estão listados as classes de armazenamento.

    const
    auto
    register
    static
    volatile

```c
// Comando para compilar: gcc -Wall -o exemplo1 exemplo1.c
// Comando para executar: ./exemplo1

#include <stdio.h>

int main (void) {
    unsigned char a;
    unsigned int b;
    float c;
    double d;
    long double e;

    printf("CHAR         = %zu bytes\n", sizeof(a));
    printf("INT          = %zu bytes\n", sizeof(b));
    printf("FLOAT        = %zu bytes\n", sizeof(c));
    printf("DOUBLE       = %zu bytes\n", sizeof(d));
    printf("LONG DOUBLE  = %zu bytes\n", sizeof(e));
  
    return 0;
}
```

```c
// Comando para compilar: gcc -Wall -o exemplo2 exemplo2.c
// Comando para executar: ./exemplo2

#include <stdio.h>

int main (void) {
    unsigned int a;
    unsigned short int b;
    unsigned long int c;
    unsigned long long int d;

    printf("INT             = %zu bytes\n", sizeof(a));
    printf("SHORT INT       = %zu bytes\n", sizeof(b));
    printf("LONG INT        = %zu bytes\n", sizeof(c));
    printf("LONG LONG INT   = %zu bytes\n", sizeof(d));
    
    return 0;
}
```

```c
// Comando para compilar: gcc -Wall -o exemplo3 exemplo3.c
// Comando para executar: ./exemplo3

#include <stdio.h>

unsigned int Soma(unsigned char x, unsigned char z) {
    return x + z;
}

int main (void) {
    unsigned int result = Soma(200, 56);
    printf("Soma: %d \n", result); 
    return 0;
}
```

### 5. Protótipos de Função

O **protótipo de função**, também conhecido como **cabeçalho da função** ou **alusão da função**, é uma **declaração** que estabelece a interface de uma função sem revelar sua implementação. 
Em sua essência, ele informa ao compilador o **nome da função**, o **tipo do valor que ela retorna** e os **tipos dos seus parâmetros**, finalizando com um ponto e vírgula (`;`).

A utilização de protótipos de função é uma prática fundamental na programação em C e em linguagens similares, oferecendo diversas vantagens:

* **Propósito e Verificação pelo Compilador**:

* É **obrigatório** declarar o protótipo de uma função antes que ela seja chamada no programa.
* O compilador utiliza o protótipo para realizar **verificações cruciais em tempo de compilação**, prevenindo erros que seriam mais difíceis de depurar em tempo de execução.
* Ele verifica se o **cabeçalho da função** (sua definição) corresponde ao seu protótipo.
* Garante que a **chamada da função** contém o número e os tipos corretos de argumentos, na ordem esperada.
* Verifica se o **valor de retorno** da função é compatível com o contexto em que é utilizado (por exemplo, se uma função `void` não é atribuída a uma variável).
* Permite a **conversão implícita** de argumentos para os tipos especificados nos parâmetros, quando apropriado, e sinaliza erros se a conversão não for permitida.

* **Sintaxe e Componentes**:
* A forma geral do protótipo é: `<tipo_do_retorno> <nome_da_função> (<lista_de_parâmetros>);`.
* A **lista de parâmetros** deve especificar o tipo de cada variável, mesmo que os nomes das variáveis sejam opcionais. Contudo, é uma boa prática manter os nomes para fins de documentação 
e clareza do código.
* Para funções que não retornam valor, o `<tipo_do_retorno>` é **`void`**.
* Se uma função não aceita parâmetros, a palavra-chave **`void`** deve ser colocada entre os parênteses na lista de parâmetros.

* **Posicionamento no Código**:
* Os protótipos são geralmente colocados no **início do arquivo fonte**, logo após as diretivas `#include`, ou em **arquivos de interface (`.h`)**.
* Definir as funções em qualquer ordem é possível graças à declaração explícita dos protótipos.

* **Modularização e Reutilização**:
* Os protótipos contribuem para a **modularização** do código, permitindo que as funções sejam definidas em arquivos separados e compiladas independentemente.
* Isso torna o programa **mais compreensível e modificável**, pois os detalhes de implementação podem ser "escondidos" dos módulos que utilizam a função.
* Facilita a **reutilização de código**, uma vez que um programa pode ser construído a partir de pequenos blocos de código (funções) com tarefas específicas e bem definidas.

* **Parâmetros Específicos**:
* Quando um **vetor ou matriz** é passado como parâmetro para uma função, ele é declarado no protótipo apenas com colchetes vazios (`[]`). Internamente, o nome do vetor ou matriz é tratado 
como um **ponteiro** para seu primeiro elemento.
* É possível declarar o tamanho do vetor explicitamente no protótipo, mas o tamanho é irrelevante para a definição da função.
* Para funções que recebem **ponteiros para funções** como parâmetros, o protótipo da função que recebe o ponteiro deve incluir a declaração completa do ponteiro para função, incluindo 
seu tipo de retorno e lista de parâmetros. Isso é crucial para a criação de **códigos genéricos**.

Em resumo, o protótipo de função é uma **ferramenta essencial** em C que **define a interface** de uma função, capacitando o compilador a realizar **verificações de tipo e sintaxe** em 
tempo de compilação, o que é fundamental para a **robustez e modularidade** de programas complexos.

```c
// Comando para compilar: gcc -Wall -o exemplo4 exemplo4.c
// Comando para executar: ./exemplo4

#include <stdio.h>

unsigned int count = 10; // variável global

// protótipo de função
unsigned int Soma(unsigned char x, unsigned char z);
int Divide(int x, int z);

int main (void) {
    unsigned int result = Soma(200, 56);
    printf("Soma: %d \n", result); 
    printf("Divisão: %d \n", Divide(100, 50));
    printf("Divisão somado com count: %d \n", Divide(100, 5) + count); // Teste de divisão por zero
    return 0;
}

unsigned int Soma(unsigned char x, unsigned char z) {
    return x + z;
}

int Divide(int x, int z) {
    if (z == 0) {
        printf("Erro: Divisão por zero.\n");
        return -1; // Retorna -1 em caso de erro
    }
    return x / z;
}
```

### 6. Alocação de Variáveis em Memória RAM

#### Compreendendo a Memória RAM e o Comportamento das Variáveis em Sistemas Embarcados

No desenvolvimento de sistemas embarcados e aplicações em linguagens como C, compreender como a memória RAM é estruturada e como as variáveis são armazenadas e acessadas é essencial para 
garantir performance, segurança e estabilidade da aplicação. Neste artigo, vamos explorar o funcionamento da memória RAM, o comportamento das variáveis locais e globais, e a importância dos 
diferentes setores da RAM — tudo explicado de forma didática com base em um exemplo prático.

##### Visão Geral da Memória RAM

A memória RAM (Random Access Memory) é o local onde as aplicações são efetivamente executadas. Ainda que o código-fonte resida inicialmente na memória Flash ou no disco, ele é espelhado para 
a RAM durante a execução. Isso é visível, por exemplo, no uso de programas como navegadores ou players de vídeo — eles rodam diretamente da RAM. Quando o computador está sobrecarregado e 
a memória RAM se esgota, os programas começam a apresentar lentidão, e a solução comum é expandir a RAM disponível, não necessariamente trocar o HD, a não ser em casos de upgrade para SSD.


##### Divisão da RAM em Setores

A RAM é organizada em setores específicos com funções bem definidas:

###### 1. **Code (ou .text)**

Este setor armazena o código do programa que está sendo executado. É uma réplica do código em Flash, mas posicionado na RAM para execução mais rápida.

###### 2. **.data e BSS**

Esses dois setores armazenam **variáveis globais** e **variáveis estáticas**:

* **.data**: armazena variáveis globais e estáticas **inicializadas**.

* **BSS**: armazena variáveis globais e estáticas **não inicializadas**.

Por exemplo, se você declarar:

```c
char count = 10;
```

A variável `count` será alocada em `.data`.

Mas se declarar:

```c
char count;
```

Ela será alocada no setor BSS.

> Obs: Apesar de não serem inicializadas pelo programa, muitos scripts de *linker* podem forçar a inicialização com 0 no setor BSS, mas isso não é uma regra universal.

##### Stack e Heap: Áreas de Crescimento Dinâmico

###### 3. **Stack (Pilha)**

Utilizado para alocar variáveis locais e gerenciar chamadas de funções. Cada função, como `main()` ou uma função auxiliar como `soma()`, possui seu próprio espaço de stack. 
Nele são armazenadas variáveis locais (como `x` e `z` em `soma()`) e o ponteiro de retorno da função.

O stack é normalmente crescente (do endereço de memória inferior para o superior), mas isso pode variar conforme o sistema.

###### 4. **Heap**

Usado para alocação dinâmica de memória com funções como `malloc()` e `free()`. O heap, ao contrário do stack, cresce no sentido oposto — decrescente — ocupando a RAM de cima para baixo.

Durante a criação do projeto, é possível definir o tamanho do heap, como reservar 1KB ou mais para buffers, por exemplo:

```c
char* buffer = malloc(1024);
```

##### Conflitos entre Stack e Heap

Um problema sério ocorre quando o stack e o heap crescem até se encontrar. Isso resulta em **colisão de memória**, corrompendo dados e causando comportamentos imprevisíveis na aplicação. 
É essencial, portanto, gerenciar cuidadosamente a alocação em ambas as áreas.

##### Comunicação entre Funções e Concorrência

Variáveis locais em funções como `soma()` e `main()` são restritas aos seus próprios stacks — não compartilham dados diretamente. O único meio de compartilhamento é via variáveis globais, 
alocadas nos setores `.data` ou BSS. Essas variáveis podem ser acessadas por múltiplas funções, o que cria um ponto **comum de comunicação**, mas também abre margem 
para **problemas de concorrência**.

Por exemplo:

```c
char count = 10; // variável global
```

Tanto `main()` quanto `soma()` podem acessar `count`, o que pode causar conflito se ambos tentarem acessar simultaneamente.

##### A Necessidade de Sincronismo

Quando múltiplas funções ou tarefas acessam variáveis globais simultaneamente, surge a necessidade de **sincronização de acesso** para evitar inconsistências. Este é um dos desafios mais 
críticos em sistemas concorrentes, levando ao conceito de **Thread-Safe** — tema que será aprofundado mais adiante com exemplos práticos.

##### Práticas Recomendadas

Para garantir maior segurança e previsibilidade no comportamento do programa:

* **Prefira variáveis locais**, mantendo os dados no stack da função.

* **Evite o uso excessivo de variáveis globais**, especialmente em ambientes com múltiplas tarefas ou threads.

* **Gerencie bem o uso do heap**, especialmente em sistemas embarcados com recursos limitados.

* **Implemente mecanismos de sincronismo** quando o uso de globais for indispensável.

##### Variáveis Globais: Riscos e Boas Práticas

Como vimos até aqui, as variáveis globais são armazenadas em setores específicos da memória RAM — `.data` ou BSS — e ficam acessíveis por qualquer função ou tarefa que tenha permissão. 
No entanto, essa facilidade de acesso pode se tornar uma grande vulnerabilidade em sistemas embarcados ou aplicações concorrentes.

###### Interrupções e Eventos Assíncronos

Um exemplo clássico do risco de variáveis globais é o uso em **interrupções**. Interrupções são eventos assíncronos que ocorrem de forma imprevisível — como uma entrada externa, 
um temporizador ou uma falha de hardware. Se uma interrupção ocorre e modifica o valor de uma variável global no exato momento em que uma tarefa principal está utilizando essa variável, 
o programa pode entrar em estado inconsistente ou apresentar comportamentos erráticos.

Imagine uma situação em que uma variável global está sendo usada para controlar o fluxo de uma função, mas é alterada por uma interrupção entre duas instruções críticas. 
A função original pode nem perceber que houve uma alteração e continuar operando com dados corrompidos. Isso é especialmente perigoso em aplicações de missão crítica, 
como automação industrial ou sistemas médicos embarcados.

##### A Regra de Ouro: Prefira Variáveis Locais

Diante de tudo o que foi explicado, a recomendação clara para desenvolvedores é: **dê sempre preferência ao uso de variáveis locais**.

###### Por que variáveis locais são mais seguras?

* **Encapsulamento:** Elas estão isoladas dentro do escopo da função e protegidas pelo *stack*.

* **Sem concorrência direta:** Outras funções ou interrupções não conseguem acessar diretamente essas variáveis.

* **Facilidade de depuração:** A origem de erros é mais fácil de rastrear quando as variáveis não são compartilhadas.

* **Menor risco de corrupção de dados:** Reduz drasticamente a chance de inconsistência em ambientes concorrentes ou com interrupções.

##### Conclusão

O entendimento da organização da memória RAM — seus setores `.text`, `.data`, BSS, *stack* e *heap* — é crucial para o desenvolvimento eficiente de aplicações embarcadas. 
Saber onde e como suas variáveis são armazenadas pode evitar erros difíceis de detectar e melhorar significativamente a robustez do seu código.

Variáveis globais oferecem conveniência, mas trazem consigo sérios riscos, especialmente em ambientes com múltiplas tarefas ou interrupções. Sempre que possível, 
opte por variáveis locais e mantenha a lógica do seu programa dentro de contextos bem definidos e protegidos.

Essa prática não apenas melhora a segurança do seu sistema, como também favorece um desenvolvimento mais modular, eficiente e confiável.


### 7. Variável Local Static

#### Entendendo o Comportamento das Variáveis `static` em C: O Que Todo Programador Precisa Saber

Ao desenvolver programas em C, é comum lidarmos com diferentes tipos de variáveis e suas classes de armazenamento. Neste artigo, vamos explorar de forma detalhada o comportamento das variáveis 
`static`, desmistificando como funcionam na memória e quais implicações têm no escopo e no ciclo de vida de uma aplicação.

##### Introdução às Classes de Armazenamento

Ao declarar uma variável em C, você pode — ou não — especificar uma *classe de armazenamento*. Por padrão, todas as variáveis são do tipo `auto` (de *automatic*), o que significa que são 
criadas na pilha (stack) e destruídas ao final da execução do bloco em que foram declaradas.

No entanto, além do `auto`, existem outras classes importantes, como `const`, `register`, `volatile`, `extern` e `static`. Neste artigo, vamos focar na palavra-chave `static`, 
frequentemente fonte de confusão para quem está começando a programar em C.

##### Explorando o Comportamento da Palavra-chave `static`

Vamos a um exemplo prático para entender como a palavra `static` altera o comportamento de uma variável. Considere um programa simples que realiza a soma de dois números e imprime 
o valor de uma terceira variável `t`, que recebe o resultado dessa operação somado a um incremento.

Inicialmente, sem o uso de `static`, o valor impresso é consistente entre as chamadas, sempre retornando o mesmo valor (por exemplo, `258`). No entanto, ao modificar a declaração de `t` 
para `static int t = 0;`, algo curioso acontece: o valor impresso aumenta a cada nova execução da função. De `258`, ele passa para `260`, depois `262`, e assim por diante.

##### Por Que Isso Acontece?

Vamos simplificar o código para entender melhor. A função agora retorna apenas a variável `t`, e imprimimos seu valor com `printf`.

Sem `static`, a variável `t` é alocada na *stack* toda vez que a função é chamada. Ao sair da função, essa memória é liberada, e `t` é destruída. Na próxima chamada, uma nova `t` é 
criada, novamente com valor inicial zero. Ou seja, não há persistência de valor entre as chamadas.

Com `static`, a variável `t` é alocada uma única vez na memória — mais especificamente, no *segmento data* (caso tenha valor inicial) ou no *segmento BSS* (caso não tenha). 
Isso significa que `t` persiste durante toda a execução do programa. A cada chamada da função, o valor anterior de `t` é mantido e incrementado, ao invés de ser reconfigurado como zero.

##### Visualizando a Alocação de Memória

Para entender ainda melhor, imagine a memória RAM dividida da seguinte forma:

* **Code Segment**: onde o código do programa é armazenado.

* **BSS Segment**: onde ficam as variáveis globais e estáticas *não inicializadas*.

* **Data Segment**: onde estão as variáveis globais e estáticas *inicializadas*.

* **Stack**: utilizada para variáveis locais e chamadas de função.

* **Heap**: para alocações dinâmicas com `malloc` e similares.

Quando declaramos `t` como `static`, ela sai do escopo de alocação da *stack* da função e passa a residir no *data segment*. Isso garante que seu valor seja preservado entre diferentes 
execuções da função.

##### Comportamento em Funções Recursivas

Apesar de parecer vantajoso, o uso de variáveis `static` dentro de funções exige cautela, especialmente em chamadas recursivas. Como a variável `static` mantém seu estado entre as 
chamadas, ela não é adequada para funções recursivas — que esperam criar um novo contexto de execução a cada chamada. O uso de variáveis `static` nesse caso pode gerar comportamento 
inesperado ou incorreto.

##### Encapsulamento e Escopo

Outro aspecto interessante é que, mesmo sendo armazenada em um segmento global da memória, a variável `static` continua com escopo limitado à função onde foi declarada. Ou seja, ela não pode ser acessada diretamente de fora da função — a menos que se utilize o endereço de memória, o que não é uma prática recomendada.

Em outras palavras, a variável está protegida do acesso externo, mas o seu *tempo de vida* é igual ao da execução do programa, e não ao da função.

```c
// Comando para compilar: gcc -Wall -o exemplo5 exemplo5.c
// Comando para executar: ./exemplo5

#include <stdio.h>

unsigned int Soma(void);

int main (void) {
    printf("Soma: %d \n", Soma()); 
    printf("Soma: %d \n", Soma()); 
    printf("Soma: %d \n", Soma()); 

    return 0;
}

unsigned int Soma(void) {
	static unsigned char t = 0;
	t++;
	t++;
    return t;
}
```

##### Conclusão

O uso da palavra-chave `static` em C é poderoso, mas requer compreensão clara de seu funcionamento. Ela permite que variáveis locais mantenham seus valores entre chamadas de função, 
ao custo de permanecerem alocadas durante todo o tempo de execução do programa.

### Recomendações:

* Use `static` quando realmente precisar preservar o estado entre chamadas.

* Evite seu uso em funções recursivas.

* Lembre-se de que, apesar do escopo local, a variável estática compartilha o mesmo segmento de memória que variáveis globais, o que pode ter implicações em segurança e manutenção de código.

Aprofundar-se nesses conceitos ajuda a escrever código mais eficiente, seguro e previsível.

### 8. Organização de Projetos em C com Multifolhas

### 9. Variável Global Static

### 10. Variáveis Const

### 11. Variável Volatile

### 12. Variável Register

## Strings, Matrizes e Ponteiros

### 13. Introdução a Strings

### 14. Introdução a Matrizes e Ponteiros

### 15. Redefinindo tipos de dados via typedef

### 16. Trabalhando com Strings (Matrizes e Ponteiros)

### 17. Problemas com Invasão de Endereços de Memória

## Struct e Union

### 18. Introdução as Structs

### 19. Inicialização das Structs

### 20. Structs Encadeadas

### 21. Alinhamento de Structs

### 22. Ponteiro de Estrutura

### 23. Union em C
