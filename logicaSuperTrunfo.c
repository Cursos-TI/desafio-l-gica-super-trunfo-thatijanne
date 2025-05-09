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


    // Impressão da comparação das cartas:

    printf("*** Comparação das Cartas ***\n");
    printf("Escolha uma opção: \n");
    printf("1. Estado \n");
    printf("2. População \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. Número de pontos turísticos \n");
    printf("6. Densidade demográfica \n\n");
    
    printf("Escolha:");
    scanf("%d", &escolhajogador);

    //Switch

    switch(escolhajogador)
    {
        case 1:
        printf("Cidade: Carta 1 = %s e Carta 2 = %s.\n",cidade1, cidade2);
        printf("Atributo Estado: Opção %d\n", escolhajogador);
        printf("Comparação do atributo: Carta 1 = %c e Carta 2 = %c\n", estado1, estado2);
        break;

        case 2:
        printf("Cidade: Carta 1 = %s e Carta 2 = %s.\n",cidade1, cidade2);
        printf("Atributo População: Opção %d\n", escolhajogador);
        printf("Comparação do atributo: Carta 1 = %d e Carta 2 = %d\n", populacao1,populacao2);
        break;

        case 3:
        printf("Cidade: Carta 1 = %s e Carta 2 = %s.\n",cidade1, cidade2);
        printf("Atributo Área: Opção %d\n", escolhajogador);
        printf("Comparação do atributo: Carta 1 = %.2f e Carta 2 = %.2f\n", area1, area2);
        break;

        case 4:
        printf("Cidade: Carta 1 = %s e Carta 2 = %s.\n",cidade1, cidade2);
        printf("Atributo PIB: Opção %d\n", escolhajogador);
        printf("Comparação do atributo: Carta 1 = %.2f e Carta 2 = %.2f\n", pib1,pib2);
        break;

        case 5:
        printf("Cidade: Carta 1 = %s e Carta 2 = %s.\n",cidade1, cidade2);
        printf("Atributo Número de pontos turísticos: Opção %d\n", escolhajogador);
        printf("Comparação do atributo: Carta 1 = %d e Carta 2 = %d\n", pontosturisticos1,pontosturisticos2);
        break;

        case 6:
        printf("Cidade: Carta 1 = %s e Carta 2 = %s.\n",cidade1, cidade2);
        printf("Atributo Densidade demográfica: Opção %d\n", escolhajogador);
        printf("Comparação do atributo: Carta 2 = %.2f e Carta 2 = %.2f\n", densidadeinvertida1,densidadeinvertida2);
        break;

        default:
        printf("Opção inválida!\n");
        break;

    }

    // Comparação das cartas com IF

    if(escolhajogador ==1){
    if (estado1 > estado2) 
    {
        printf("### Carta 1 venceu!###\n");
    }
        else if (estado1 < estado2)
            {
            printf("### Carta 2 venceu!###\n");
            }
        else 
        {
            printf("### Empate!###\n");
        }
    }

        if(escolhajogador == 2){
        if (populacao1 > populacao2)
    {
        printf("### Carta 1 venceu!###\n");
    }
        else if  (populacao1 < populacao2)
            {
            printf("### Carta 2 venceu!###\n");
            }
        else 
        {
            printf("### Empate!###\n");
        }
    }
        if(escolhajogador == 3){
        if (area1 > area2) 
    {
        printf("### Carta 1 venceu!###\n");
    }
        else if (area1 < area2)
            {
            printf("### Carta 2 venceu!###\n");
            }
        else 
        {
            printf("### Empate!###\n");
        }
    }

     if(escolhajogador == 4){
        if (pib1 > pib2) 
    {
        printf("### Carta 1 venceu!###\n");
    }
        else if (pib1 < pib2)
            {
            printf("### Carta 2 venceu!###\n");
            }
        else 
        {
            printf("### Empate!###\n");
        }
    }
        if(escolhajogador == 5){
        if (pontosturisticos1 > pontosturisticos2) 
    {
        printf("### Carta 1 venceu!###\n");
    }
        else if (pontosturisticos1 < pontosturisticos2) 
            {
            printf("### Carta 2 venceu!###\n");
            }
        else 
        {
            printf("### Empate!###\n");
        }
    }

     if(escolhajogador == 6){
        if (densidadeinvertida1 < densidadeinvertida2)
    {
        printf("### Carta 1 venceu!###\n");
    }
        else if (densidadeinvertida1 > densidadeinvertida2)
            {
            printf("### Carta 2 venceu!###\n");
            }
        else 
        {
            printf("### Empate!###\n");
        } 
    }

    return 0;
}