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
    int escolha1Jogador, escolha2Jogador;
    long double soma_atributos;
    
    
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
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
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
    printf("Super Poder carta 2: %.2Lf\n\n\n", superPoderCarta2);
    
   
    printf("### Escolha um atributo das cartas acima para comparar, de acordo com o Menu abaixo ###\n\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade populacional \n");
    printf("6. PIB per capita \n\n");
    scanf("%d", &escolha1Jogador);

    if(escolha1Jogador == 1 || escolha1Jogador == 2 || escolha1Jogador == 3 || escolha1Jogador == 4 || escolha1Jogador == 5 || escolha1Jogador == 6){
            switch (escolha1Jogador){
            case 1:
                printf("Jogador escolheu comparar o atributo: População\n\n");
                printf("População de %s: \n", cidade1);
                printf("%lu\n", populacao1);
                printf("População da %s: \n", cidade2);
                printf("%lu\n\n", populacao2);
                break;
            case 2:
                printf("Jogador escolheu comparar o atributo: Área\n\n");
                printf("Área da cidade %s: \n", cidade1);
                printf("%f\n", area1);
                printf("Área da cidade %s: \n", cidade2);
                printf("%f\n\n", area2);
                break;
            case 3:
                printf("Jogador escolheu comparar o atributo: PIB\n\n");
                printf("PIB da cidade %s: \n", cidade1);
                printf("%Lf\n", pib1);
                printf("PIB da cidade %s: \n", cidade2);
                printf("%Lf\n\n", pib2);
                break;
            case 4:
                printf("Jogador escolheu comparar o atributo: Pontos turísticos\n\n");
                printf("Nº de pontos turísticos da cidade %s: \n", cidade1);
                printf("%d\n", pontos_turisticos1);
                printf("Nº de pontos turísticos da cidade %s: \n", cidade2);
                printf("%d\n\n", pontos_turisticos2);
                break;
            case 5:
                printf("Jogador escolheu comparar o atributo: Densidade populacional\n\n");
                printf("Densidade populacional da cidade %s: \n", cidade1);
                printf("%Lf\n", densidade_populacional_cidade1);
                printf("Densidade populacional da cidade %s: \n", cidade2);
                printf("%Lf\n\n", densidade_populacional_cidade2);
                break;
            case 6:
                printf("Jogador escolheu comparar o atributo: PIB per capita\n\n");
                printf("PIB per capita da cidade %s: \n", cidade1);
                printf("%Lf\n", pib_percapita_cidade1);
                printf("PIB per capita da cidade %s: \n", cidade2);
                printf("%Lf\n\n", pib_percapita_cidade2);
                break;
            default:
                printf("Opção inválida\n");
                break;
            }
    
    printf("### Escolha OUTRO atributo das cartas acima para comparar. Ele tem de ser diferente do primeiro que você escolhheu ###\n\n");
    
    if (escolha1Jogador == 1){
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos turísticos \n");
        printf("5. Densidade populacional \n");
        printf("6. PIB per capita \n\n");
        scanf("%d", &escolha2Jogador);
    }else if (escolha1Jogador == 2){
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n\n");
        scanf("%d", &escolha2Jogador);
    }else if(escolha1Jogador == 3){
        printf("1. População\n");
        printf("2. Área \n");
        printf("4. Pontos turísticos \n");
        printf("5. Densidade populacional \n");
        printf("6. PIB per capita \n\n");
        scanf("%d", &escolha2Jogador);
    }else if(escolha1Jogador == 4){
        printf("1. População\n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("5. Densidade populacional \n");
        printf("6. PIB per capita \n\n");
        scanf("%d", &escolha2Jogador);
    }else if(escolha1Jogador == 5){
        printf("1. População\n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos turísticos \n");
        printf("6. PIB per capita \n\n");
        scanf("%d", &escolha2Jogador);
    }else if(escolha1Jogador == 6){
        printf("1. População\n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos turísticos \n");
        printf("5. Densidade populacional \n");
        scanf("%d", &escolha2Jogador);
    }else{
        printf("Opção inválida!");
    }
    

    if(escolha2Jogador == 1 || escolha2Jogador == 2 || escolha2Jogador == 3 || escolha2Jogador == 4 || escolha2Jogador == 5 || escolha2Jogador == 6){
        switch (escolha2Jogador){
            case 1:
                printf("Jogador escolheu comparar o atributo: População\n\n");
                printf("População da cidade %s: \n", cidade1);
                printf("%lu\n", populacao1);
                printf("População da cidade %s: \n", cidade2);
                printf("%lu\n\n", populacao2);
            break;
            case 2:
                printf("Jogador escolheu comparar o atributo: Área\n\n");
                printf("Área da cidade %s: \n", cidade1);
                printf("%f\n", area1);
                printf("Área da cidade %s: \n", cidade2);
                printf("%f\n\n", area2);
            break;
            case 3:
                printf("Jogador escolheu comparar o atributo: PIB\n\n");
                printf("PIB da cidade %s: \n", cidade1);
                printf("%Lf\n", pib1);
                printf("PIB da cidade %s: \n", cidade2);
                printf("%Lf\n\n", pib2);
            break;
            case 4:
                printf("Jogador escolheu comparar o atributo: Pontos turísticos\n\n");
                printf("Nº de pontos turísticos da cidade %s: \n", cidade1);
                printf("%d\n", pontos_turisticos1);
                printf("Nº de pontos turísticos da cidade %s: \n", cidade2);
                printf("%d\n\n", pontos_turisticos2);
            break;
            case 5:
                printf("Jogador escolheu comparar o atributo: Densidade populacional\n\n");
                printf("Densidade populacional da cidade %s: \n", cidade1);
                printf("%Lf\n", densidade_populacional_cidade1);
                printf("Densidade populacional da cidade %s: \n", cidade2);
                printf("%Lf\n\n", densidade_populacional_cidade2);
            break;
            case 6:
                printf("Jogador escolheu comparar o atributo: PIB per capita\n\n");
                printf("PIB per capita da cidade %s: \n", cidade1);
                printf("%Lf\n", pib_percapita_cidade1);
                printf("PIB per capita da cidade %s: \n", cidade2);
                printf("%Lf\n\n", pib_percapita_cidade2);
            break;
            default:
                printf("Opção inválida\n");
            break;
        }
    }

    if(escolha1Jogador == 1){
        if(populacao1 > populacao2){
            printf("População da cidade 1 %s é maior do que a população da cidade 2, %s\n", cidade1, cidade2);
        }else{
            printf("População da cidade 2 %s é maior do que a população da cidade 1 %s\n", cidade1, cidade2);
        }
    }else if(escolha1Jogador == 2){
            if(area1 > area2){
                printf("Área da cidade 1 %s é maior do que a área da cidade 2 %s\n", cidade1, cidade2);
            }else{
                printf("Área da cidade 2 %s é maior do que a área da cidade 1, %s\n", cidade1, cidade2);
            }
    }else if(escolha1Jogador == 3){
                if (pib1 > pib2){
                printf("O PIB da cidade 1 %s é maior que o PIB da cidade 2, %s\n", cidade1, cidade2);
                }else{
                printf("O PIB da cidade 2 %s é maior que o PIB da cidade 1 %s\n", cidade1, cidade2);
                }
    }else if(escolha1Jogador == 4){
            if(pontos_turisticos1 > pontos_turisticos2){
                printf("O número de pontos turísticos da cidade 1 %s é maior que o da cidade 2, %s\n", cidade1, cidade2);
            }else{
                printf("O número de pontos turísticos da cidade 2 %s é maior que o da cidade 1, %s\n", cidade1, cidade2);
            }
    }else if(escolha1Jogador == 5){
            if(densidade_populacional_cidade1 < densidade_populacional_cidade2){
                printf("A densidade populacional da cidade 1 %s é menor que a da cidade 2, %s\n", cidade1, cidade2);
            }else{
                printf("A densidade populacional da cidade 2 %s é menor que a da cidade 1, %s\n", cidade1, cidade2);
            }
    }else if(escolha1Jogador == 6){
            if(pib_percapita_cidade1 > pib_percapita_cidade2){
                printf("O PIB per capita da cidade 1 %s é maior que o da cidade 2, %s\n", cidade1, cidade2);
            }else{
                printf("O PIB per capita da cidade 2 %s é maior que o da cidade 1, %s\n", cidade1, cidade2);
            }
    }else{
        printf("Opções inválidas!\n");
    }
    
    
    if(escolha2Jogador == 1){ 
        if(populacao1 > populacao2){
            printf("População da cidade 1 %s é maior do que a população da cidade 2, %s\n", cidade1, cidade2);
        }else{
            printf("População da cidade 2 %s é maior do que a população da cidade 1 %s\n", cidade1, cidade2);
        }
    }else if(escolha2Jogador == 2){
            if(area1 > area2){
                printf("Área da cidade 1 %s é maior do que a área da cidade 2 %s\n", cidade1, cidade2);
            }else{
                printf("Área da cidade 2 %s é maior do que a área da cidade 1, %s\n", cidade1, cidade2);
            }
    }else if(escolha2Jogador == 3){
                if (pib1 > pib2){
                printf("O PIB da cidade 1 %s é maior que o PIB da cidade 2, %s\n", cidade1, cidade2);
                }else{
                printf("O PIB da cidade 2 %s é maior que o PIB da cidade 1 %s\n", cidade1, cidade2);
                }
    }else if(escolha2Jogador == 4){
            if(pontos_turisticos1 > pontos_turisticos2){
                printf("O número de pontos turísticos da cidade 1 %s é maior que o da cidade 2, %s\n", cidade1, cidade2);
            }else{
                printf("O número de pontos turísticos da cidade 2 %s é maior que o da cidade 1, %s\n", cidade1, cidade2);
            }
    }else if(escolha2Jogador == 5){
            if(densidade_populacional_cidade1 < densidade_populacional_cidade2){
                printf("A densidade populacional da cidade 1 %s é menor que a da cidade 2, %s\n", cidade1, cidade2);
            }else{
                printf("A densidade populacional da cidade 2 %s é menor que a da cidade 1, %s\n", cidade1, cidade2);
            }
    }else if(escolha2Jogador == 6){
            if(pib_percapita_cidade1 > pib_percapita_cidade2){
                printf("O PIB per capita da cidade 1 %s é maior que o da cidade 2, %s\n", cidade1, cidade2);
            }else{
                printf("O PIB per capita da cidade 2 %s é maior que o da cidade 1, %s\n", cidade1, cidade2);
            }
    }else{
        printf("Opções inválidas!\n");
    }

    }
        
    long double somaCarta1 = 0;
    long double somaCarta2 = 0;
    
    switch (escolha1Jogador){
    case 1:
        printf("Soma do mesmo atributo não é permitida!");
        break;
    case 2:
        somaCarta1 += populacao1 + pib1; 
    default:
        break;
    }

    return 0;
}