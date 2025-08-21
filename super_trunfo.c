#include <stdio.h>
#include <string.h>

int main() {
  char state1[3];
  char cardCode1[4];
  char city1[32];
  unsigned long int population1;
  int area1;
  int pib1;
  int touristPoints1;
  float popDensity1;
  float pibPercapta1;
  float superPower1;

  printf("Cadastro da primeira carta: \n");

  printf("Estado: ");
  scanf("%s", state1);
  getchar();

  printf("Código da carta: ");
  scanf("%s", cardCode1);
  getchar();

  printf("Cidade: ");
  fgets(city1, 32, stdin);
  city1[strcspn(city1, "\n")] = '\0';

  printf("População: ");
  scanf("%lu", &population1);
  getchar();

  printf("Área (em km²): ");
  scanf("%d", &area1);
  getchar();

  printf("PIB: ");
  scanf("%d", &pib1);
  getchar();

  printf("Número de pontos turísticos: ");
  scanf("%d", &touristPoints1);

  popDensity1 = (float)population1 / area1;
  pibPercapta1 = (float)pib1 / population1;
  superPower1 = (float)population1 + (float)area1 + (float)pib1 +
                (float)touristPoints1 + pibPercapta1 + (1 / popDensity1);

  char state2[3];
  char cardCode2[4];
  char city2[32];
  unsigned long int population2;
  int area2;
  int pib2;
  int touristPoints2;
  float popDensity2;
  float pibPercapta2;
  float superPower2;

  printf("\nCadastro da segunda carta: \n");

  printf("Estado: ");
  scanf("%s", state2);
  getchar();

  printf("Código da carta: ");
  scanf("%s", cardCode2);
  getchar();

  printf("Cidade: ");
  fgets(city2, 32, stdin);
  city2[strcspn(city2, "\n")] = '\0';

  printf("População: ");
  scanf("%lu", &population2);
  getchar();

  printf("Área (em km²): ");
  scanf("%d", &area2);
  getchar();

  printf("PIB: ");
  scanf("%d", &pib2);
  getchar();

  printf("Número de pontos turísticos: ");
  scanf("%d", &touristPoints2);

  popDensity2 = (float)population2 / area2;
  pibPercapta2 = (float)pib2 / population2;

  superPower2 = (float)population2 + (float)area2 + (float)pib2 +
                (float)touristPoints2 + pibPercapta2 + (2 / popDensity2);

  printf("\n");

  printf("Comparação de Cartas:\n");

  int cardPop1Win = population1 > population2 ? 1 : 2;
  printf("População: Carta %d venceu (%s)\n", cardPop1Win,
         cardPop1Win == 1 ? "1" : "0");

  int cardArea1Win = area1 > area2 ? 1 : 2;
  printf("Área: Carta %d venceu (%s)\n", cardArea1Win,
         cardArea1Win == 1 ? "1" : "0");

  int cardPib1Win = pib1 > pib2 ? 1 : 2;
  printf("PIB: Carta %d venceu (%s)\n", cardPib1Win, cardPib1Win == 1 ? "1" : "0");

  int cardTuristic1Win = touristPoints1 > touristPoints2 ? 1 : 2;
  printf("Pontos Turísticos: Carta %d venceu (%s)\n", cardTuristic1Win,
         cardTuristic1Win == 1 ? "1" : "0");

  int cardPopulationDen1Win = popDensity1 > popDensity2 ? 1 : 2;
  printf("Densidade Populacional: Carta %d venceu (%s)\n",
         cardPopulationDen1Win, cardPopulationDen1Win == 1 ? "1" : "0");

  int cardPibPerCapta1Win = pibPercapta1 > pibPercapta2 ? 1 : 2;
  printf("PIB per Capita: Carta %d venceu (%s)\n", cardPibPerCapta1Win,
         cardPibPerCapta1Win == 1 ? "1" : "0");

  int cardSuperpower1Win = superPower1 > superPower2 ? 1 : 2;
  printf("Super Poder: Carta %d venceu (%s)\n", cardSuperpower1Win,
         cardSuperpower1Win == 1 ? "1" : "0");

  return 0;
}