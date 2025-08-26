#include <stdio.h>
#include <string.h>

int main() {
  char country1[32];
  int population1;
  float area1;
  float pib1;
  int touristPoints1;
  float popDensity1;
  char card1[4];

  printf("Cadastro da primeira carta:\n");

  printf("Código da carta (3 caracteres): ");
  scanf("%3s", card1);
  scanf("%*c");

  printf("País: ");
  fgets(country1, sizeof(country1), stdin);
  country1[strcspn(country1, "\n")] = '\0';

  printf("População: ");
  scanf("%d", &population1);
  scanf("%*c");

  printf("Área (em km²): ");
  scanf("%f", &area1);
  scanf("%*c");

  printf("PIB: ");
  scanf("%f", &pib1);
  scanf("%*c");

  printf("Número de pontos turísticos: ");
  scanf("%d", &touristPoints1);
  scanf("%*c");

  popDensity1 = (float)population1 / area1;

  char country2[32];
  int population2;
  float area2;
  float pib2;
  int touristPoints2;
  float popDensity2;
  char card2[4];

  printf("\nCadastro da segunda carta:\n");

  printf("Código da carta (3 caracteres): ");
  scanf("%3s", card2);
  scanf("%*c");

  printf("País: ");
  fgets(country2, sizeof(country2), stdin);
  country2[strcspn(country2, "\n")] = '\0';

  printf("População: ");
  scanf("%d", &population2);
  scanf("%*c");

  printf("Área (em km²): ");
  scanf("%f", &area2);
  scanf("%*c");

  printf("PIB: ");
  scanf("%f", &pib2);
  scanf("%*c");

  printf("Número de pontos turísticos: ");
  scanf("%d", &touristPoints2);
  scanf("%*c");

  popDensity2 = (float)population2 / area2;

  printf("\nComparação de Cartas:\n");

  int firstAttribute, secondAttribute;
  printf("Escolha o primeiro atributo:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &firstAttribute);
  scanf("%*c");

  printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
  if (firstAttribute != 1) printf("1. População\n");
  if (firstAttribute != 2) printf("2. Área\n");
  if (firstAttribute != 3) printf("3. PIB\n");
  if (firstAttribute != 4) printf("4. Número de pontos turísticos\n");
  if (firstAttribute != 5) printf("5. Densidade demográfica\n");
  do {
    scanf("%d", &secondAttribute);
    scanf("%*c");
    if (secondAttribute == firstAttribute) {
      printf(
          "Erro: O segundo atributo deve ser diferente do primeiro. Tente "
          "novamente:\n");
    }
  } while (secondAttribute == firstAttribute || secondAttribute < 1 ||
           secondAttribute > 5);

  char attribute1[30], attribute2[30];
  float value1_1 = 0, value1_2 = 0, value2_1 = 0, value2_2 = 0;
  int winner1 = 0, winner2 = 0;

  switch (firstAttribute) {
    case 1:
      strcpy(attribute1, "População");
      value1_1 = population1;
      value2_1 = population2;
      if (population1 > population2)
        winner1++;
      else if (population2 > population1)
        winner2++;
      break;
    case 2:
      strcpy(attribute1, "Área");
      value1_1 = area1;
      value2_1 = area2;
      if (area1 > area2)
        winner1++;
      else if (area2 > area1)
        winner2++;
      break;
    case 3:
      strcpy(attribute1, "PIB");
      value1_1 = pib1;
      value2_1 = pib2;
      if (pib1 > pib2)
        winner1++;
      else if (pib2 > pib1)
        winner2++;
      break;
    case 4:
      strcpy(attribute1, "Número de pontos turísticos");
      value1_1 = touristPoints1;
      value2_1 = touristPoints2;
      if (touristPoints1 > touristPoints2)
        winner1++;
      else if (touristPoints2 > touristPoints1)
        winner2++;
      break;
    case 5:
      strcpy(attribute1, "Densidade demográfica");
      value1_1 = popDensity1;
      value2_1 = popDensity2;
      if (popDensity1 < popDensity2)
        winner1++;
      else if (popDensity2 < popDensity1)
        winner2++;
      break;
    default:
      printf("Opção inválida\n");
      return 1;
  }

  switch (secondAttribute) {
    case 1:
      strcpy(attribute2, "População");
      value1_2 = population1;
      value2_2 = population2;
      if (population1 > population2)
        winner1++;
      else if (population2 > population1)
        winner2++;
      break;
    case 2:
      strcpy(attribute2, "Área");
      value1_2 = area1;
      value2_2 = area2;
      if (area1 > area2)
        winner1++;
      else if (area2 > area1)
        winner2++;
      break;
    case 3:
      strcpy(attribute2, "PIB");
      value1_2 = pib1;
      value2_2 = pib2;
      if (pib1 > pib2)
        winner1++;
      else if (pib2 > pib1)
        winner2++;
      break;
    case 4:
      strcpy(attribute2, "Número de pontos turísticos");
      value1_2 = touristPoints1;
      value2_2 = touristPoints2;
      if (touristPoints1 > touristPoints2)
        winner1++;
      else if (touristPoints2 > touristPoints1)
        winner2++;
      break;
    case 5:
      strcpy(attribute2, "Densidade demográfica");
      value1_2 = popDensity1;
      value2_2 = popDensity2;
      if (popDensity1 < popDensity2)
        winner1++;
      else if (popDensity2 < popDensity1)
        winner2++;
      break;
    default:
      printf("Opção inválida\n");
      return 1;
  }

  float sum1 = value1_1 + value1_2;
  float sum2 = value2_1 + value2_2;

  printf("\n=== Resultado da Comparação ===\n");
  printf("Países: %s (%s) vs %s (%s)\n", country1, card1, country2, card2);
  printf("Atributo 1: %s\n", attribute1);
  printf("  %s: %.2f\n", country1, value1_1);
  printf("  %s: %.2f\n", country2, value2_1);
  printf("Atributo 2: %s\n", attribute2);
  printf("  %s: %.2f\n", country1, value1_2);
  printf("  %s: %.2f\n", country2, value2_2);
  printf("Soma dos atributos:\n");
  printf("  %s: %.2f\n", country1, sum1);
  printf("  %s: %.2f\n", country2, sum2);

  if (sum1 > sum2) {
    printf("Carta vencedora: %s (%s)\n", card1, country1);
  } else if (sum2 > sum1) {
    printf("Carta vencedora: %s (%s)\n", card2, country2);
  } else {
    printf("Empate!\n");
  }

  return 0;
}