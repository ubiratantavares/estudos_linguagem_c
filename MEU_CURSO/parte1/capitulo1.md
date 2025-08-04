# Capitulo 1 - Introdução à Ciência da Computação e Algoritmos

A Ciência da Computação, em sua essência, dedica-se ao estudo da organização, manipulação e utilização da informação em um computador. 
Para que um computador possa manipular informações, ele depende fundamentalmente de algoritmos, que são sequências finitas de passos detalhados 
para solucionar um problema ou executar uma tarefa específica. O algoritmo, por ser uma entidade abstrata que define uma ideia, precisa ser transformado 
em um programa para ser executado por uma máquina. Um programa, portanto, é a implementação concreta de um algoritmo, consistindo em uma sequência de instruções.

A execução desses programas ocorre sobre o hardware do computador, que abrange os componentes físicos como a Unidade Central de Processamento (UCP), a memória e os 
dispositivos de entrada e saída (E/S), todos interligados por um barramento. O conjunto de algoritmos e programas é o que se define como software. 
No entanto, trabalhar diretamente com as instruções de máquina de baixo nível é complexo. Por essa razão, são utilizadas linguagens de programação de alto nível, 
que são mais compreensíveis para os humanos. A linguagem C, por exemplo, é classificada como uma linguagem de médio nível, oferecendo um equilíbrio entre a abstração e o acesso direto ao hardware.

Para que um programa escrito em uma linguagem de alto ou médio nível possa ser executado pelo microprocessador, ele deve ser traduzido para a linguagem de máquina. 
Essa tradução é responsabilidade de um compilador. O desenvolvimento de um programa segue um ciclo que envolve a escrita do código fonte em um editor de textos, 
o processamento por um pré-processador, a conversão para um arquivo objeto pelo compilador, e a criação do executável por um ligador. Idealmente, todo bom algoritmo e 
programa deve ser avaliado por três qualidades primordiais: correção, eficiência e elegância.

Compreender esses fundamentos é crucial para qualquer estudante de Ciência da Computação, pois eles formam a base para o desenvolvimento de soluções computacionais robustas e otimizadas.

## 1.1 Definição de Algoritmo e Programa

Na Ciência da Computação, a resolução de problemas é um pilar fundamental, e para isso, contamos com dois conceitos essenciais: **algoritmos** e **programas**.

Um **algoritmo** é uma **sequência finita de passos ou instruções claramente especificadas para solucionar um problema** ou executar uma tarefa específica. 
Pense nele como uma **receita** ou um **método abstrato** que define uma ideia. Algoritmos servem como um intermediário entre as descrições em linguagem natural (como o português) 
e os programas escritos em linguagens de programação. Exemplos práticos de algoritmos incluem a busca binária, a sequência de Fibonacci e o cálculo fatorial. Os algoritmos podem ser 
desenvolvidos de forma iterativa, que requer a repetição explícita de um processo, ou de forma recursiva, onde um objeto é definido em termos de uma versão mais simples de si mesmo. 
Essencialmente, um algoritmo recursivo deve ter um "ponto de parada" ou caso trivial para evitar uma sequência infinita de chamadas. As qualidades de um bom algoritmo 
incluem **correção, eficiência e elegância**. Correção significa que o algoritmo faz o que se espera dele, cumprindo sua documentação. Eficiência se refere a não desperdiçar 
tempo e, por extensão, espaço de memória. Elegância implica simplicidade, clareza e ausência de código supérfluo.

Um **programa**, por sua vez, é a **implementação concreta de um algoritmo**. É um **conjunto de instruções** que, seguidas corretamente e ordenadamente, produzem o resultado desejado 
a partir das informações fornecidas. Os programas são armazenados na memória do computador como sequências de instruções. Para que um programa, escrito em uma linguagem de alto nível (como C), 
possa ser executado por um microprocessador, ele precisa ser **convertido para a linguagem de máquina**. Essa conversão é realizada por um programa chamado **compilador**. 
O ciclo de desenvolvimento de um programa geralmente envolve a escrita do código fonte em um editor, o pré-processamento, a compilação que gera um arquivo objeto, e a ligação (linkagem) 
para criar um executável. Além de serem compreendidos por computadores, os programas são concebidos para serem lidos e compreendidos por seres humanos.

A relação entre eles é que o **algoritmo fornece a lógica ou o método para resolver um problema, enquanto o programa é a materialização executável dessa lógica**. 
O estudo da Ciência da Computação envolve justamente o exame da organização, manipulação e utilização da informação, o que implica entender como os conceitos abstratos (algoritmos) 
podem ser concretizados através de uma linguagem de programação (programas) para a solução de problemas. O objetivo é desenvolver programas com a máxima eficiência.

## 1.2 Componentes de um Computador

Um computador, em sua essência, é uma máquina projetada para **manipular informações**. Para que essa manipulação seja possível e eficiente, ele é composto por um conjunto interligado de 
elementos fundamentais que trabalham em sinergia: a **Unidade Central de Processamento (UCP)**, a **Memória** e os **Dispositivos de Entrada e Saída (E/S)**, todos conectados por um **barramento**.

A **Unidade Central de Processamento (UCP)**, frequentemente chamada de processador ou microprocessador, é o "cérebro" do computador. Sua função primordial é **orquestrar todas as operações** 
do sistema. A UCP é geralmente dividida em duas partes principais:

	* A **Unidade Lógica e Aritmética (ULA)**, responsável por executar operações aritméticas (como somas e subtrações) e comparações (como "igual a" ou "maior que").
	
	* A **Unidade de Controle (UC)**, que lê instruções e dados da memória, as decodifica, alimenta a ULA com as entradas corretas de acordo com essas instruções e envia 
	os resultados de volta à memória ou aos dispositivos de saída. Componentes como o **contador de programa (PC)**, que mantém o endereço da instrução atual, e o **registrador de instruções (RI)**, 
	que define a operação a ser executada, são cruciais para o funcionamento da UC. A UCP opera em um ciclo contínuo, buscando e executando uma instrução por vez, até que o computador seja desligado.

A **Memória**, também conhecida como armazenamento, pode ser visualizada conceitualmente como uma lista de células, onde cada célula possui um **endereço numérico sequencial** e é capaz de armazenar 
uma pequena e fixa quantidade de informação. Essa informação pode ser tanto **instruções** (o que o computador deve fazer) quanto **dados** (a informação a ser processada). 
Existem dois tipos principais de memória:

	* **Memórias voláteis (RAM - Random Access Memory)**: São mais rápidas e, geralmente, de menor capacidade, mas necessitam de energia elétrica constante para manter seu conteúdo. 
	Se o computador for desligado, as informações armazenadas na RAM são perdidas.

	* **Memórias não voláteis (como o Disco Rígido - HD)**: São mais lentas e de maior capacidade, mas armazenam informações de forma permanente, mesmo quando o computador está desligado. 
	No nível mais fundamental, todas as informações (programas, textos, imagens) são armazenadas na memória como **códigos numéricos binários**, compostos por **bits** (dígitos 0 ou 1) agrupados em **bytes** (conjuntos de 8 bits).

Os **Dispositivos de Entrada e Saída (E/S)** são a interface do computador com o mundo exterior. Eles permitem que o computador receba informações (dispositivos de entrada) e as devolva 
(dispositivos de saída). Exemplos comuns de dispositivos de entrada incluem **teclados, mouses, scanners e microfones**, enquanto **monitores e impressoras** são exemplos de dispositivos de saída. 
Alguns dispositivos, como **discos rígidos e placas de rede**, podem atuar tanto como entrada quanto como saída.

Finalmente, o **barramento (BUS)** é o **canal de comunicação** que interliga todos esses componentes essenciais: UCP, memória e dispositivos de E/S. 
Ele atua como uma via por onde as informações (dados e instruções) transitam entre as diferentes partes do computador, garantindo que elas possam se comunicar e trabalhar em conjunto.

A integração e o funcionamento harmonioso da UCP, Memória, Dispositivos de E/S e o barramento são o que permitem que um computador execute programas, processe informações e, 
em última instância, solucione problemas, transformando algoritmos abstratos em ações concretas.

## 1.3 Hardware e Software

## 1.4 Linguagens de Programação

## 1.5 Compiladores

## 1.6 Qualidades de um Bom Algoritmo e Programa

