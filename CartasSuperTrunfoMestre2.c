#include <stdio.h>

int main(){

/*------ Carta 1 ------*/
char pais1[30] = "Brasil"; // Informação das variaveis tipo char da Carta 1.
char estado1[30] = "Paraná"; // Informação das variaveis tipo char da Carta 1.
char codigo_da_carta1[30] = "P01"; // Informação das variaveis tipo char da Carta 1.
char cidade1[30] = "Curitiba"; // Informação das variaveis tipo char da Carta 1.
unsigned long int populacao1 = 1830795; // Essa variavel era do tipo int e foi alterada para u l i para acomodar numeros maiores da Carta 1.
int pontos_turisticos1 = 30; // Informação da variavel tipo int da carta 1.
float areakm2_1 = 432.00; // Informação das variavies tipo float da carta 1.
double pib1 = 120.00; // Informação das variavies tipo float da carta 1.
float densidade1, pibPerCapita1; // Informação das variavies tipo float, para calcular Densidade e PIB per Capita da carta 1.

/*------ Carta 2 ------*/
char pais2[30] = "Brasil"; // Informação das variaveis tipo char da carta 2.
char estado2[30] = "Amazonas"; // Informação das variaveis tipo char da carta 2.
char codigo_da_carta2[30] = "A02"; // Informação das variaveis tipo char da carta 2.
char cidade2[30] = "Manaus"; // Informação das variaveis tipo char da carta 2.
unsigned long int populacao2 = 2303732; // Essa variavel era do tipo int e foi alterada para u l i para acomodar numeros maiores da Carta 2.
int pontos_turisticos2 = 50; // Informação da variavel tipo int da carta 2.
float areakm2_2 = 11401.00; // Informação das variaveis tipo float da carta 2.
double pib2 = 127.60; // Informação das variaveis tipo float da carta 2.
float densidade2, pibPerCapita2; // Informação das variavies tipo float, para calcular Densidade e PIB per Capita da carta 2.

/* Variavel do Menu de Interação */

int opcao1, opcao2; // Variaveis opção para o menor de interação.
double valor1_c1, valor1_c2; // Variaveis para atribuir os valores da opção de atributos celecionada pelo usuario.
double valor2_c1, valor2_c2; // Variaveis para atribuir os valores da opção de atributos celecionada pelo usuario.
double soma1, soma2; // variavies para soma dos 2 atributos escolhido pelo usuario para comparação.
char *nomeAtributo1; // variavel para atribuir o nome do atributo escolhido para comparação.
char *nomeAtributo2; // variavel para atribuir o nome do atributo escolhido para comparação.

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
// scanf("%f", &areakm2_1); // Leitura do que o usuario inseriu na Tela (A area da Cidade).

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
// scanf("%f", &areakm2_2); // Leitura do que o usuario inseriu na Tela (A area da Cidade).

// printf("Informe o PIB da Cidade: "); // Necessario para que o usuario informe o PIB da Cidade da Carta 2.
// scanf("%f", &pib2); // Leitura do que o usuario inseriu na Tela (O PIB).

// printf("Informe o Número de Pontos Turisticos da Ciadade: "); // Necessario para que o usuario informe o numero de pontos turisticos da Cidade da Carta 2.
// scanf("%d", &pontos_turisticos2); // Leitura do que o usuario inseriu na Tela (Pontos Turisticos).

/*  CALCÚLOS  */

densidade1 = populacao1 / areakm2_1; // Pega o Valor inserido da População e Area Km² para calcular a densidade da Carta 1.
pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Pega o valor inserido do PIB e multiplica por 1 bilhão divide pelo valor inserido da população para calcular o PIB per Capita da carta 1.

densidade2 = populacao2 / areakm2_2; // Pega o Valor inserido da População e Area Km² para calcular a densidade da Carta 2.
pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Pega o valor inserido do PIB e multiplica por 1 bilhão divide pelo valor inserido da população para calcular o PIB per Capita da carta 2.

/* CALCÚLO DO SUPER PODER */

double superPoder1 = populacao1 + areakm2_1 + (pib1 * 1000000000.0) + pontos_turisticos1 + pibPerCapita1 + (1.0 / densidade1); // calcula o super poder da carta 1.
double superPoder2 = populacao2 + areakm2_2 + (pib2 * 1000000000.0) + pontos_turisticos2 + pibPerCapita2 + (1.0 / densidade2); // calcula o super poder da carta 1.
 
/*=== Saida dos Dados ===*/

printf("\nCarta 1: \n"); // Imprime a informação Carta 1.
printf("País: %s\n", pais1); // Imprime a informação inserida pelo usuario do País da Carta 1.
printf("Estado: %s\n", estado1); // Imprime a informação inserida pelo usuario do estado da Carta 1.
printf("Código: %s\n", codigo_da_carta1); // Imprime a informação inserida pelo usuario do codigo da carta 1.
printf("Nome da Cidade: %s\n", cidade1); // Imprime a informação inserida pelo usuario da cidade da carta1.
printf("População: %lu\n", populacao1); // Imprime a informação inserida pelo usuario da população da carta 1.
printf("Área: %.2f km²\n", areakm2_1); // Imprime a informação inserida pelo usuario da area em km² da carta 1.
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
printf("Área: %.2f km²\n", areakm2_2); // Imprime a informação inserida pelo usuario da area em km² da carta 2.
printf("PIB: %.2f bilhões de reais\n", pib2); // Imprime a informação inserida pelo usuario do pib da carta 2.
printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2); // Imprime a informação inserida pelo usuario do numero de pontos turisticos da carta 2.
printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Imprime o calculo feito para Densidade Populacional da Carta 2.
printf("PIB Per Capita: %.2f Reais\n", pibPerCapita2); // Imprime o calculo feito do PIB Per Capita da Carta 2.
printf("Super Poder: %.2f\n", superPoder2); // Imprime o calculo feito para o Super Poder da Carta 2.

/*==== Menu de Interação ====*/

printf("\n ---- BATALHA DO SUPER TRUNFO ----\n");
printf("\nCartas da Batalha: Carta 1 - País %s VS Carta 2 - País %s\n", pais1, pais2); // Imprime as Cartas e seu País.
printf("### Atributos de comparação ###\n"); // Imprime o texto para um menu mais informativo.
printf("\nESCOLHA O PRIMEIRO ATRIBUTO\n");
printf("\n1. População\n"); // Imprime a 1 opção da comparação, População.
printf("2. Área\n"); // Imprime a 2 opção da comparação, Área.
printf("3. PIB\n"); // Imprime a 3 opção da comparação, PIB.
printf("4. Número de Pontos Turísticos\n"); // Imprime a 4 opção da comparação, Pontos Turísticos.
printf("5. Densidade Demográfica (Menor Vence!)\n"); // Imprime a 5 opção da comparação, Densidade Demográfica.
printf("6. Super Poder\n"); // Imprime a 6 opção, Super Poder.
printf("\nEscolha uma Opção Acima: "); // Imprime o texto para que o usuario escolha uma das opções acima.
scanf("%d", &opcao1); // Lê a opção que o usuario escolheu.

if(opcao1 < 1 || opcao1 > 6){ // Determina se a opção 1 for menor que 1 ou maior que 6, será impresso que a opção é invalida.
    printf("\nOpção Inválida!\n");
    return 0;
}

printf("\nESCOLHA O SEGUNDO ATRIBUTO\n");

// Abaixo só será impresso o que não foi selecionado na escolha do atributo 1.
if(opcao1 != 1) printf("\n1. População\n");
if(opcao1 != 2) printf("2. Área\n");
if(opcao1 != 3) printf("3. PIB\n");
if(opcao1 != 4) printf("4. Número de Pontos Turísticos\n");
if(opcao1 != 5) printf("5. Densidade Demográfica (Menor Vence)\n");
if(opcao1 != 6) printf("6. Super Poder\n");

printf("\nEscolha uma Opção Acima: ");
scanf("%d", &opcao2);

if(opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1){ // Caso o usuario ainda sim digite a opção que não aparece, derá a mensagem opção invalida.
    printf("\nOpção Inválida!\n");
    return 0;
}

/*Estrutura Switch, para comparação da Primeira escolha de atributo do jogador*/

switch(opcao1){
    case 1: // Comparação da População (Maior Vence).
    nomeAtributo1 = "População";
    valor1_c1 = populacao1;
    valor1_c2 = populacao2;
    break;

    case 2: // Comparação da Área (Maior vence)
    nomeAtributo1 = "Área";
    valor1_c1 = areakm2_1;
    valor1_c2 = areakm2_2;
    break;

    case 3: // Comparação do PIB (Maior vence)
    nomeAtributo1 = "PIB";
    valor1_c1 = pib1 * 1000000000.0;
    valor1_c2 = pib2 * 1000000000.0;
    break;

    case 4: // Comparação dos Pontos Turísticos (Maior vence)
    nomeAtributo1 = "Pontos Turísticos";
    valor1_c1 = pontos_turisticos1;
    valor1_c2 = pontos_turisticos2;
    break;

    case 5: // Comparação da Densidade Populacional (Menor vence)
    nomeAtributo1 = "Densidade Populacional";
    valor1_c1 = densidade1;
    valor1_c2 = densidade2;
    break;

    case 6: // 
    nomeAtributo1 = "Super Poder";
    valor1_c1 = superPoder1;
    valor1_c2 = superPoder2;
    break;

    default:
    printf("\nOpção Inválida!\n");
    break;
}

/*Estrutura Switch, para comparação da Primeira escolha de atributo do jogador*/

switch(opcao2){
    case 1: // Comparação da População (Maior Vence).
    nomeAtributo2 = "População";
    valor2_c1 = populacao1;
    valor2_c2 = populacao2;
    break;

    case 2: // Comparação da Área (Maior vence)
    nomeAtributo2 = "Área";
    valor2_c1 = areakm2_1;
    valor2_c2 = areakm2_2;
    break;

    case 3: // Comparação do PIB (Maior vence)
    nomeAtributo2 = "PIB";
    valor2_c1 = pib1 * 1000000000.0;
    valor2_c2 = pib2 * 1000000000.0;
    break;

    case 4: // Comparação dos Pontos Turísticos (Maior vence)
    nomeAtributo2 = "Pontos Turísticos";
    valor2_c1 = pontos_turisticos1;
    valor2_c2 = pontos_turisticos2;
    break;

    case 5: // Comparação da Densidade Populacional (Menor vence)
    nomeAtributo2 = "Densidade Populacional";
    valor2_c1 = densidade1;
    valor2_c2 = densidade2;
    break;

    case 6: // 
    nomeAtributo2 = "Super Poder";
    valor2_c1 = superPoder1;
    valor2_c2 = superPoder2;
    break;

    default:
    printf("\nOpção Inválida!\n");
    break;
}

    printf("\n****** RESULTADO ******\n");

    printf("\nCarta 1 País: %s Estado: %s Cidade: %s\n", pais1, estado1, cidade1);
    printf("Carta 2 País: %s Estado: %s Cidade: %s\n", pais2, estado2, cidade2);
    printf("\nAtributos Comparados: %s e %s\n", nomeAtributo1, nomeAtributo2);
    printf("\n%s:\n", nomeAtributo1);

    if(opcao1 == 3){
        printf("Carta 1: %.2f Bilhões\n", valor1_c1 / 1000000000.0);
        printf("Carta 2: %.2f Bilhões\n", valor1_c2 / 1000000000.0);
    }else if(opcao1 == 5){
        printf("Carta 1: %.2f hab/km²\n", densidade1);
        printf("Carta 2: %.2f hab/km²\n", densidade2);
    }else{
        printf("Carta 1: %.2f\n", valor1_c1);
        printf("Carta 2: %.2f\n", valor1_c2);
    }

    printf("\n%s:\n", nomeAtributo2);

   if(opcao2 == 3){
        printf("Carta 1: %.2f Bilhões\n", valor2_c1 / 1000000000.0);
        printf("Carta 2: %.2f Bilhões\n", valor2_c2 / 1000000000.0);
    }else if(opcao2 == 5){
        printf("Carta 1: %.2f hab/km²\n", densidade1);
        printf("Carta 2: %.2f hab/km²\n", densidade2);
    }else{
        printf("Carta 1: %.2f\n", valor2_c1);
        printf("Carta 2: %.2f\n", valor2_c2);
    }

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos Atributos da Carta 1: %.2f\n", soma1);
    printf("Soma dos Atributos da Carta 2: %.2f\n", soma2);

    printf("\nResultado Final:\n");

    if(soma1 > soma2){
        printf("Carta 1 Venceu!\n");
    }else if(soma2 > soma1){
        printf("Carta 2 Venceu!\n");
    }else{
        printf("Empate!\n");
    }

return 0;

}