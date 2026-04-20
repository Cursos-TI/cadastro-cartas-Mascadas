#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Declaração de variaveis
  char estadop1[30],estadop2[30],cod_cartap1[4] = "" , cod_cartap2[4] = "";
  char nome_cidadep1[30],nome_cidadep2[30];
  unsigned long int populacaop1,populacaop2;
  int ponto_turisticop1,ponto_turisticop2;
  float areap1, areap2,densiP1,densiP2,pibpc1,pibpc2;
  double superPoder1, superPoder2, pibp1,pibp2;


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
  scanf(" %Lf",&pibp1);

  printf("Digite a quantidade de pontos turisticos da sua cidade.\n");
  scanf(" %d",&ponto_turisticop1);

//Calcular densidade populacional cidade 1
  densiP1 = (float) populacaop1/areap1;
//Calcular Pib Cidade 1
  pibpc1  = (float) pibp1/populacaop1;
//Calcular Super Poder da Ciddade
superPoder1 = (double) populacaop1 + areap1 + pibp1 + ponto_turisticop1 + pibpc1 + (1.0 / densiP1);

printf("\n\n------------------------------------------------------\n\n");


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
  scanf(" %lf",&pibp2);

  printf("Digite a quantidade de pontos turisticos da sua cidade.\n");
  scanf(" %d",&ponto_turisticop2);



//Calculo de densidade Populacional da Cidade 2
  densiP2 = (float) populacaop2/areap2;
//Calcular Pib Cidade 2
  pibpc2  = (float) pibp2/populacaop2;
//Calcular Super Poder da Ciddade
superPoder2 = (double) populacaop2 + areap2 + pibp2 + pibpc2 + ponto_turisticop2 + (1.0 / densiP2);


  //Comparação da população das vagas
  printf("\n\nComparação do Atributo de População:\n\n");
  if (populacaop1 > populacaop2)
  {
    printf("Carta 1 - %s (%s): %d.\n",nome_cidadep1,estadop1,populacaop1);
    printf("Carta 2 - %s (%s): %d.\n",nome_cidadep2,estadop2,populacaop2);
    printf("Carta 1 (%s) venceu!!\n\n", nome_cidadep1);
  }else{
    printf("Carta 1 - %s (%s): %d.\n",nome_cidadep1,estadop1,populacaop1);
    printf("Carta 2 - %s (%s): %d.\n",nome_cidadep2,estadop2,populacaop2);
    printf("Carta 2 (%s) venceu!!\n\n",nome_cidadep2 );
  }
  


  printf("Resumo por carta\n");
  printf("----------------------------------------\n\n");
  //Mostrando a carta do Jogador 1
  printf("Jogador 1\n");
  printf("Estado: %s\n",estadop1);
  printf("Código: %s\n",cod_cartap1);
  printf("Nome da Cidade: %s\n", nome_cidadep1);
  printf("População: %d, carta 1 venceu? (%d)\n",populacaop1, populacaop1 > populacaop2);
  printf("Área: %.2f Km², carta 1 venceu? (%d)\n",areap1, areap1 > areap2);
  printf("PIB: %.2f, carta 1 venceu? (%d)\n", pibp1, pibp1 > pibp2);
  printf("Número de Pontos Turísticos: %d, carta 1 venceu? (%d)\n", ponto_turisticop1, ponto_turisticop1 > ponto_turisticop2);
  printf("Densidade Populacional: %.2f hab/km², carta 1 venceu? (%d)\n",densiP1, densiP1 < densiP2 );
  printf("PIB per Capita: %.2f reais, carta 1 venceu? (%d) \n",pibpc1, pibpc1 > pibpc2);
  printf("Super Poder: %.2f, carta 1 venceu? (%d)\n\n",superPoder1, superPoder1 > superPoder2);

    printf("----------------------------------------\n\n");
  //Mostrando a carta do Jogador 2
  printf("Jogador 2\n");
  printf("Estado: %s\n",estadop2);
  printf("Código: %s\n",cod_cartap2);
  printf("Nome da Cidade: %s\n", nome_cidadep2);
  printf("População: %d, carta 2 venceu? (%d)\n",populacaop2, populacaop2 > populacaop1);
  printf("Área: %.2f Km², carta 2 venceu? (%d)\n",areap2, areap2 > areap1);
  printf("PIB: %2.f, carta 2 venceu? (%d)\n", pibp2, pibp2 > pibp1);
  printf("Número de Pontos Turísticos: %d, carta 2 venceu? (%d)\n", ponto_turisticop2, ponto_turisticop2 > ponto_turisticop1);
  printf("Densidade Populacional: %.2f hab/km², carta 2 venceu? (%d)\n",densiP2, densiP2 < densiP1 );
  printf("PIB per Capita: %.2f reais, carta 2 venceu? (%d) \n",pibpc2, pibpc2 > pibpc1);
  printf("Super Poder: %.2f, carta 2 venceu? (%d)\n\n",superPoder2, superPoder2 > superPoder1);




  return 0;
} 
