#include<stdio.h>
#include<string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[50];
  char codigo1[50];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pturistico1;


  char estado2[50];
  char codigo2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pturistico2;
    

  // Área para entrada de dados

  // Cidade 01

  printf("DIGITE ABAIXO OS DADOS DA PRIMEIRA CIDADE:\n");

  printf("Digite o nome do Estado: ");
  fgets(estado1, 50, stdin);
  estado1[strcspn(estado1, "\n")] = '\0';

  printf("Digite o código da carta: ");
  scanf("%s", &codigo1);
  while(getchar() != '\n');

  printf("Digite o nome da cidade: ");
  fgets(cidade1, 50, stdin);
  cidade1[strcspn(cidade1, "\n")] = '\0';

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

  while(getchar() != '\n');
  printf("Digite o nome do Estado: ");
  fgets(estado2, 50, stdin);
  estado2[strcspn(estado2, "\n")] = '\0';

  printf("Digite o código da carta: ");
  scanf("%s", &codigo2);
  while(getchar() != '\n');

  printf("Digite o nome da cidade: ");
  fgets(cidade2, 50, stdin);
  cidade2[strcspn(cidade2, "\n")] = '\0';

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

  int escolha;

  printf("Escolha alguma das opções abaixo para jogar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos turísticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per capita\n");
  printf("7. Superpoder\n");
  printf("Escolha: ");
  scanf("%d", &escolha);

  printf("\n");

  switch(escolha){
    case 1:
    printf("O jogador escolheu População\n");
    printf("\n");
    if(populacao1 > populacao2){
      printf("### %s venceu ###\n", cidade1);
    } else if(populacao2 > populacao1){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
    case 2:
    printf("O jogador escolheu Área\n");
    printf("\n");
    if(area1 > area2){
      printf("### %s venceu ###\n", cidade1);
    } else if(area2 > area1){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
    case 3:
    printf("O jogador escolheu PIB\n");
    printf("\n");
    if(pib1 > pib2){
      printf("### %s venceu ###\n", cidade1);
    } else if(pib2 > pib1){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
    case 4:
    printf("O jogador escolheu Pontos turísticos\n");
    printf("\n");
    if(pturistico1 > pturistico2){
      printf("### %s venceu ###\n", cidade1);
    } else if(pturistico2 > pturistico1){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
    case 5:
    printf("O jogador escolheu Densidade populacional\n");
    printf("\n");
    if(denspop2 > denspop1){
      printf("### %s venceu ###\n", cidade1);
    } else if(denspop1 > denspop2){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
    case 6:
    printf("O jogador escolheu PIB per capita\n");
    printf("\n");
    if(pibpc1 > pibpc2){
      printf("### %s venceu ###\n", cidade1);
    } else if(pibpc2 > pibpc1){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
    case 7:
    printf("O jogador escolheu Superpoder\n");
    printf("\n");
    if(superpoder1 > superpoder2){
      printf("### %s venceu ###\n", cidade1);
    } else if(superpoder2 > superpoder1){
      printf("### %s venceu ###\n", cidade2);
    } else{
      printf("### EMPATE ###\n");
    }
    break;
  }

  printf("\n");
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

