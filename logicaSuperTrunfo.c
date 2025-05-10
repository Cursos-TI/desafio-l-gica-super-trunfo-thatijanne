#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
    
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[15], cidade2[15];
    int populacao1, populacao2, escolhajogador;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float densidadeinvertida1, densidadeinvertida2;
    float superpoder1, superpoder2;
    int resultadopopulacao;
    int resultadoarea;
    int resultadopib;
    int resultadopontosturisticos;
    int resultadodensidade;
    int resultadopibpercapita;
    int resultadosuperpoder;
    int atributo1, atributo2;
    float resultado1, resultado2;

    //Dados da Carta 1

    printf("Dados da Carta 1:\n");
   
    printf("Insira o Estado:\n");
    scanf(" %c", &estado1);

    printf("Insira o código:\n");
    scanf(" %s", codigo1);

    printf("Insira a cidade:\n");
    scanf(" %s", cidade1);

    printf("Insira a população:\n");
    scanf("%d", &populacao1);

    printf("Insira a área:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    //Dados da Carta 2

    printf("Dados da Carta 2:\n");
   
    printf("Insira o Estado:\n");
    scanf(" %c", &estado2);

    printf("Insira o código:\n");
    scanf(" %s", codigo2);

    printf("Insira a cidade:\n");
    scanf(" %s", cidade2);

    printf("Insira a população:\n");
    scanf("%d", &populacao2);

    printf("Insira a área:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional e pib percapita

    densidade1 = (float) populacao1/area1;
    densidade2 = (float) populacao2/area2;
    pibpercapita1 = (float) pib1/populacao1;
    pibpercapita2 = (float) pib2/populacao2;
    
    //Cálculo do Superpoder

    densidadeinvertida1 = (float) 1 / densidade1;
    densidadeinvertida2 = (float) 1 / densidade2;
    superpoder1 = (float) populacao1 + area1 + pib1 + pibpercapita1 + densidadeinvertida1 + pontosturisticos1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pibpercapita2 + densidadeinvertida2 + pontosturisticos2;

    // Comparação das Cartas

    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontosturisticos = pontosturisticos1 > pontosturisticos2;
    resultadodensidade = densidadeinvertida1 < densidadeinvertida2;
    resultadopibpercapita = pibpercapita1 > pibpercapita2;
    resultadosuperpoder = superpoder1 > superpoder2;

    // Impressão dos dados das cartas:

    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f  hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);

    printf("Dados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);

   //Escolha do atributo 1

    printf("*** Comparação dos Atributos das Cartas! ***\n");
    printf("Escolha o primeiro atributo!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributo1);

    
    //Switch

    switch(atributo1)
    {
        case 1:
        printf("Você escolheu o Atributo População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Você escolheu o Atributo Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu o Atributo PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        printf("Você escolheu o Atributo Número de Pontos turísticos!\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;

        case 5:
        printf("Você escolheu o Atributo Densidade Populacional!\n");
        resultado1 = densidadeinvertida1 < densidadeinvertida2 ? 1 : 0;
        break;

        default:
        printf("Opção inválida!\n");
        break;
    }

    //Escolha do atributo 2

    printf("Escolha o segundo atributo!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
        printf("Você escolheu o mesmo atributo!\n");
        }
        else {
            switch (atributo2){
        case 1:
        printf("Você escolheu o Atributo População!\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Você escolheu o Atributo Área!\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu o Atributo PIB!\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        printf("Você escolheu o Atributo Número de Pontos turísticos!\n");
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;

        case 5:
        printf("Você escolheu o Atributo Densidade Populacional!\n");
        resultado2 = densidadeinvertida1 < densidadeinvertida2 ? 1 : 0;
        break;

        default:
        printf("Opção inválida!\n");
        break;   
        }
        }

        if(resultado1 && resultado2){
            printf("Parabéns, você venceu!\n");
        }
        else if (resultado1 != resultado2){
            printf("Empate!\n");
        }
        else {
            printf("Você perdeu!\n");
            }

            return 0;
            }
