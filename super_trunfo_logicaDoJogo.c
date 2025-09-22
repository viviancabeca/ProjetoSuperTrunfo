#include <stdio.h>

int main(){
    char estado1; //uma letra de A a H (representando um dos 8 estados)
    char estado2;
    char codigo_da_carta1[4]; //essa variável deve mostrar a letra que representa o Estado, inserido acima, seguida de um número de 01 a 04
    char codigo_da_carta2[4];
    char cidade1[30]; //nome de uma cidade, que não seja de uma cidade com nome composto
    char cidade2[30];
    unsigned long int populacao1; //número de habitantes da cidade inserida acima
    unsigned long int populacao2;
    float area1; //área em quilômetros quadrados da cidade inserida anteriormente
    float area2;
    long double pib1; //PIB da cidade inserida anteriormente
    long double pib2;
    int pontos_turisticos1; //quantidade de pontos turísticos da cidade inserida anteriormente
    int pontos_turisticos2;
    long double densidade_populacional_cidade1;
    long double densidade_populacional_cidade2;
    long double pib_percapita_cidade1;
    long double pib_percapita_cidade2;
    long double inverso_densidade_populacional_cidade1;
    long double inverso_densidade_populacional_cidade2;
    
    
    printf("Vamos começar! Vou pedir uma série de informações da sua primeira carta.\n");

    printf("Digite uma letra entre A a H para identificar sua carta, que representará um dos oitos Estados:\n");
    scanf(" %c", &estado1);

    printf("Agora digite novamente a letra que você escolheu acima e, em seguida, um número de dois digitos entre 01 e 04. Esse será o código da Carta 1:\n");
    scanf(" %s", codigo_da_carta1);
    
    printf("Agora digite o nome de uma cidade (escolha uma cidade que não tenha nome composto):\n");
    scanf(" %s", cidade1);

    printf("Informe o número de habitantes da cidade em formato de número inteiro (sem decimais):\n");
    scanf(" %lu", &populacao1);

    printf("Informe a área da cidade escolhida em km2, em formato com decimais:\n");
    scanf(" %f", &area1);

    printf("Agora informa o Produto Interno Bruto (PIB) da cidade escolhida, com decimais:\n");
    scanf(" %Lf", &pib1);

    printf("Por fim, informe o número de pontos turísticos da cidade que você escolheu:\n");
    scanf(" %d", &pontos_turisticos1);


    printf("Agora, você vai me dar as mesmas informações para sua segunda carta. Não repita as informações dadas para a primeira carta.\n");


    printf("Digite uma letra entre A a H para identificar sua segunda carta, que representará um dos oitos Estados:\n");
    scanf(" %c", &estado2);

    printf("Agora digite novamente a letra que você escolheu acima e, em seguida, um número de dois digitos entre 01 e 04:\n");
    scanf(" %s", codigo_da_carta2);
    
    printf("Agora digite o nome da cidade (escolha uma cidade que não tenha nome composto):\n");
    scanf(" %s", cidade2);

    printf("Informe o número de habitantes da cidade em formato de número inteiro (sem decimais):\n");
    scanf(" %lu", &populacao2);

    printf("Informe a área da cidade em km2 em formato com decimais: \n");
    scanf(" %f", &area2);

    printf("Agora informa o Produto Interno Bruto (PIB) da cidade com decimais:\n");
    scanf(" %Lf", &pib2);

    printf("Por fim, informe o número de pontos turísticos da cidade que você escolheu:\n");
    scanf(" %d", &pontos_turisticos2);

    printf("Aqui estão os dados das suas duas cartas:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu km²\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2Lf bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontos_turisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2Lf bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", pontos_turisticos2);

    printf("Aqui, veja a densidade populacional das cidades que você escolheu, assim como o PIB.\n\n");

    densidade_populacional_cidade1 = (long double) populacao1 / area1;
    densidade_populacional_cidade2 = (long double) populacao2 / area2;
    pib_percapita_cidade1 = pib1 / (long double) populacao1;
    pib_percapita_cidade2 = pib2 / (long double) populacao2;

    inverso_densidade_populacional_cidade1 = 1.0 / densidade_populacional_cidade1;
    inverso_densidade_populacional_cidade2 = 1.0 / densidade_populacional_cidade2;

    long double superPoderCarta1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita_cidade1 + inverso_densidade_populacional_cidade1;
    long double superPoderCarta2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita_cidade2 + inverso_densidade_populacional_cidade2;


    printf("Aqui estão os dados das suas duas cartas, agora com as informações de densidade populacional e PIB per Capita.\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2Lf bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2Lf hab/km²\n", densidade_populacional_cidade1);
    printf("PIB per Capita: %.2Lf reais\n", pib_percapita_cidade1);
    printf("Super Poder Carta 1: %.2Lf\n\n", superPoderCarta1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2Lf bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2Lf hab/km²\n", densidade_populacional_cidade2);
    printf("PIB per Capita: %.2Lf reais\n", pib_percapita_cidade2);
    printf("Super Poder carta 2: %2Lf\n\n\n", superPoderCarta2);
    
    printf("**** COMPARAÇÃO DE CARTAS POR SUPER PODER ****\n\n");

    printf("População: Carta 1 venceu (%d).\n", populacao1 > populacao2);
    printf("Área: Carta 2 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 2 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacional: Carta 1 venceu (%d)\n", densidade_populacional_cidade1 < densidade_populacional_cidade2);
    printf("PIB per capita: Carta 2 venceu (%d)\n", pib_percapita_cidade1 > pib_percapita_cidade2);
    printf("Super Poder: Carta 1 venceu (%d)\n\n\n", superPoderCarta1 > superPoderCarta2);

    printf("***COMPARAÇÃO DE CARTAS POR ATRIBUTO: PIB***:\n\n");

    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;


}