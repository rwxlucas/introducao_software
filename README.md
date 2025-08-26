Super Trunfo
Este é um programa em C chamado Super Trunfo, que permite cadastrar duas cartas com informações de países (código, nome, população, área, PIB e número de pontos turísticos) e comparar um atributo escolhido entre elas para determinar a carta vencedora.

Requisitos

Sistema Operacional: O programa foi desenvolvido e testado em ambiente Linux.

Compilador: GCC (GNU Compiler Collection) instalado.

Bibliotecas: Biblioteca padrão de C (nenhuma biblioteca adicional necessária).

Como Compilar: O programa está contido no arquivo super_trunfo.c. Para compilá-lo no Linux usando o GCC, siga os passos abaixo:

Abra um terminal no diretório onde o arquivo super_trunfo.c está localizado.

Execute o seguinte comando para compilar o código:
gcc super_trunfo.c -o super_trunfo

gcc: Invoca o compilador GCC.

super_trunfo.c: O arquivo fonte do programa.

-o super_trunfo: Especifica o nome do arquivo executável gerado (super_trunfo).

Isso criará um arquivo executável chamado super_trunfo no mesmo diretório.

Como Executar:

Após compilar o programa, você pode executá-lo com o comando:
./super_trunfo

Passos de Execução

O programa solicitará o cadastro da primeira carta:
Código da carta (3 caracteres).
Nome do país.
População (em número inteiro).
Área (em km², número decimal).
PIB (número decimal).
Número de pontos turísticos (número inteiro).

O mesmo processo será repetido para a segunda carta.
Em seguida, você escolherá um atributo para comparação (1 para população, 2 para área, 3 para PIB, 4 para pontos turísticos).
O programa exibirá o resultado da comparação, indicando a carta vencedora ou um empate.

Notas

Entrada de Dados: Certifique-se de inserir os dados no formato correto (por exemplo, números inteiros para população e pontos turísticos, números decimais para área e PIB). Nomes de países podem incluir espaços.
Ambiente Linux: O programa foi testado em Linux. Para outros sistemas operacionais, o comando de compilação pode variar (por exemplo, em Windows, você pode usar MinGW ou outro compilador compatível).
Erros de Compilação: Se encontrar erros, verifique se o GCC está instalado (gcc --version) e se o arquivo super_trunfo.c está no diretório correto.

Exemplo de Uso
$ gcc super_trunfo.c -o super_trunfo
$ ./super_trunfo
