#include <stdio.h>

int main(){

    //Definição das variaveis da carta 1.

    char estado[05];
    char codigo_carta[05];
    char cidade[20];
    int turisticos;
    unsigned long int populacao;
    float area, pib, densidade_populacional, pib_per_capita, super_poder;
    
    //Definição das variaveis da carta 2.

    char estado2[05];
    char codigo_carta2[05];
    char cidade2[20];
    int turisticos2;
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    
    // Declarando os dados da carta 1

    printf("\n***** Declare os dados da carta 1 *****\n");

    
    printf("Defina o Estado (A a Z).\n");
    scanf("%s", &estado);

    printf("Defina o Codigo da Carta (ex: A04, C05).\n");
    scanf("%s", &codigo_carta);

    printf("Defina o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Defina o numero de habitantes:\n");
    scanf("%lu", &populacao);

    printf("Defina a area em km²:\n");
    scanf("%f", &area);

    printf("Defina o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Defina os pontos turisticos da cidade:\n");
    scanf("%d", &turisticos);

    // Densidade populacional e pib per capita Carta 1

    densidade_populacional = (populacao / area);
    
    pib_per_capita = (pib / populacao);

    // Super poder carta 1

    super_poder = (populacao + area + pib + turisticos + pib_per_capita + (1 / densidade_populacional));

    //declarando os dados da carta 2

    printf("\n***** Declare os dados da carta 2 *****\n");

    
    printf("Defina o Estado (A a Z).\n");
    scanf("%s", &estado2);

    printf("Defina o Codigo da Carta (ex: A04, C05).\n");
    scanf("%s", &codigo_carta2);

    printf("Defina o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Defina o numero de habitantes:\n");
    scanf("%lu", &populacao2);

    printf("Defina a area em km²:\n");
    scanf("%f", &area2);

    printf("Defina o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Defina os pontos turisticos da cidade:\n");
    scanf("%d", &turisticos2);

    // Densidade populacional e pib per capita Carta 2

    densidade_populacional2 = (populacao2 / area2);

    pib_per_capita2 = (pib2 / populacao2);

    // super poder carta 2

    super_poder2 = (populacao2 + area2 + pib2 + turisticos2 + pib_per_capita2 + ( 1 / densidade_populacional2));

    //Imprimindo os resultados das cartas.

    printf("\n*****  Carta %s  *****\n", codigo_carta); 

    printf("\nEstado:%s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %f\n", densidade_populacional);
    printf("PIB per Capita: %f\n", pib_per_capita);
    printf("Super Poder: %f\n", super_poder);


    printf("\n*****  Carta %s  *****\n", codigo_carta2); 

    printf("\nEstado:%s\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %f\n", densidade_populacional2);
    printf("PIB per Capita: %f\n", pib_per_capita2);
    printf("Super Poder: %f\n", super_poder2);

    // Comparação das cartas

    printf("\n*****  Comparação das cartas %s e %s  *****\n", codigo_carta, codigo_carta2);

    printf("\nSe o resultado for (1) a Carta %s vence \n", codigo_carta);
    printf("\nSe o resultado for (0) a Carta %s vence \n", codigo_carta2);

    printf("\npopulação: %d\n",populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos turísticos: %d\n", turisticos > turisticos2);
    printf("Densidade Populacional: %d\n", densidade_populacional < densidade_populacional2);
    printf("PIB per Capita: %d\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder > super_poder2);

    return 0;

    
    
/*
*****  Carta A01  *****

Estado: MG
Codigo: A01
Nome da Cidade: Pirapora
População: 55606
Área: 549514.000000
PIB: 2880000000.000000
Número de Pontos Turísticos: 12
Densidade Populacional: 0.101191
PIB per Capita: 51792.972656

*****  Carta B01  *****
        
Estado: MG
Codigo: B01
Nome da Cidade: Buritizeiro
População: 23910
Área: 7218401.000000
PIB: 143959104.000000
Número de Pontos Turísticos: 15
Densidade Populacional: 0.003312
PIB per Capita: 6020.874512

*****  Comparação das cartas A01 e B01  *****

Se o resultado for (1) a Carta A01 vence
Se o resultado for (0) a Carta B01 vence

população: 1
Área: 0
PIB: 1
Pontos turísticos: 0
Densidade Populacional: 0
PIB per Capita 1
Super Poder: 1

*/

}
