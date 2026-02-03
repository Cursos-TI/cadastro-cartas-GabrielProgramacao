#include <stdio.h>

int main(){

/*------ Carta 1 ------*/
char estado1[30], codigo_da_carta1[30], cidade1[30]; //Informação das variaveis tipo char da Carta 1.
int populacao1, pontos_turisticos1; // Informação das variaveis tipo int da carta 1.
float area_Km²1, pib1; // Informação das variavies tipo float da carta 1.

/*------ Carta 2 ------*/
char estado2[30], codigo_da_carta2[30], cidade2[30]; // Informação das variaveis tipo char da carta 2.
int populacao2, pontos_turisticos2; // Informação das variaveis tipo int da carta 2.
float area_Km²2, pib2; // Informação das variaveis tipo float da carta 2.

/*------ Entrada da Carta 1 ------*/
printf("=== Informaçôes da Carta 1 ===\n"); // Impressão para melhor compreensão de qual carta será inserido as informações.

printf("Informe o Estado: "); // Necessario para que o usuario informe qual o Estado da Carta 1.
scanf("%s", estado1); // Leitura do que o usuario inseriu na Tela (O Estado).

printf("Informe o Código da Carta: "); // Necessario para que o usuario informe qual o Código da Carta 1.
scanf("%s", codigo_da_carta1); // Leitura do que o usuario inseriu na Tela (Código da Carta).

printf("Informe o Nome da Cidade: "); // Necessario para que o usuario informe o Nome da Cidade da Carta 1.
scanf("%s", cidade1); // Leitura do que o usuario inseriu na Tela (A Cidade).

printf("Informe a População da Cidade: "); // Necessario para que o usuario informe a População da Cidade da Carta 1.
scanf("%d", &populacao1); // Leitura do que o usuario inseriu na Tela (A População da Cidade).

printf("Informe a Area da Cidade em (Km²): "); // Necessario para que o usuario informe a Area em Km² da Cidade da Carta 1.
scanf("%f", &area_Km²1); // Leitura do que o usuario inseriu na Tela (A area da Cidade).

printf("Informe o PIB da Cidade: "); // Necessario para que o usuario informe o PIB da Cidade da Carta 1.
scanf("%f", &pib1); // Leitura do que o usuario inseriu na Tela (O PIB).

printf("Informe o Número de Pontos Turisticos da Ciadade: "); // Necessario para que o usuario informe o numero de pontos turisticos da Cidade da Carta 1.
scanf("%d", &pontos_turisticos1); // Leitura do que o usuario inseriu na Tela (Pontos Turisticos).

/*----- Entrada da Carta 2 ------*/
printf("=== Informação da Carta 2 ===\n"); //Impressão para melhor compreensão de qual carta será inserido as informações.

printf("Informe o Estado: "); // Necessario para que o usuario informe qual o Estado da Carta 2.
scanf("%s", estado2); // Leitura do que o usuario inseriu na Tela (O Estado).

printf("Informe o Código da Carta: "); // Necessario para que o usuario informe qual o Código da Carta 2.
scanf("%s", codigo_da_carta2); // Leitura do que o usuario inseriu na Tela (Código da Carta).

printf("Informe o Nome da Cidade: "); // Necessario para que o usuario informe o Nome da Cidade da Carta 2.
scanf("%s", cidade2); // Leitura do que o usuario inseriu na Tela (A Cidade).

printf("Informe a População da Cidade: "); // Necessario para que o usuario informe a População da Cidade da Carta 2.
scanf("%d", &populacao2); // Leitura do que o usuario inseriu na Tela (A População da Cidade).

printf("Informe a Area da Cidade em (Km²): "); // Necessario para que o usuario informe a Area em Km² da Cidade da Carta 2.
scanf("%f", &area_Km²2); // Leitura do que o usuario inseriu na Tela (A area da Cidade).

printf("Informe o PIB da Cidade: "); // Necessario para que o usuario informe o PIB da Cidade da Carta 2.
scanf("%f", &pib2); // Leitura do que o usuario inseriu na Tela (O PIB).

printf("Informe o Número de Pontos Turisticos da Ciadade: "); // Necessario para que o usuario informe o numero de pontos turisticos da Cidade da Carta 2.
scanf("%d", &pontos_turisticos2); // Leitura do que o usuario inseriu na Tela (Pontos Turisticos).
 
/*=== Saida dos Dados ===*/

printf("Carta 1: \n"); // Imprime a informação Carta 1.
printf("Estado: %s\n", estado1); // Imprime a informação inserida pelo usuario do estado da Carta 1.
printf("Código: %s\n", codigo_da_carta1); // Imprime a informação inserida pelo usuario do codigo da carta 1.
printf("Nome da Cidade: %s\n", cidade1); // Imprime a informação inserida pelo usuario da cidade da carta1.
printf("População: %d\n", populacao1); // Imprime a informação inserida pelo usuario da população da carta 1.
printf("Área: %.2f km²\n", area_Km²1); // Imprime a informação inserida pelo usuario da area em km² da carta 1.
printf("PIB: %.2f bilhões de reais\n", pib1); // Imprime a informação inserida pelo usuario do pib da carta 1.
printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1); // Imprime a informação inserida pelo usuario do numero de pontos turisticos da carta 1.

printf("Carta 2: \n"); // Imprime a informação Carta 2.
printf("Estado: %s\n", estado2); // Imprime a informação inserida pelo usuario do estado da Carta 2.
printf("Código: %s\n", codigo_da_carta2); // Imprime a informação inserida pelo usuario do codigo da carta 2.
printf("Nome da Cidade: %s\n", cidade2); // Imprime a informação inserida pelo usuario da cidade da carta 2.
printf("População: %d\n", populacao2); // Imprime a informação inserida pelo usuario da população da carta 2.
printf("Área: %.2f km²\n", area_Km²2); // Imprime a informação inserida pelo usuario da area em km² da carta 2.
printf("PIB: %.2f bilhões de reais\n", pib2); // Imprime a informação inserida pelo usuario do pib da carta 2.
printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2); // Imprime a informação inserida pelo usuario do numero de pontos turisticos da carta 2.

return 0;

}
