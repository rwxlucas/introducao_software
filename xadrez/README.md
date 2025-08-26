# Programa de Movimentação de Peças de Xadrez

## Descrição

Este programa em C simula os movimentos de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo. Cada peça tem sua lógica de movimentação implementada conforme as regras do xadrez, utilizando recursividade para Torre, Bispo e Rainha, e loops aninhados para o Cavalo e Bispo. O programa imprime as direções de movimento de cada peça no console, seguindo um padrão específico.

### Movimentos das Peças

- **Torre**: Move-se 5 casas para a direita, implementado com uma função recursiva.
- **Bispo**: Move-se 5 casas na diagonal (cima e à direita), usando recursividade e loops aninhados (externo para vertical, interno para horizontal).
- **Rainha**: Move-se 8 casas para a esquerda, implementado com uma função recursiva.
- **Cavalo**: Move-se em "L" (duas casas para cima e uma para a direita), usando loops aninhados com controle de fluxo via `continue` e `break`.

## Requisitos

- Compilador C (ex.: gcc)
- Sistema operacional compatível (Windows, Linux, macOS)

## Como Compilar

Para compilar o programa, utilize o seguinte comando no terminal (certifique-se de estar no diretório onde o arquivo `movimento_pecas.c` está localizado):

```bash
gcc movimento_pecas.c -o xadrez
```

## Como Executar

Após compilar, execute o programa com o comando:

```bash
./xadrez
```

No Windows, utilize:

```bash
xadrez.exe
```

## Saída Esperada

O programa imprimirá no console as direções dos movimentos de cada peça, separadas por linhas em branco. Exemplo:

```
Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Movimento do Cavalo:
Cima
Cima
Direita
```
