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
  double pibpc1 = (pib1*1000000) / populacao1; //multipliquei para passar o valor do PIB para milhões

  double superpoder1 = (float)populacao1 + area1 + pib1 + (float)pturistico1 + (1/denspop1) + pibpc1;

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
  double pibpc2 = (pib2*1000000) / populacao2;  //multipliquei para passar o valor do PIB para milhões

  double superpoder2 = (float)populacao2 + area2 + pib2 + (float)pturistico2 + (1/denspop2) + pibpc2;  

  // Área para exibição dos dados da cidade

  //Cidade 01

  printf("\n");

  printf("DADOS DA CIDADE 1:\n");
  printf("\n");  

  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f milhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pturistico1);
  printf("Densidade populacional: %.2f\n", denspop1);
  printf("PIB per Capita: %.2f\n", pibpc1);
  printf("Superpoder: %.2f\n", superpoder1);

  printf("\n");

  //Cidade 02

  printf("DADOS DA CIDADE 2:\n");
  printf("\n");

  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f milhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pturistico2);
  printf("Densidade populacional: %.2f\n", denspop2);
  printf("PIB per Capita: %.2f\n", pibpc2); 
  printf("Superpoder: %.2f\n", superpoder2); 

  printf("\n");

  //Área para comparação

  int resultadoPop = populacao1 > populacao2;
  int resultadoArea = area1 > area2;
  int resultadoPib = pib1 > pib2;
  int resultadoPt = pturistico1 > pturistico2;
  int resultadoDens = (1/denspop1) > (1/denspop2);
  int resultadoPibpc = pibpc1 > pibpc2;
  int resultadoSuper = superpoder1 > superpoder2;

  printf("COMPARAÇÕES:\n");
  printf("\n");

  printf("População carta 01 venceu: %d\n", resultadoPop);
  printf("Área carta 01 venceu: %d\n", resultadoArea);
  printf("PIB carta 01 venceu: %d\n", resultadoPib);
  printf("Pontos turísticos carta 01 venceu: %d\n", resultadoPt);
  printf("Densidade populacional carta 01 venceu: %d\n", resultadoDens);      
  printf("PIB per Capita carta 01 venceu: %d\n", resultadoPibpc);
  printf("Superpoder carta 01 venceu: %d\n", resultadoSuper);

  printf("\n");


return 0;
}

/*Dados cidade 01:
Estado: São Paulo
Código: S01
Cidade: SP
População: 12325000
Área: 1521.11
PIB: 699.28
Pontos turísticos: 50
Dens. Pop. : 8102.47
PIB per Capita: 56724.32

Dados cidade 02:
Estado: Rio
Código: R01
Cidade: RJ
População: 6748000
Área: 1200.25
PIB: 300.50
Pontos turísticos: 30
Dens. Pop. : 5622.24
PIB per Capita: 44532.91*/

