#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define TAM_HABILIDADE 5

void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
  for (int i = 0; i < TAM_TABULEIRO; i++) {
    for (int j = 0; j < TAM_TABULEIRO; j++) {
      tabuleiro[i][j] = 0;
    }
  }
}

bool validarPosicaoNavio(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha,
                         int coluna, int tamanho, bool horizontal,
                         bool diagonal, bool diagonal_decrescente) {
  if (diagonal) {
    if (diagonal_decrescente) {
      if (linha + tamanho > TAM_TABULEIRO || coluna - tamanho + 1 < 0)
        return false;
      for (int k = 0; k < tamanho; k++) {
        if (tabuleiro[linha + k][coluna - k] != 0)
          return false;
      }
    } else {
      if (linha + tamanho > TAM_TABULEIRO || coluna + tamanho > TAM_TABULEIRO)
        return false;
      for (int k = 0; k < tamanho; k++) {
        if (tabuleiro[linha + k][coluna + k] != 0)
          return false;
      }
    }
  } else if (horizontal) {
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
                     int coluna, int tamanho, bool horizontal, bool diagonal,
                     bool diagonal_decrescente) {
  if (!validarPosicaoNavio(tabuleiro, linha, coluna, tamanho, horizontal,
                           diagonal, diagonal_decrescente)) {
    printf("Erro: Posição inválida para o navio em (%d, %d)\n", linha, coluna);
    return false;
  }

  if (diagonal) {
    if (diagonal_decrescente) {
      for (int k = 0; k < tamanho; k++) {
        tabuleiro[linha + k][coluna - k] = 3;
      }
    } else {
      for (int k = 0; k < tamanho; k++) {
        tabuleiro[linha + k][coluna + k] = 3;
      }
    }
  } else if (horizontal) {
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

void criarHabilidadeCone(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
  for (int i = 0; i < TAM_HABILIDADE; i++) {
    for (int j = 0; j < TAM_HABILIDADE; j++) {
      habilidade[i][j] = 0;

      if (i >= 2) {
        int meio = TAM_HABILIDADE / 2;
        int largura = i - 1;
        if (j >= meio - largura && j <= meio + largura) {
          habilidade[i][j] = 1;
        }
      }
    }
  }
  habilidade[1][TAM_HABILIDADE / 2] = 1;
}

void criarHabilidadeCruz(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
  for (int i = 0; i < TAM_HABILIDADE; i++) {
    for (int j = 0; j < TAM_HABILIDADE; j++) {
      habilidade[i][j] = 0;
      if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2) {
        habilidade[i][j] = 1;
      }
    }
  }
}

void criarHabilidadeOctaedro(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
  for (int i = 0; i < TAM_HABILIDADE; i++) {
    for (int j = 0; j < TAM_HABILIDADE; j++) {
      habilidade[i][j] = 0;
      int meio = TAM_HABILIDADE / 2;
      int distancia = abs(i - meio) + abs(j - meio);
      if (distancia <= 2) {
        habilidade[i][j] = 1;
      }
    }
  }
}

void aplicarHabilidade(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],
                       int habilidade[TAM_HABILIDADE][TAM_HABILIDADE],
                       int origem_linha, int origem_coluna) {
  int offset = TAM_HABILIDADE / 2;

  for (int i = 0; i < TAM_HABILIDADE; i++) {
    for (int j = 0; j < TAM_HABILIDADE; j++) {
      int tab_linha = origem_linha + (i - offset);
      int tab_coluna = origem_coluna + (j - offset);

      if (tab_linha >= 0 && tab_linha < TAM_TABULEIRO && tab_coluna >= 0 &&
          tab_coluna < TAM_TABULEIRO) {
        if (habilidade[i][j] == 1) {
          tabuleiro[tab_linha][tab_coluna] = 5;
        }
      }
    }
  }
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
      if (tabuleiro[i][j] == 0)
        printf("~ ");
      else if (tabuleiro[i][j] == 3)
        printf("N ");
      else if (tabuleiro[i][j] == 5)
        printf("* ");
    }
    printf("\n");
  }
}

int main() {

  int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
  int habilidadeCone[TAM_HABILIDADE][TAM_HABILIDADE];
  int habilidadeCruz[TAM_HABILIDADE][TAM_HABILIDADE];
  int habilidadeOctaedro[TAM_HABILIDADE][TAM_HABILIDADE];

  inicializarTabuleiro(tabuleiro);

  int navio1_linha = 2, navio1_coluna = 3;
  int navio2_linha = 5, navio2_coluna = 7;
  int navio3_linha = 0, navio3_coluna = 0;
  int navio4_linha = 0, navio4_coluna = 9;

  if (posicionarNavio(tabuleiro, navio1_linha, navio1_coluna, TAM_NAVIO, true,
                      false, false)) {
    printf("Navio horizontal posicionado em (%d, %d)\n", navio1_linha,
           navio1_coluna);
  }
  if (posicionarNavio(tabuleiro, navio2_linha, navio2_coluna, TAM_NAVIO, false,
                      false, false)) {
    printf("Navio vertical posicionado em (%d, %d)\n", navio2_linha,
           navio2_coluna);
  }
  if (posicionarNavio(tabuleiro, navio3_linha, navio3_coluna, TAM_NAVIO, false,
                      true, false)) {
    printf("Navio diagonal crescente posicionado em (%d, %d)\n", navio3_linha,
           navio3_coluna);
  }
  if (posicionarNavio(tabuleiro, navio4_linha, navio4_coluna, TAM_NAVIO, false,
                      true, true)) {
    printf("Navio diagonal decrescente posicionado em (%d, %d)\n", navio4_linha,
           navio4_coluna);
  }

  criarHabilidadeCone(habilidadeCone);
  criarHabilidadeCruz(habilidadeCruz);
  criarHabilidadeOctaedro(habilidadeOctaedro);

  int cone_linha = 3, cone_coluna = 5;
  int cruz_linha = 7, cruz_coluna = 2;
  int octaedro_linha = 5, octaedro_coluna = 4;

  aplicarHabilidade(tabuleiro, habilidadeCone, cone_linha, cone_coluna);
  aplicarHabilidade(tabuleiro, habilidadeCruz, cruz_linha, cruz_coluna);
  aplicarHabilidade(tabuleiro, habilidadeOctaedro, octaedro_linha,
                    octaedro_coluna);

  printf("\nTabuleiro com navios e áreas de habilidade:\n");
  exibirTabuleiro(tabuleiro);

  return 0;
}
