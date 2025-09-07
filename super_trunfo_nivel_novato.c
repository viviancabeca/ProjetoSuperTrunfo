#include <stdio.h>

int main(){
    char estado1; //uma letra de A a H (representando um dos 8 estados)
    char estado2;
    char codigo_da_carta1[4]; //essa variável deve mostrar a letra que representa o Estado, inserido acima, seguida de um número de 01 a 04
    char codigo_da_carta2[4];
    char cidade1[30]; //nome de uma cidade, que não seja de uma cidade com nome composto
    char cidade2[30];
    int populacao1; //número de habitantes da cidade inserida acima
    int populacao2;
    float area1; //área em quilômetros quadrados da cidade inserida anteriormente
    float area2;
    float pib1; //PIB da cidade inserida anteriormente
    float pib2;
    int pontos_turisticos1; //quantidade de pontos turísticos da cidade inserida anteriormente
    int pontos_turisticos2;

    printf("Vamos começar! Vou pedir uma série de informações da sua primeira carta.\n");

    printf("Digite uma letra entre A a H para identificar sua carta, que representará um dos oitos Estados:\n");
    scanf(" %c", &estado1);

    printf("Agora digite novamente a letra que você escolheu acima e, em seguida, um número de dois digitos entre 01 e 04. Esse será o código da Carta 1:\n");
    scanf(" %s", codigo_da_carta1);
    
    printf("Agora digite o nome de uma cidade (escolha uma cidade que não tenha nome composto):\n");
    scanf(" %s", cidade1);

    printf("Informe o número de habitantes da cidade em formato de número inteiro (sem decimais):\n");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade escolhida em km2, em formato com decimais:\n");
    scanf("%f", &area1);

    printf("Agora informa o Produto Interno Bruto (PIB) da cidade escolhida, com decimais:\n");
    scanf("%f", &pib1);

    printf("Por fim, informe o número de pontos turísticos da cidade que você escolheu:\n");
    scanf("%d", &pontos_turisticos1);


    printf("Agora, você vai me dar as mesmas informações para sua segunda carta. Não repita as informações dadas para a primeira carta.\n");


    printf("Digite uma letra entre A a H para identificar sua segunda carta, que representará um dos oitos Estados: \n");
    scanf(" %c", &estado2);

    printf("Agora digite novamente a letra que você escolheu acima e, em seguida, um número de dois digitos entre 01 e 04:\n");
    scanf(" %s", codigo_da_carta2);
    
    printf("Agora digite o nome da cidade (escolha uma cidade que não tenha nome composto): \n");
    scanf(" %s", cidade2);

    printf("Informe o número de habitantes da cidade em formato de número inteiro (sem decimais): \n");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em km2 em formato com decimais: \n");
    scanf("%f", &area2);

    printf("Agora informa o Produto Interno Bruto (PIB) da cidade com decimais: \n");
    scanf("%f", &pib2);

    printf("Por fim, informe o número de pontos turísticos da cidade que você escolheu: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Aqui estão os dados das suas duas cartas:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;


}
