#include <stdio.h>
int main(){

    char estado1;
    char codigo_da_carta1 [4];
    char nome_da_cidade1 [30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo_da_carta2 [4];
    char nome_da_cidade2 [30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    //Carta 1

    printf("Carta 1\n");
    
    printf("Informe o estado indicando uma letra de A a H: ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta, letra do estado e um número de 1 a 4: ");
    scanf("%s", codigo_da_carta1);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Informe a quantidade de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("\n");

    densidade_populacional1 = (float)populacao1 / area1;

    pib_per_capita1 = pib1 / (float)populacao1;

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)numero_de_pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;

    //Carta 2

    printf("Carta 2\n");
    
    printf("Informe o estado indicando uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta, letra do estado e um número de 1 a 4: ");
    scanf("%s", codigo_da_carta2);

    printf("Informe o nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Informe a quantidade de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n");

    densidade_populacional2 = (float)populacao2 / area2;

    pib_per_capita2 = pib2 / (float)populacao2;

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)numero_de_pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

   printf("Carta 1 - %s: %f\n", nome_da_cidade1, densidade_populacional1);
   printf("Carta 2 - %s: %f\n", nome_da_cidade2, densidade_populacional2);
   
    if (densidade_populacional1< densidade_populacional2){
    printf("Resultado: Carta 1 %s venceu!\n\n", nome_da_cidade1);
   } else {
    printf ("Resultado: Carta 2 %s venceu!\n\n", nome_da_cidade2);
   }
   

}