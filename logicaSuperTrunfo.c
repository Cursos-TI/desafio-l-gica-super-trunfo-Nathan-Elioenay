#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>
#include <stdlib.h>

int main(){
    //RESULTADO

    int resultado1, resultado2;

    //MENU

    int menu;

    //ESTADO

    char estado1 [20];
    char estado2 [20];

    // CARTA 1

    char codigo1[4], cidade1[32];
    int ponto_turistico1;
    float area1, pib1;
    unsigned long int populacao1;

    //CARTA 2

    char codigo2[4], cidade2[32];
    int ponto_turistico2;
    float area2, pib2;
    unsigned long int populacao2;

    //APRESENTAÇÃO DO JOGO

    printf("\n\n----------------- Jogo Super Trunfo -----------------\n\n");
    printf("Bem-Vindos!!! Cada carta possui atributos unicos para determinar o vencedor.\n\n");
    printf("Regras do jogo: A carta com a menor 'MENOR DENSIDADE POPULACIONAL' vence o jogo.\n\n");
    printf("****** Boa Sorte ******\n\n");

    //COLETA DOS DADOS CARTA 1

    printf("----------------- Carta 1 -----------------\n\n");
    printf("Digite um estado:\t");
    scanf("%s", estado1);
    printf("Digite o codigo EX:(A01):\t");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade:\t");
    scanf("%s", cidade1);
    printf("Quantos pontos turisticos a cidade tem:\t");
    scanf("%d", &ponto_turistico1);
    printf("Qual a area geografica:\t");
    scanf("%f", &area1);
    printf("Qual o PIB:\t");
    scanf("%f", &pib1);
    printf("Qual a populacao total:\t");
    scanf("%lu", &populacao1);
    printf("----------------------------------\n\n");

    //COLETA DOS DADOS CARTA 2

    printf("----------------- Carta 2 -----------------\n\n");
    printf("Digite um estado:\t");
    scanf("%s", estado2);
    printf("Digite o codigo EX:(A01):\t");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade:\t");
    scanf("%s", cidade2);
    printf("Quantos pontos turisticos a cidade tem:\t");
    scanf("%d", &ponto_turistico2);
    printf("Qual a area geografica:\t");
    scanf("%f", &area2);
    printf("Qual o PIB:\t");
    scanf("%f", &pib2);
    printf("Qual a populacao total:\t");
    scanf("%lu", &populacao2);
    printf("----------------------------------\n\n");

    //DENSIDADE POPULACIONAL

    float densidadePopulacional1 = (float) populacao1 / area1;
    float densidadePopulacional2 = (float) populacao2 / area2;

    // PIB PER CAPITA

    float perCapita1 = (float) pib1 / populacao1;
    float perCapita2 = (float) pib2 / populacao2;

    //DENSIDADE POPULACIONAL 'SUPER PODER' (QUEM TIVER A MENOR DENSIDADE VENCE O JOGO!!)

    float superPoder1 = (populacao1 + ponto_turistico1 + pib1 + area1 + perCapita1) / densidadePopulacional1;
    float superPoder2 = (populacao2 + ponto_turistico2 + pib2 + area2 + perCapita2) / densidadePopulacional2;

    //INTERATIVIDADE COM USUÁRIO, MENU
    printf("----------------- Escolha o primeiro Atributo -----------------\n\n");
    printf("1. PIB;\n");
    printf("2. Area Geografica;\n");
    printf("3. Pontos Turisticos;\n");
    printf("4. Populacao;\n");
    printf("5. Densidade Populacional;\n");
    printf("6. PIB per Capita;\n");
    printf("7. Super Poder;\n");
    printf("8. Todos os Atributos;\n");
    printf("9. Ver Regras do Jogo;\n");
    printf("Digite uma opcao:\t");
    scanf("%d", &menu);

    switch(menu){

       case 1:

           printf("\n\nVoce escolheu como primeiro atributo : PIB .\n\n");
           resultado1 = pib1 > pib2 ? 1:0;

           //EXIBIÇÃO DO SEGUNDO ATRIBUTO

                printf("----------------- Escolha o segundo Atributo -----------------\n\n");

                printf("2. Area Geografica;\n");
                printf("3. Pontos Turisticos;\n");
                printf("4. Populacao;\n");
                printf("5. Densidade Populacional;\n");
                printf("6. PIB per Capita;\n");
                printf("7. Super Poder;\n");
                printf("Digite uma opcao:\t");
                scanf("%d", &menu);

           switch(menu){

               case 2:
                   printf("\nSegundo atributo: AREA GEOGRAFICA. \n\n");
                   resultado2 = area1 > area2 ? 1:0;

                     //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB: %.2f\n", pib1);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB: %.2f\n", pib2);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area2);

               break;

               case 3:
                   printf("\nSegundo atributo: PONTOS TURISTICOS. \n\n");
                   resultado2 = ponto_turistico1 > ponto_turistico2 ? 1:0;

                     //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s", estado1);
                      printf("Nome da cidade: %s", cidade1);
                      printf("Primeiro atributo - PIB: %.2f\n", pib1);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s", estado2);
                      printf("Nome da cidade: %s", cidade2);
                      printf("Primeiro atributo - PIB: %.2f\n", pib2);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
               break;

               case 4:
                   printf("\nSegundo atributo: POPULACAO. \n\n");
                   resultado2 = populacao1 > populacao2 ? 1:0;

                      //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB: %.2f\n", pib1);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB: %.2f\n", pib2);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao2);

               break;

               case 5:
                   printf("Segundo atributo: DENSIDADE POPULACIONAL. \n\n");
                   resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;

                      //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB: %.2f\n", pib1);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB: %.2f\n", pib2);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);

               break;

               case 6:
                   printf("\nSegundo atributo: PIB PER CAPITA. \n\n");
                   resultado2 = perCapita1 > perCapita2 ? 1:0;

                      //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB: %.2f\n", pib1);
                      printf("Segundo atributo -  PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB: %.2f\n", pib2);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita2);
               break;

               case 7:
                   printf("\nSegundo atributo: SUPER PODER. \n\n");
                   resultado2 = superPoder1 > superPoder2 ? 1:0;

                      //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB: %.2f\n", pib1);
                      printf("Segundo atributo - SUPER PODER: %d\n", superPoder1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB: %.2f\n", pib2);
                      printf("Segundo atributo - SUPER PODER: %d\n", superPoder2);
               break;

               default:
                   printf("Opcao invalida...");
               break;

           }

       break;

       case 2:
           printf("Voce escolheu como primeiro atributo: AREA GEOGRAFICA.\n\n");
           resultado1 = area1 > area2 ? 1:0;

           //EXIBIÇÃO DO SEGUNDO ATRIBUTO
            printf("----------------- Escolha o segundo Atributo -----------------\n\n");

            printf("1. PIB;\n");
            printf("3. Pontos Turisticos;\n");
            printf("4. Populacao;\n");
            printf("5. Densidade Populacional;\n");
            printf("6. PIB per Capita;\n");
            printf("7. Super Poder;\n");
            printf("Digite uma opcao:\t");
            scanf("%d", &menu);

             switch(menu){

               case 1:
                   printf("\nSegundo atributo: PIB. \n\n");
                   resultado2 = pib1 > pib2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("Segundo atributo - PIB: %.2f\n", pib1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area2);
                      printf("Segundo atributo - PIB: %.2f\n", pib2);
               break;

               case 3:
                   printf("\nSegundo atributo: PONTOS TURISTICOS. \n\n");
                   resultado2 = ponto_turistico1 > ponto_turistico2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area2);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
               break;

               case 4:
                   printf("\nSegundo atributo: POPULACAO. \n\n");
                   resultado2 = populacao1 > populacao2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area2);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao2);
               break;

               case 5:
                   printf("\nSegundo atributo: DENSIDADE POPULACIONAL. \n\n");
                   resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area2);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
               break;

               case 6:
                   printf("\nSegundo atributo: PIB PER CAPITA. \n\n");
                   resultado2 = perCapita1 > perCapita2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area2);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita2);
               break;

               case 7:
                   printf("\nSegundo atributo: SUPER PODER. \n\n");
                   resultado2 = superPoder1 > superPoder2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - AREA GEOGRAFICA: %.2f\n", area2);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder2);
               break;

               default:
                   printf("Opcao invalida...");
               break;

           }


       break;

       case 3:
           printf("Voce escolheu o primeiro atributo: PONTOS TURISTICOS. \n\n");
           resultado1 = ponto_turistico1 > ponto_turistico2 ? 1:0;
            //EXIBIÇÃO DO SEGUNDO ATRIBUTO
            printf("----------------- Escolha o segundo Atributo -----------------\n\n");

            printf("1. PIB;\n");
            printf("2. Area geografica;\n");
            printf("4. Populacao;\n");
            printf("5. Densidade Populacional;\n");
            printf("6. PIB per Capita;\n");
            printf("7. Super Poder;\n");;
            printf("Digite uma opcao:\t");
            scanf("%d", &menu);

            switch(menu){

               case 1:
                   printf("\nSegundo atributo: PIB. \n\n");
                   resultado2 = pib1 > pib2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("Segundo atributo - PIB: %.2f\n", pib1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
                      printf("Segundo atributo - PIB: %.2f\n", pib2);
               break;

               case 2:
                   printf("\nSegundo atributo: AREA GEOGRAFICA. \n\n");
                   resultado2 = area1 > area2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area2);
               break;

               case 4:
                   printf("\nSegundo atributo: POPULACAO. \n\n");
                   resultado2 = populacao1 > populacao2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao2);
               break;

               case 5:
                   printf("\nSegundo atributo: DENSIDADE POPULACIONAL. \n\n");
                   resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
               break;

               case 6:
                   printf("\nSegundo atributo: PIB PER CAPITA. \n\n");
                   resultado2 = perCapita1 > perCapita2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita2);
               break;

               case 7:
                   printf("\nSegundo atributo: SUPER PODER. \n\n");
                   resultado2 = superPoder1 > superPoder2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder2);
               break;

               default:
                   printf("Opcao invalida...");
               break;

           }


       break;

       case 4:
            printf("Voce escolheu o primeiro atributo: POPULACAO. \n\n");
            resultado1 = populacao1 > populacao2 ? 1:0;
           //EXIBIÇÃO DO SEGUNDO ATRIBUTO
            printf("----------------- Escolha o segundo Atributo -----------------\n\n");

            printf("1. PIB;\n");
            printf("2. Area geografica;\n");
            printf("3. Pontos Turisticos;\n");
            printf("5. Densidade Populacional;\n");
            printf("6. PIB per Capita;\n");
            printf("7. Super Poder;\n");
            printf("Digite uma opcao:\t");
            scanf("%d", &menu);


               switch(menu){

               case 1:
                   printf("\nSegundo atributo: PIB. \n\n");
                   resultado2 = pib1 > pib2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao1);
                      printf("Segundo atributo - PIB: %.2f\n", pib1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao2);
                      printf("Segundo atributo - PIB: %.2f\n", pib2);
               break;

               case 2:
                   printf("\nSegundo atributo: AREA GEOGRAFICA. \n\n");
                   resultado2 = area1 > area2 ? 1:0;

                      //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao1);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao2);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area2);
               break;

               case 3:
                   printf("\nSegundo atributo: PONTOS TURISTICOS. \n\n");
                   resultado2 = ponto_turistico1 > ponto_turistico2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - POPULACAO: %d\n", populacao1);
                      printf("Segundo atributo - PONTOS TURISTICOS: %.2f\n", ponto_turistico1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - POPULACAO: %d\n", populacao2);
                      printf("Segundo atributo - PONTOS TURISTICOS: %.2f\n", ponto_turistico2);
               break;

               case 5:
                   printf("\nSegundo atributo: DENSIDADE POPULACIONAL. \n\n");
                   resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao1);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao2);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
               break;

               case 6:
                   printf("\nSegundo atributo: PIB PER CAPITA. \n\n");
                   resultado2 = perCapita1 > perCapita2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao1);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - POPULACAO: %lu\n", populacao2);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita2);
               break;

               case 7:
                   printf("\nSegundo atributo: SUPER PODER. \n\n");
                   resultado2 = superPoder1 > superPoder2 ? 1:0;
               break;

               default:
                   printf("Opcao invalida...");
               break;


           }


       break;

       case 5:
            printf("Voce escolheu o primeiro atributo: DENSIDADE POPULACIONAL. \n\n");
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;
            //EXIBIÇÃO DO SEGUNDO ATRIBUTO
            printf("----------------- Escolha o segundo Atributo -----------------\n\n");

            printf("1. PIB;\n");
            printf("2. Area geografica;\n");
            printf("3. Pontos Turisticos;\n");
            printf("4. Populacao;\n");
            printf("6. PIB per Capita;\n");
            printf("7. Super Poder;\n");
            printf("Digite uma opcao:\t");
            scanf("%d", &menu);


               switch(menu){

               case 1:
                   printf("\nSegundo atributo: PIB. \n\n");
                   resultado2 = pib1 > pib2 ? 1:0;

                    //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("Segundo atributo - PIB: %.2f\n", pib1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
                      printf("Segundo atributo - PIB: %.2f\n", pib2);
               break;

               case 2:
                   printf("\nSegundo atributo: AREA GEOGRAFICA. \n\n");
                   resultado2 = area1 > area2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area2);

               break;

               case 3:
                   printf("\nSegundo atributo: PONTOS TURISTICOS. \n\n");
                   resultado2 = ponto_turistico1 > ponto_turistico2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);

               break;

               case 4:
                   printf("\nSegundo atributo: POPULACAO. \n\n");
                   resultado2 = populacao1 > populacao2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao2);
               break;

               case 6:
                   printf("\nSegundo atributo: PIB PER CAPITA. \n\n");
                   resultado2 = perCapita1 > perCapita2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita2);
               break;

               case 7:
                   printf("\nSegundo atributo: SUPER PODER. \n\n");
                   resultado2 = superPoder1 > superPoder2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder2);
               break;

               default:
                   printf("Opcao invalida...");
               break;

           }

       break;

       case 6:
           printf("Voce escolheu o primeiro atributo: PIB PER CAPITA. \n\n");
           resultado1 = perCapita1 > perCapita2 ? 1:0;
            //EXIBIÇÃO DO SEGUNDO ATRIBUTO
            printf("----------------- Escolha o segundo Atributo -----------------\n\n");

            printf("1. PIB;\n");
            printf("2. Area geografica;\n");
            printf("3. Pontos Turisticos;\n");
            printf("4. Populacao;\n");
            printf("5. Densidade Populacional;\n");
            printf("7. Super Poder;\n");
            printf("Digite uma opcao:\t");
            scanf("%d", &menu);


               switch(menu){

               case 1:
                   printf("\nSegundo atributo: PIB. \n\n");
                   resultado2 = pib1 > pib2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("Segundo atributo - PIB: %.2f\n", pib1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita2);
                      printf("Segundo atributo - PIB: %.2f\n", pib2);
               break;

               case 2:
                   printf("\nSegundo atributo: AREA GEOGRAFICA. \n\n");
                   resultado2 = area1 > area2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita2);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area2);

               break;

               case 3:
                   printf("\nSegundo atributo: PONTOS TURISTICOS. \n\n");
                   resultado2 = ponto_turistico1 > ponto_turistico2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita2);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);

               break;

               case 4:
                   printf("\nSegundo atributo: POPULACAO. \n\n");
                   resultado2 = populacao1 > populacao2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita2);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao2);
               break;

               case 5:
                   printf("\nSegundo atributo: DENSIDADE POPULACIONAL. \n\n");
                   resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita2);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
               break;

               case 7:
                   printf("\nSegundo atributo: SUPER PODER. \n\n");
                   resultado2 = superPoder1 > superPoder2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - PIB PER CAPITA: %.2f\n", perCapita2);
                      printf("Segundo atributo - SUPER PODER: %.2f\n", superPoder2);
               break;

               default:
                   printf("Opcao invalida...");
               break;

           }

       break;

       case 7:
           printf("Voce escolheu o primeiro atributo: SUPER PODER. \n\n");
           resultado1 = superPoder1 > superPoder2 ? 1:0;
           //EXIBIÇÃO DO SEGUNDO ATRIBUTO
            printf("----------------- Escolha o segundo Atributo -----------------\n\n");

            printf("1. PIB;\n");
            printf("2. Area geografica;\n");
            printf("3. Pontos Turisticos;\n");
            printf("4. Populacao;\n");
            printf("5. Densidade Populacional;\n");
            printf("6. PIB per Capita;\n");
            printf("Digite uma opcao:\t");
            scanf("%d", &menu);


               switch(menu){

               case 1:
                   printf("\nSegundo atributo: PIB. \n\n");
                   resultado2 = pib1 > pib2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("Segundo atributo - PIB: %.2f\n", pib1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder2);
                      printf("Segundo atributo - PIB: %.2f\n", pib2);

               break;

               case 2:
                   printf("\nSegundo atributo: AREA GEOGRAFICA. \n\n");
                   resultado2 = area1 > area2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder2);
                      printf("Segundo atributo - AREA GEOGRAFICA: %.2f\n", area2);

               break;

               case 3:
                   printf("\nSegundo atributo: PONTOS TURISTICOS. \n\n");
                   resultado2 = ponto_turistico1 > ponto_turistico2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder2);
                      printf("Segundo atributo - PONTOS TURISTICOS: %d\n", ponto_turistico2);

               break;

               case 4:
                   printf("\nSegundo atributo: POPULACAO. \n\n");
                   resultado2 = populacao1 > populacao2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder2);
                      printf("Segundo atributo - POPULACAO: %lu\n", populacao2);

               break;

               case 5:
                   printf("\nSegundo atributo: DENSIDADE POPULACIONAL. \n\n");
                   resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder2);
                      printf("Segundo atributo - DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);

               break;

               case 6:
                   printf("\nSegundo atributo: PIB PER CAPITA. \n\n");
                   resultado2 = perCapita1 > perCapita2 ? 1:0;

                   //EXIBIÇÃO DOS RESULTADOS
                      printf("\n\n----------------------------------------\n\n");
                      printf("Exibicao dos resultados:\n\n");
                      printf("--------------- Carta1 ---------------\n");
                      printf("Nome do estado: %s\n", estado1);
                      printf("Nome da cidade: %s\n", cidade1);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder1);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita1);
                      printf("\n\n----------------------------------------\n\n");
                      printf("--------------- Carta2 ---------------\n");
                      printf("Nome do estado: %s\n", estado2);
                      printf("Nome da cidade: %s\n", cidade2);
                      printf("Primeiro atributo - SUPER PODER: %.2f\n", superPoder2);
                      printf("Segundo atributo - PIB PER CAPITA: %.2f\n", perCapita2);

               break;

               default:
                   printf("Opcao invalida...");
               break;

           }

       break;

       case 8:
               //EXIBIÇÃO DOS DADOS CARTA 1

            printf("----------------- Carta 1 -----------------\n\n");
            printf("Estado: %s\n", estado1);
            printf("Codigo: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("Pontos turisticos: %d\n", ponto_turistico1);
            printf("Area Geografica: %.2f metros quadrados\n", area1);
            printf("PIB: R$%.2f reais\n", pib1);
            printf("Populacao: %lu \n", populacao1);
            printf("Densidade populacional: *** \n");
            printf(" PIB Per Capita: R$%.2f reais\n", perCapita1);
            printf("Super Poder Carta 1: %.2f\n", superPoder1);
            printf("----------------------------------\n\n");

            //EXIBIÇÃO DOS DADOS CARTA 2

            printf("----------------- Carta 2 -----------------\n\n");
            printf("Estado: %s\n", estado2);
            printf("Codigo: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("Pontos turisticos: %d\n", ponto_turistico2);
            printf("Area Geografica: %.2f metros quadrados\n", area2);
            printf("PIB: R$%.2f reais\n", pib2);
            printf("Populacao: %lu \n", populacao2);
            printf("Densidade populacional: *** \n");
            printf(" PIB Per Capita: R$%.2f reais\n", perCapita2);
            printf("Super Poder Carta 1: %.2f\n", superPoder2);
            printf("----------------------------------\n\n");

            //COMPARAÇÃO DAS CARTAS

            printf("\n\n********* Comparando as cartas *********\n\n");

            //COMPARAÇÃO PONTOS TURISTICOS

            printf("Pontos turisticos: %s ou %s\n", cidade1, cidade2);

                if(ponto_turistico1 == ponto_turistico2){
                    printf("EMPATE...");
                }else if(ponto_turistico1 > ponto_turistico2){
                    printf("Cidade: %s GANHOU!\n", cidade1);
                }else{
                    printf("Cidade: %s GANHOU!\n", cidade2);
                }

            printf("\n \n-----------------------------------------\n \n");

            //COMPARAÇÃO AREA EM METROS QUADRADOS

                printf("Area Geografica: %s ou %s\n", cidade1, cidade2);
                if(area1 > area2){
                    printf("Cidade: %s GANHOU!\n", cidade1);
                }else{
                    printf("Cidade: %s GANHOU!\n", cidade2);
                }

             printf("\n \n-----------------------------------------\n \n");

            //COMPARAÇÃO PIB

                printf("Maior PIB: %s ou %s\n", cidade1 , cidade2);
                if(pib1 > pib2){
                    printf("Cidade: %s GANHOU!\n", cidade1);
                }else{
                    printf("Cidade: %s GANHOU!\n", cidade2);
                }

             printf("\n \n-----------------------------------------\n \n");

            //COMPARAÇÃO POPULAÇÃO

                printf("Populacao: %s ou %s\n", cidade1, cidade2);
                if(populacao1 > populacao2){
                    printf("Cidade: %s GANHOU!\n", cidade1);
                }else{
                    printf("Cidade: %s GANHOU!\n", cidade2);
                }

             printf("\n \n-----------------------------------------\n \n");

            //COMPARAÇÃO PIB PER CAPITA

                printf("PIB Per Capita: %s ou %s\n", cidade1, cidade2);
                if(perCapita1 > perCapita2){
                    printf("Cidade: %s GANHOU!\n", cidade1);
                }else{
                    printf("Cidade: %s GANHOU!\n", cidade2);
                }

             printf("\n \n-----------------------------------------\n \n");

            //COMPARAÇÃO SUPER PODER

                printf("Super Poder: %s ou %s\n", cidade1, cidade2);
                if(superPoder1 > superPoder2){
                    printf("Cidade: %s GANHOU!\n", cidade1);
                }else{
                    printf("Cidade: %s GANHOU!\n", cidade2);
                }

             printf("\n \n-----------------------------------------\n \n");

            //CARTA VENCEDORA - "VENCE QUEM TEM A MENOR DENSIDADE POPULACIONAL"

                printf("A CARTA VENCEDORA:\n");
                if(densidadePopulacional1 < densidadePopulacional2){
                    printf("Cidade: %s GANHOU O JOGO!!!\n\n", cidade1);
                    printf("Menor Densidade populacional: %.2f \n", densidadePopulacional1);
                }else{
                    printf("Cidade: %s GANHOU O JOGO!!!\n\n", cidade2);
                    printf("Menor Densidade populacional: %.2f \n", densidadePopulacional2);
                }


            printf("\n\n------------ FIM ------------\n\n");
               break;
               case 9:
                   printf("\n\n------------ Regras do Jogo – Super Trunfo (versão cidades) ------------\n\n");
                   printf("1. Objetivo \n");
                   printf("O jogo tem como objetivo comparar atributos de duas cartas (cada uma representando uma cidade) e definir qual e a vencedora.\n\n");
                   printf("\n \n-----------------------------------------\n \n");
                   printf("2. Preparacao\n");
                   printf("Cada jogador deve preencher as informações da sua carta:\n- Estado (A–H)\n- Codigo da carta (ex.: A01)\n- Nome da cidade\n- Numero de pontos turisticos\n- Area geografica (em km²)\n- PIB (em bilhoes de reais)\n- Populacao total\n\n");
                   printf("\n \n-----------------------------------------\n \n");
                   printf("3. Atributos disponiveis para disputa\n");
                   printf("PIB (maior vence)\n- Área Geografica (maior vence)\n- Pontos Turisticos (maior vence)\n- Populacao (maior vence)\n- Densidade Populacional (menor vence)\n- PIB per Capita (maior vence)\n- Super Poder (maior vence)\n");
                   printf("Todos os atributos (comparação geral, com destaque para densidade populacional como criterio final)\n\n");
                   printf("\n \n-----------------------------------------\n \n");
                   printf("4. Como jogar\n");
                   printf("- Apos preencher os dados das cartas, o jogador escolhe no menu qual atributo sera usado para definir o vencedor da rodada.\n");
                   printf("- O programa exibira as duas cartas e comparara o atributo escolhido.\n");
                   printf("- O vencedor sera a carta que apresentar o maior (ou menor, no caso da densidade populacional) valor no atributo selecionado.\n\n");
                   printf("\n \n-----------------------------------------\n \n");
                   printf("5. Vencedor Final\n");
                   printf("- Caso o jogador escolha a opcao “Todos os atributos”, o programa fara comparações de cada atributo individualmente.");
                   printf("- No fim, sera declarado como Vencedor do Jogo a cidade com menor densidade populacional.");
                   printf("- Caso opte por batalhar entre dois atributos, o vencedor sera quem ganhar a batalha nos dois atributos, \n caso contrario havera empate, ou uma carta (Carta1 ou carta2) perde.");
                   printf("\n \n-----------------------------------------\n \n");
               break;

          }

          printf("\n\n ### Resultado ### \n\n");

          if(resultado1 && resultado2){
            printf("### parabens! A cidade %s venceu!!! ### \n", cidade1);

          }else if(resultado1 != resultado2){
            printf("### A cidade %s EMPATOU com a cidade %s!! ### \n", cidade1, cidade2);
          }else{
            printf("### A cidade %s perdeu... ### \n", cidade1);
          }


    return 0;


}

    return 0;
}
