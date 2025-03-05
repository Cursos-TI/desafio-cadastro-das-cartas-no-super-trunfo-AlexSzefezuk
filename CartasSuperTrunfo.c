#include <stdio.h>

int main() {
  char estado;
  char codigo[3];
  char cidade[30];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;

  char estado2;
  char codigo2[3];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  printf("Digite o estado: ");
  scanf(" %c", &estado);
  printf("Digite o codigo: ");
  scanf("%2s", codigo);
  printf("Digite a cidade: ");
  scanf("%29s", cidade);
  printf("Digite a populacao: ");
  scanf("%d", &populacao);
  printf("Digite a area: ");
  scanf("%f", &area);
  printf("Digite o PIB: ");
  scanf("%f", &pib);
  printf("Digite os pontos turisticos: ");
  scanf("%d", &pontosTuristicos);

  printf("Digite o estado 2: ");
  scanf(" %c", &estado2);
  printf("Digite o codigo 2: ");
  scanf("%2s", codigo2);
  printf("Digite a cidade 2: ");
  scanf("%29s", cidade2);
  printf("Digite a populacao 2: ");
  scanf("%d", &populacao2);
  printf("Digite a area 2: ");
  scanf("%f", &area2);
  printf("Digite o PIB 2: ");
  scanf("%f", &pib2);
  printf("Digite os pontos turisticos 2: ");
  scanf("%d", &pontosTuristicos2);

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turisticos: %d\n", pontosTuristicos);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);

  return 0;
}