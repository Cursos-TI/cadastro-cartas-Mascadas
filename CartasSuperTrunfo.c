#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Declaração de variaveis
  char estadop1[30],estadop2[30],cod_cartap1[4] = "" , cod_cartap2[4] = "";
  char nome_cidadep1[30],nome_cidadep2[30];
  int populacaop1,populacaop2,ponto_turisticop1,ponto_turisticop2;
  float areap1, areap2, pibp1,pibp2;


  //iniciando a coleta de dados do Jogador 1
  printf("Player 1 insira sua carta.\n");
  printf("Digite o estado da sua cidade.\n");
  scanf(" %s",estadop1);
  
  printf("Digite o Código da sua cidade.\n");
  scanf("%s",cod_cartap1);

  printf("Digite o nome da sua cidade.\n");
  scanf(" %s",nome_cidadep1);

  printf("Digite a população da sua cidade.\n");
  scanf(" %d",&populacaop1);

  printf("Digite a area sua cidade.\n");
  scanf(" %f",&areap1);

  printf("Digite o PIB da sua cidade.\n");
  scanf(" %f",&pibp1);

  printf("Digite a quantidade de pontos turisticos da sua cidade.\n");
  scanf(" %d",&ponto_turisticop1);


  //Iniciando a coleta de dados do Jogador 2
  printf("Player 2 insira sua carta.\n");
  printf("Digite o estado da sua cidade.\n");
  scanf(" %s",estadop2);
  
  printf("Digite o Código da sua cidade.\n");
  scanf(" %s",cod_cartap2);

  printf("Digite o nome da sua cidade.\n");
  scanf(" %s",nome_cidadep2);

  printf("Digite a população da sua cidade.\n");
  scanf(" %d",&populacaop2);

  printf("Digite a area sua cidade.\n");
  scanf(" %f",&areap2);

  printf("Digite o PIB da sua cidade.\n");
  scanf(" %f",&pibp2);

  printf("Digite a quantidade de pontos turisticos da sua cidade.\n");
  scanf(" %d",&ponto_turisticop2);



  //Mostrando a carta do Jogador 1
  printf("Jogador 1\n");
  printf("Estado: %s\n",estadop1);
  printf("Código: %s\n",cod_cartap1);
  printf("Nome da Cidade: %s\n", nome_cidadep1);
  printf("População: %d\n",populacaop1);
  printf("Área: %.2f Km²\n",areap1);
  printf("PIB: %f\n", pibp1);
  printf("Número de Pontos Turísticos: %d\n\n", ponto_turisticop1);


    printf("----------------------------------------\n\n");
  //Mostrando a carta do Jogador 2
  printf("Jogador 2\n");
  printf("Estado: %s\n",estadop2);
  printf("Código: %s\n",cod_cartap2);
  printf("Nome da Cidade: %s\n", nome_cidadep2);
  printf("População: %d\n",populacaop2);
  printf("Área: %.2f Km²\n",areap2);
  printf("PIB: %f\n", pibp2);
  printf("Número de Pontos Turísticos: %d\n", ponto_turisticop2);
  return 0;
} 
