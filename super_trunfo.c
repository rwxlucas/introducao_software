#include <stdio.h>
#include <string.h>

int main() {
  char state1[3];
  char cardCode1[4];
  char city1[32];
  int population1;
  int area1;
  int pib1;
  int touristPoints1;
  float popDensity1;
  float pibPercapta1;

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
  scanf("%d", &population1);
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

  char state2[3];
  char cardCode2[4];
  char city2[32];
  int population2;
  int area2;
  int pib2;
  int touristPoints2;
  float popDensity2;
  float pibPercapta2;

  printf("\n");
  printf("Cadastro da segunda carta: \n");

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
  scanf("%d", &population2);
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

  printf("\n");
  printf("Carta 1:\n");

  printf("Estado: %s\n", state1);
  printf("Código da carta: %s\n", cardCode1);
  printf("Nome da cidade: %s\n", city1);
  printf("População: %d\n", population1);
  printf("Área (em km²):: %d\n", area1);
  printf("PIB: %d\n", pib1);
  printf("Número de pontos turísticos:  %d\n", touristPoints1);
  printf("Densidade Populacional:  %.2f\n", popDensity1);
  printf("PIB per Capita:  %.2f\n", pibPercapta1);

  printf("\n");
  printf("Carta 2:\n");

  printf("Estado: %s\n", state2);
  printf("Código da carta: %s\n", cardCode2);
  printf("Nome da cidade: %s\n", city2);
  printf("População: %d\n", population2);
  printf("Área (em km²):: %d\n", area2);
  printf("PIB: %d\n", pib2);
  printf("Número de pontos turísticos:  %d\n", touristPoints2);
  printf("Densidade Populacional:  %.2f\n", popDensity2);
  printf("PIB per Capita:  %.2f\n", pibPercapta2);

  return 0;
}