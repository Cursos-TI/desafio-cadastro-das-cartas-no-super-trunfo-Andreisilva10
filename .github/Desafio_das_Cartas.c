#include <stdio.h>

int main(){
    //CARTA:1
    char estado_1[50];
    char codigo_da_carta_1[50];
    char nome_da_cidade_1[50];
    int populacao_1;
    float area_em_km_1;
    float pib_1;
    int numero_de_pontos_turisticos_1;

    //CARTA:2
    char estado_2[50];
    char codigo_da_carta_2[50];
    char nome_da_cidade_2[50];
    int populacao_2;
    float area_em_km_2;
    float pib_2;
    int numero_de_pontos_turisticos_2;

    //CARTA:1
    printf("Qual é o estado da carta:1 ");
    scanf("%s", estado_1);
    printf("O estado é: %s\n", estado_1);

    printf("Qual é o codigo da carta: ");
    scanf("%s", codigo_da_carta_1);
    printf("O codigo é: %s\n", codigo_da_carta_1);

    printf("Qual é o nome da cidade: ");
    scanf("%s", nome_da_cidade_1);
    printf("O nome da cidade é: %s\n", nome_da_cidade_1);

    printf("Qual é a populacao:" );
    scanf("%d", &populacao_1);
    printf("A populacao é: %d\n", populacao_1);

    printf("Qual é a area em km: ");
    scanf("%f", &area_em_km_1);
    printf("A area é: %f\n", area_em_km_1);

    printf("Qual é o pib: ");
    scanf("%f", &pib_1);
    printf("O pib é: %f\n", pib_1);

    printf("Qual é o numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos_1);
    printf("O numero de pontos turisticoa é: %d\n\n", numero_de_pontos_turisticos_1);


    //CARTA:2
    printf("Qual é o estado da carta:2 ");
    scanf("%s", estado_2);
    printf("O estado é: %s\n", estado_2);

    printf("Qual é o codigo da carta: ");
    scanf("%s", codigo_da_carta_2);
    printf("O codigo é: %s\n", codigo_da_carta_2);

    printf("Qual é o nome da cidade: ");
    scanf("%s", nome_da_cidade_2);
    printf("O nome da cidade é: %s\n", nome_da_cidade_2);

    printf("Qual é a populacao:" );
    scanf("%d", &populacao_2);
    printf("A populacao é: %d\n", populacao_2);

    printf("Qual é a area em km: ");
    scanf("%f", &area_em_km_2);
    printf("A area é: %f\n", area_em_km_2);

    printf("Qual é o pib: ");
    scanf("%f", &pib_2);
    printf("O pib é: %f\n", pib_2);

    printf("Qual é o numero de pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos_2);
    printf("O numero de pontos turisticoa é: %d\n\n", numero_de_pontos_turisticos_2);


    //CARTA:1
    printf("O RESULTADO DA CARTA-1 È: \n" );
    printf("Estado: %s\n", estado_1);
    printf("Codigo_da_carta: %s\n", codigo_da_carta_1);
    printf("Nome_da_cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area_em_km: %f\n", area_em_km_1);
    printf("Pib: %f\n", pib_1);
    printf("Numero_de_pontos_turisticos: %d\n\n", numero_de_pontos_turisticos_1);

    //CARTA:2
    printf("O RESULTADO DA CARTA-2 È: \n" );
    printf("Estado: %s\n", estado_2);
    printf("Codigo_da_carta: %s\n", codigo_da_carta_2);
    printf("Nome_da_cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area_em_km: %f\n", area_em_km_2);
    printf("Pib: %f\n", pib_2);
    printf("Numero_de_pontos_turisticos: %d\n", numero_de_pontos_turisticos_2);

    
    
    return 0;


}