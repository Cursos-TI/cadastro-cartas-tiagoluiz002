#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades 
  
  char nome[50];
  int populacao;
  float area;
  float pib;
  
  // Área para entrada de dados

  printf("Digite o nome da cidade: ");
  scanf("%s", nome);
  printf("Digite a população: ");
  scanf("%d", &populacao);
  printf("Digite a área: ");
  scanf("%f", &area);
  printf("Digite o Pib: ");
  scanf("%f", &pib);

  // Área para exibição dos dados da cidade

  printf("\n--- Carta da cidade ---\n");
  printf("Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("Pib: %f\n", pib);

return 0;
} 
