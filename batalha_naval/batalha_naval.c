#include <stdbool.h>
#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
  for (int i = 0; i < TAM_TABULEIRO; i++) {
    for (int j = 0; j < TAM_TABULEIRO; j++) {
      tabuleiro[i][j] = 0; // Água
    }
  }
}

bool validarPosicaoNavio(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha,
                         int coluna, int tamanho, bool horizontal) {
  if (horizontal) {
    if (coluna + tamanho > TAM_TABULEIRO)
      return false;

    for (int j = coluna; j < coluna + tamanho; j++) {
      if (tabuleiro[linha][j] != 0)
        return false;
    }
  } else {
    if (linha + tamanho > TAM_TABULEIRO)
      return false;

    for (int i = linha; i < linha + tamanho; i++) {
      if (tabuleiro[i][coluna] != 0)
        return false;
    }
  }
  return true;
}

bool posicionarNavio(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha,
                     int coluna, int tamanho, bool horizontal) {

  if (!validarPosicaoNavio(tabuleiro, linha, coluna, tamanho, horizontal)) {
    printf("Erro: Posição inválida para o navio em (%d, %d)\n", linha, coluna);
    return false;
  }

  if (horizontal) {
    for (int j = coluna; j < coluna + tamanho; j++) {
      tabuleiro[linha][j] = 3;
    }
  } else {
    for (int i = linha; i < linha + tamanho; i++) {
      tabuleiro[i][coluna] = 3;
    }
  }
  return true;
}

void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
  printf("\n  ");
  for (int j = 0; j < TAM_TABULEIRO; j++) {
    printf("%d ", j);
  }
  printf("\n");

  for (int i = 0; i < TAM_TABULEIRO; i++) {
    printf("%d ", i);
    for (int j = 0; j < TAM_TABULEIRO; j++) {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

  inicializarTabuleiro(tabuleiro);

  int navio1_linha = 2, navio1_coluna = 3;
  int navio2_linha = 5, navio2_coluna = 7;

  if (posicionarNavio(tabuleiro, navio1_linha, navio1_coluna, TAM_NAVIO,
                      true)) {
    printf("Navio horizontal posicionado em (%d, %d)\n", navio1_linha,
           navio1_coluna);
  }

  if (posicionarNavio(tabuleiro, navio2_linha, navio2_coluna, TAM_NAVIO,
                      false)) {
    printf("Navio vertical posicionado em (%d, %d)\n", navio2_linha,
           navio2_coluna);
  }

  printf("\nTabuleiro com navios posicionados:\n");
  exibirTabuleiro(tabuleiro);

  return 0;
}
