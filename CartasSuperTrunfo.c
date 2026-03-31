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


  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pturistico2;
    

  // Área para entrada de dados

  // Cidade 01

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

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pturistico1);

  float denspop1 = (float) populacao1 / area1;
  float pibpc1 = (pib1*1000000000000) / populacao1;  

  printf("\n");

  // Cidade 02

  printf("DIGITE ABAIXO OS DADOS DA SEGUNDA CIDADE:\n");

  printf("Digite o nome do Estado: ");
  scanf("%s", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade em Km²: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhões de reais: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pturistico2);
  
  float denspop2 = (float) populacao2 / area2;
  float pibpc2 = (pib2*1000000000000) / populacao2;  

  // Área para exibição dos dados da cidade

  //Cidade 01

  printf("\n");

  printf("DADOS DA CIDADE 1:\n");

  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f milhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pturistico1);
  printf("Densidade populacional: %.2f\n", denspop1);
  printf("PIB per Capita: %.2f\n", pibpc1);

  printf("\n");

  //Cidade 02

  printf("DADOS DA CIDADE 2:\n");

  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f milhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pturistico2);
  printf("Densidade populacional: %.2f\n", denspop2);
  printf("PIB per Capita: %.2f\n", pibpc2);  

  printf("\n");

return 0;
}
