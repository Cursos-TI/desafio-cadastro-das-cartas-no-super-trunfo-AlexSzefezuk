#include <stdio.h>

int main() {
  char estado;
  char codigo[3];
  char cidade[30];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;
  float densidadePopulacional;
  float pibPerCapita;
  float superPoder;
  
  char estado2;
  char codigo2[3];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  printf("Digite o estado: ");
  scanf(" %c", &estado);
  printf("Digite o codigo: ");
  scanf("%s", codigo);
  printf("Digite a cidade: ");
  scanf("%s", cidade);
  printf("Digite a populacao: ");
  scanf("%d", &populacao);
  printf("Digite a area: ");
  scanf("%f", &area);
  printf("Digite o PIB: ");
  scanf("%f", &pib);
  printf("Digite os pontos turisticos: ");
  scanf("%d", &pontosTuristicos);
  densidadePopulacional = populacao / area;
  pibPerCapita = pib / populacao; 
  superPoder = (float)populacao + area + pib + (float)pontosTuristicos + pibPerCapita - densidadePopulacional;

  printf("Digite o estado 2: ");
  scanf(" %c", &estado2);
  printf("Digite o codigo 2: ");
  scanf("%s", codigo2);
  printf("Digite a cidade 2: ");
  scanf("%s", cidade2);
  printf("Digite a populacao 2: ");
  scanf("%d", &populacao2);
  printf("Digite a area 2: ");
  scanf("%f", &area2);
  printf("Digite o PIB 2: ");
  scanf("%f", &pib2);
  printf("Digite os pontos turisticos 2: ");
  scanf("%d", &pontosTuristicos2);
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2; 
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;
  

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turisticos: %d\n", pontosTuristicos);
  printf("Densidade Pupulacional: %.2f\n", densidadePopulacional);
  printf("PIB per Capita: %.2f\n", pibPerCapita);
  printf("SuperPoder: %.2f\n", superPoder);


  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Pupulacional: %.2f\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);
  printf("SuperPoder: %.2f\n", superPoder2);

  printf("--------------------Comparacao das Cartas--------------------\n");

  int opcao;
  printf("Escolha o atributo para comparar:\n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. SuperPoder\n");
  scanf("%d", &opcao);

  switch(opcao) {
    case 1:
      if(populacao > populacao2) {
        printf("Carta 1 Venceu\n");
      } else if(populacao < populacao2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    case 2:
      if(area > area2) {
        printf("Carta 1 Venceu\n");
      } else if(area < area2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    case 3:
      if(pib > pib2) {
        printf("Carta 1 Venceu\n");
      } else if(pib < pib2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    case 4:
      if(pontosTuristicos > pontosTuristicos2) {
        printf("Carta 1 Venceu\n");
      } else if(pontosTuristicos < pontosTuristicos2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    case 5:
      if(densidadePopulacional < densidadePopulacional2) {
        printf("Carta 1 Venceu\n");
      } else if(densidadePopulacional > densidadePopulacional2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    case 6:
      if(pibPerCapita > pibPerCapita2) {
        printf("Carta 1 Venceu\n");
      } else if(pibPerCapita < pibPerCapita2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    case 7:
      if(superPoder > superPoder2) {
        printf("Carta 1 Venceu\n");
      } else if(superPoder < superPoder2) {
        printf("Carta 2 Venceu\n");
      } else {
        printf("Empatou\n");
      }
      break;
    default:
      printf("Opcao invalida\n");
  }

  return 0;
}