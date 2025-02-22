#include <stdio.h>
int main(){

    char estado1;
    char codigo_da_carta1 [4];
    char nome_da_cidade1 [30];
    int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;

    char estado2;
    char codigo_da_carta2 [4];
    char nome_da_cidade2 [30];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

    //Carta 1

    printf("Carta 1\n");
    
    printf("Informe o estado indicando uma letra de A a H: ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta, letra do estado e um número de 1 a 4: ");
    scanf("%s", codigo_da_carta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Informe a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    //Carta 2

    printf("Carta 2\n");
    
    printf("Informe o estado indicando uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta, letra do estado e um número de 1 a 4: ");
    scanf("%s", codigo_da_carta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Informe a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\n",
        estado1,codigo_da_carta1,nome_da_cidade1,populacao1,area1,pib1,numero_de_pontos_turisticos1);

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d\n",
         estado2,codigo_da_carta2,nome_da_cidade2,populacao2,area1,pib2,numero_de_pontos_turisticos2);

}