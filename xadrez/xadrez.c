#include <stdio.h>

void moverTorre(int casas, int atual) {
  if (atual > casas) {
    return;
  }
  printf("Direita\n");
  moverTorre(casas, atual + 1);
}

void moverBispo(int casas, int atual) {
  if (atual > casas) {
    return;
  }

  for (int i = 1; i <= 1; i++) {
    int j = 1;
    while (j <= 1) {
      printf("Cima, Direita\n");
      j++;
    }
  }
  moverBispo(casas, atual + 1);
}

void moverRainha(int casas, int atual) {
  if (atual > casas) {
    return;
  }
  printf("Esquerda\n");
  moverRainha(casas, atual + 1);
}

int main() {
  printf("Movimento da Torre:\n");
  moverTorre(5, 1);

  printf("\nMovimento do Bispo:\n");
  moverBispo(5, 1);

  printf("\nMovimento da Rainha:\n");
  moverRainha(8, 1);

  printf("\nMovimento do Cavalo:\n");
  int total_movimentos = 3;
  int contador_cima = 0;
  int contador_direita = 0;
  for (int i = 1; i <= total_movimentos; i++) {
    if (contador_cima < 2) {
      int j = 1;
      while (j <= 1) {
        printf("Cima\n");
        contador_cima++;
        j++;
        if (contador_cima == 2) {
          break;
        }
      }
      continue;
    }
    if (contador_direita < 1) {
      int k = 1;
      while (k <= 1) {
        printf("Direita\n");
        contador_direita++;
        k++;
        break;
      }
    }
  }

  return 0;
}