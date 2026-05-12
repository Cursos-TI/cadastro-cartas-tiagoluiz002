#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 
  
  char nome[50];
  int populacao, ponturis, populacao2, ponturis2;
  float area, area2;
  float pib, pib2, densipo, desnsipop2, pibpop, pibpop2;
  
  // Área para entrada de dados

  printf("Digite o nome da cidade: ");
  scanf("%s", nome);
  printf("Digite a população: ");
  scanf("%d", &populacao);
  printf("Pontos Turisticos: ");
  scanf("%d", ponturis);
  printf("Digite a área: ");
  scanf("%f", &area);
  printf("Digite o PIB: ");
  scanf("%f", &pib);

  // Área para exibição dos dados da cidade

  printf("\n--- Carta da cidade ---\n");
  printf("Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Pontos turisticos: %d\n", ponturis);
  printf("Área: %f km2\n", area);
  printf("PIB: %f Bilhões de Reais\n", pib);

  densipop = (populacao / area);
  printf("Densidade populacional: %.3fhab/km2\n", densipop);

  pibpop = (pib / populacao);
  printf("PIB per capita: %.3f reais/n", pibpop);

/////////////////////////////////////////////////////////////////


// Área para entrada de dados CARTA 2

  printf("Digite o nome da cidade: ");
  scanf("%s", nome2);
  printf("Digite a populacao: ");
  scanf("%d", &populacao2);
  printf("Pontos Turisticos: ");
  scanf("%d", &ponturis2);
  printf("Digite a area: ");
  scanf("%f", &area2);
  printf("Digite o Pib: ");
  scanf("%f", &pib2);

  // Área para exibição dos dados da cidade 2

  printf("\n--- Carta da cidade 2 ---\n");
  printf("Cidade: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Pontos Turisticos: %d\n", ponturis2);
  printf("Area: %.3f km2\n", area2);
  printf("Pib: %.6f Bilhoes de reais\n", pib2);

  // Nivel aventureiro do desafio 2 
  densipop2 = (populacao / area);
  printf("Densidade populacional: %.3fhab/km2\n", denspop2);

  pibpop2 = (pib / populacao);
  printf("PIB per capita: %f reais\n", pibpop2);
  

return 0;
} 
