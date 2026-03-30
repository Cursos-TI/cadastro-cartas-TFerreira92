#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20];
  char codigo1[20];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pturistico1;

  // Área para entrada de dados
  printf("DIGITE ABAIXO OS DADOS DA PRIMEIRA CIDADE:\n");

  printf("Digite o nome do Estado: ");
  scanf("%s", &estado1);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade em Km²: ");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhões de reais: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &pturistico1);

  // Área para exibição dos dados da cidade

  printf("DADOS DA CIDADE 1:\n");

  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %0.2f Km²\n", area1);
  printf("PIB: %0.2f bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pturistico1);

return 0;
} 
