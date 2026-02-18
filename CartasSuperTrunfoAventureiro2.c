#include <stdio.h>

int main(){

/*------ Carta 1 ------*/
char pais1[30] = "Brasil"; // Informação das variaveis tipo char da Carta 1.
char estado1[30] = "Paraná"; // Informação das variaveis tipo char da Carta 1.
char codigo_da_carta1[30] = "P01"; // Informação das variaveis tipo char da Carta 1.
char cidade1[30] = "Curitiba"; // Informação das variaveis tipo char da Carta 1.
unsigned long int populacao1 = 1830795; // Essa variavel era do tipo int e foi alterada para u l i para acomodar numeros maiores da Carta 1.
int pontos_turisticos1 = 30; // Informação da variavel tipo int da carta 1.
float area_Km²1 = 432.00; // Informação das variavies tipo float da carta 1.
float pib1 = 120.00; // Informação das variavies tipo float da carta 1.
float densidade1, pibPerCapita1; // Informação das variavies tipo float, para calcular Densidade e PIB per Capita da carta 1.

/*------ Carta 2 ------*/
char pais2[30] = "Brasil"; // Informação das variaveis tipo char da carta 2.
char estado2[30] = "Amazonas"; // Informação das variaveis tipo char da carta 2.
char codigo_da_carta2[30] = "A02"; // Informação das variaveis tipo char da carta 2.
char cidade2[30] = "Manaus"; // Informação das variaveis tipo char da carta 2.
unsigned long int populacao2 = 2303732; // Essa variavel era do tipo int e foi alterada para u l i para acomodar numeros maiores da Carta 2.
int pontos_turisticos2 = 50; // Informação da variavel tipo int da carta 2.
float area_Km²2 = 11401.00; // Informação das variaveis tipo float da carta 2.
float pib2 = 127.60; // Informação das variaveis tipo float da carta 2.
float densidade2, pibPerCapita2; // Informação das variavies tipo float, para calcular Densidade e PIB per Capita da carta 2.

/* Variavel do Menu de Interação */

int opcao;

/*------ Entrada da Carta 1 ------*/
// printf("\n=== Informaçôes da Carta 1 ===\n"); // Impressão para melhor compreensão de qual carta será inserido as informações.

// printf("Informe o Pais: ") // Necessario para que o usuario informe qual o Pais da Carta 1.
// scanf("%s", pais1); // Leitura do que o usuario inseriu na tela (Pais).

// printf("Informe o Estado: "); // Necessario para que o usuario informe qual o Estado da Carta 1.
// scanf("%s", estado1); // Leitura do que o usuario inseriu na Tela (O Estado).

// printf("Informe o Código da Carta: "); // Necessario para que o usuario informe qual o Código da Carta 1.
// scanf("%s", codigo_da_carta1); // Leitura do que o usuario inseriu na Tela (Código da Carta).

// printf("Informe o Nome da Cidade: "); // Necessario para que o usuario informe o Nome da Cidade da Carta 1.
// scanf("%s", cidade1); // Leitura do que o usuario inseriu na Tela (A Cidade).

// printf("Informe a População da Cidade: "); // Necessario para que o usuario informe a População da Cidade da Carta 1.
// scanf("%lu", &populacao1); // Leitura do que o usuario inseriu na Tela (A População da Cidade).

// printf("Informe a Area da Cidade em (Km²): "); // Necessario para que o usuario informe a Area em Km² da Cidade da Carta 1.
// scanf("%f", &area_Km²1); // Leitura do que o usuario inseriu na Tela (A area da Cidade).

// printf("Informe o PIB da Cidade: "); // Necessario para que o usuario informe o PIB da Cidade da Carta 1.
// scanf("%f", &pib1); // Leitura do que o usuario inseriu na Tela (O PIB).

// printf("Informe o Número de Pontos Turisticos da Ciadade: "); // Necessario para que o usuario informe o numero de pontos turisticos da Cidade da Carta 1.
// scanf("%d", &pontos_turisticos1); // Leitura do que o usuario inseriu na Tela (Pontos Turisticos).

/*----- Entrada da Carta 2 ------*/
// printf("\n=== Informação da Carta 2 ===\n"); //Impressão para melhor compreensão de qual carta será inserido as informações.

// printf("Informe o Pais: ") // Necessario para que o usuario informe qual o Pais da Carta 2.
// scanf("%s", pais2); // Leitura do que o usuario inseriu na tela (Pais).

// printf("Informe o Estado: "); // Necessario para que o usuario informe qual o Estado da Carta 2.
// scanf("%s", estado2); // Leitura do que o usuario inseriu na Tela (O Estado).

// printf("Informe o Código da Carta: "); // Necessario para que o usuario informe qual o Código da Carta 2.
// scanf("%s", codigo_da_carta2); // Leitura do que o usuario inseriu na Tela (Código da Carta).

// printf("Informe o Nome da Cidade: "); // Necessario para que o usuario informe o Nome da Cidade da Carta 2.
// scanf("%s", cidade2); // Leitura do que o usuario inseriu na Tela (A Cidade).

// printf("Informe a População da Cidade: "); // Necessario para que o usuario informe a População da Cidade da Carta 2.
// scanf("%lu", &populacao2); // Leitura do que o usuario inseriu na Tela (A População da Cidade).

// printf("Informe a Area da Cidade em (Km²): "); // Necessario para que o usuario informe a Area em Km² da Cidade da Carta 2.
// scanf("%f", &area_Km²2); // Leitura do que o usuario inseriu na Tela (A area da Cidade).

// printf("Informe o PIB da Cidade: "); // Necessario para que o usuario informe o PIB da Cidade da Carta 2.
// scanf("%f", &pib2); // Leitura do que o usuario inseriu na Tela (O PIB).

// printf("Informe o Número de Pontos Turisticos da Ciadade: "); // Necessario para que o usuario informe o numero de pontos turisticos da Cidade da Carta 2.
// scanf("%d", &pontos_turisticos2); // Leitura do que o usuario inseriu na Tela (Pontos Turisticos).

/*  CALCÚLOS  */

densidade1 = populacao1 / area_Km²1; // Pega o Valor inserido da População e Area Km² para calcular a densidade da Carta 1.
pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Pega o valor inserido do PIB e multiplica por 1 bilhão divide pelo valor inserido da população para calcular o PIB per Capita da carta 1.

densidade2 = populacao2 / area_Km²2; // Pega o Valor inserido da População e Area Km² para calcular a densidade da Carta 2.
pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Pega o valor inserido do PIB e multiplica por 1 bilhão divide pelo valor inserido da população para calcular o PIB per Capita da carta 2.

/* CALCÚLO DO SUPER PODER */

float superPoder1 = (float)populacao1 + area_Km²1 + pib1 + (float)pontos_turisticos1 + pibPerCapita1 + (1 / densidade1); // calcula o super poder da carta 1.
float superPoder2 = (float)populacao2 + area_Km²2 + pib2 + (float)pontos_turisticos2 + pibPerCapita2 + (1 / densidade2); // calcula o super poder da carta 1.
 
/*=== Saida dos Dados ===*/

printf("\nCarta 1: \n"); // Imprime a informação Carta 1.
printf("País: %s\n", pais1); // Imprime a informação inserida pelo usuario do País da Carta 1.
printf("Estado: %s\n", estado1); // Imprime a informação inserida pelo usuario do estado da Carta 1.
printf("Código: %s\n", codigo_da_carta1); // Imprime a informação inserida pelo usuario do codigo da carta 1.
printf("Nome da Cidade: %s\n", cidade1); // Imprime a informação inserida pelo usuario da cidade da carta1.
printf("População: %lu\n", populacao1); // Imprime a informação inserida pelo usuario da população da carta 1.
printf("Área: %.2f km²\n", area_Km²1); // Imprime a informação inserida pelo usuario da area em km² da carta 1.
printf("PIB: %.2f bilhões de reais\n", pib1); // Imprime a informação inserida pelo usuario do pib da carta 1.
printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1); // Imprime a informação inserida pelo usuario do numero de pontos turisticos da carta 1.
printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Imprime o calculo feito para Densidade Populacional da Carta 1.
printf("PIB Per Capita: %.2f Reais\n", pibPerCapita1); // Imprime o calculo feito do PIB Per Capita da Carta 1.
printf("Super Poder: %.2f\n", superPoder1); // Imprime o calculo feito para o Super Poder da Carta 1.

printf("\nCarta 2: \n"); // Imprime a informação Carta 2.
printf("País: %s\n", pais2); // Imprime a informação inserida pelo usuario do País da Carta 2.
printf("Estado: %s\n", estado2); // Imprime a informação inserida pelo usuario do estado da Carta 2.
printf("Código: %s\n", codigo_da_carta2); // Imprime a informação inserida pelo usuario do codigo da carta 2.
printf("Nome da Cidade: %s\n", cidade2); // Imprime a informação inserida pelo usuario da cidade da carta 2.
printf("População: %lu\n", populacao2); // Imprime a informação inserida pelo usuario da população da carta 2.
printf("Área: %.2f km²\n", area_Km²2); // Imprime a informação inserida pelo usuario da area em km² da carta 2.
printf("PIB: %.2f bilhões de reais\n", pib2); // Imprime a informação inserida pelo usuario do pib da carta 2.
printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2); // Imprime a informação inserida pelo usuario do numero de pontos turisticos da carta 2.
printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Imprime o calculo feito para Densidade Populacional da Carta 2.
printf("PIB Per Capita: %.2f Reais\n", pibPerCapita2); // Imprime o calculo feito do PIB Per Capita da Carta 2.
printf("Super Poder: %.2f\n", superPoder2); // Imprime o calculo feito para o Super Poder da Carta 2.

/*==== Menu de Interação ====*/

printf("\n ---- BATALHA DO SUPER TRUNFO ----\n");
printf("\nCartas da Batalha: Carta 1 - País %s VS Carta 2 - País %s\n", pais1, pais2); // Imprime as Cartas e seu País.
printf("### Atributos de comparação ###\n"); // Imprime o texto para um menu mais informativo.
printf("\n1. População\n"); // Imprime a 1 opção da comparação, População.
printf("2. Área\n"); // Imprime a 2 opção da comparação, Área.
printf("3. PIB\n"); // Imprime a 3 opção da comparação, PIB.
printf("4. Números de Pontos Turísticos\n"); // Imprime a 4 opção da comparação, Pontos Turísticos.
printf("5. Densidade Demográfica (Menor Vence!)\n"); // Imprime a 5 opção da comparação, Densidade Demográfica.
printf("6. Sair do Jogo\n"); // Imprime a 6 opção, Sair do Jogo.
printf("\nEscolha uma Opção Acima: "); // Imprime o texto para que o usuario escolha uma das opções acima.
scanf("%d", &opcao); // Lê a opção que o usuario escolheu.

/*Estrutura Switch, responsável pela comparação e escolha de comparação do jogador*/

switch(opcao){
    case 1: // Comparação da População (Maior Vence).
    printf("\nComparação de Cartas (Atributo: População):\n"); // Imprime o texto digitado.
    printf("\nCarta 1- %s: %lu\n", cidade1, populacao1); // Imprime a Carta o nome da cidade e o numero da população da carta 1.
    printf("Carta 2- %s: %lu\n", cidade2, populacao2); // Imprime a Carta o nome da cidade e o numero da população da carta 2.

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade1); // Imprime o resultado da comparação da população da carta 1 contra a Carta 2 se Carta 1 Vencer.
    } else if(populacao1 < populacao2){
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2); // Imprime o resultado da comparação da população da carta 1 contra a Carta 2 se Carta 2 Vencer.
    } else{
        printf("Resultado: Empate!\n");
    }
    break;

    case 2: // Comparação da Área (Maior vence)
    printf("\nComparação de Cartas (Atributo: Área):\n"); // Imprime o texto digitado.
    printf("\nCarta 1- %s: %.2f km²\n", cidade1, area_Km²1); // Imprime a Carta o nome da cidade e a Área em Km² da carta 1.
    printf("Carta 2- %s: %.2f km²\n", cidade2, area_Km²2); // Imprime a Carta o nome da cidade e a Área em Km² da carta 2.

    if(area_Km²1 > area_Km²2){
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade1); // Imprime o resultado da comparação da area km² da carta 1 contra a Carta 2 se Carta 1 Vencer.
    } else if(area_Km²1 < area_Km²2){
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2); // Imprime o resultado da comparação da area km² da carta 1 contra a Carta 2 se Carta 2 Vencer.
    } else{
        printf("Resultado: Empate!\n");
    }
    break;

    case 3: // Comparação do PIB (Maior vence)
    printf("\nComparação de Cartas (Atributo: PIB):\n"); // Imprime o texto digitado.
    printf("\nCarta 1- %s: %.2f Bilhões de Reais\n", cidade1, pib1); // Imprime a Carta o nome da cidade e o PIB da carta 1.
    printf("Carta 2- %s: %.2f Bilhões de Reais\n", cidade2, pib2); // Imprime a Carta o nome da cidade e o PIB da carta 2.

    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade1); // Imprime o resultado da comparação do PIB da carta 1 contra a Carta 2 se Carta 1 Vencer.
    } else if(pib1 < pib2){
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2); // Imprime o resultado da comparação do PIB da carta 1 contra a Carta 2 se Carta 2 Vencer.
    } else{
        printf("Resultado: Empate!\n");
    }
    break;

    case 4: // Comparação dos Pontos Turísticos (Maior vence)
    printf("\nComparação de Cartas (Atributo: Pontos Turisticos):\n"); // Imprime o texto digitado.
    printf("\nCarta 1- %s: %d\n", cidade1, pontos_turisticos1); // Imprime a Carta o nome da cidade e o número de Pontos Turisticos da carta 1.
    printf("Carta 2- %s: %d\n", cidade2, pontos_turisticos2); // Imprime a Carta o nome da cidade e o número de Pontos Turisticos da carta 2.

    if(pontos_turisticos1 > pontos_turisticos2){
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade1); // Imprime o resultado da comparação dos pontos turisticos da carta 1 contra a Carta 2 se Carta 1 Vencer.
    } else if(pontos_turisticos1 < pontos_turisticos2){
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2); // Imprime o resultado da comparação dos pontos turisticos da carta 1 contra a Carta 2 se Carta 2 Vencer.
    } else{
        printf("Resultado: Empate!\n");
    }
    break;

    case 5: // Comparação da Densidade Populacional (Menor vence)
    printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n"); // Imprime o texto digitado.
    printf("\nCarta 1- %s: %.2f hab/km²\n", cidade1, densidade1); // Imprime a Carta o nome da cidade e a Densidade Populacional da carta 1.
    printf("Carta 2- %s: %.2f hab/km²\n", cidade2, densidade2); // Imprime a Carta o nome da cidade e a Densidade Populacional da carta 2.

    if(densidade1 < densidade2){
        printf("Resultado: Carta 1 (%s) Venceu!\n", cidade1); // Imprime o resultado da comparação da densidade populacional da carta 1 contra a Carta 2 se Carta 1 Vencer.
    } else if(densidade1 > densidade2){
        printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2); // Imprime o resultado da comparação da densidade populacional da carta 1 contra a Carta 2 se Carta 2 Vencer.
    } else{
        printf("Resultado: Empate!\n");
    }
    break;

    case 6: // Sair do Jogo
    printf("\n*** Obrigado Por Jogar! ***\n");
    break;

    default: // Caso o usúario escolha uma opção inválida.
    printf("\nOpção Inválida!\n");
}

return 0;

}