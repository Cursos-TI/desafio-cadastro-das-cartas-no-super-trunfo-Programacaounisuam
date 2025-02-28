#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

char a; // Letra que representa o estado
char a01[20]; // Código do estado
char cidade1[20]; // Nome da cidade
unsigned long int populacao1; // Quantidade da população do estado
float area1; // Área da cidade
float pib1; // Pib da cidade
int turismo1; // Número de pontos turísticos
float densidade1;
float per1;

// Carta 2

char b; // Letra que representa o estado 2
char a02[20]; // Código do estado 2
char cidade2[20]; // Nome da cidade 2
unsigned long int populacao2; // Quantidade da população do estado 2
float area2; // Área da cidade 2
float pib2; // Pib da cidade 2
int turismo2; // Número de pontos turísticos 2
float densidade2;
float per2;

// Entradas e saídas com as perguntas e respostas da carta número 1

printf("Digite a letra que representa o estado: \n");
scanf(" %c", &a);

printf("Digite o código do estado: \n");
scanf("%s", a01);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade1);

printf("Digite a quantidade populacional da cidade: \n");
scanf("%lu", &populacao1);

printf("Digite a área da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &turismo1);

densidade1 = populacao1 / area1; // Cálculo da densidade da carta 1
per1 = pib1 / populacao1; // Cálculo do PIB per capita da carta 1
float superpoder1 = populacao1 + area1 + pib1 + turismo1 - densidade1 + per1; // Super poder

// Entradas e saídas com perguntas e respostas da carta 2

printf("Digite a letra que representa o estado: \n");
scanf(" %c", &b);

printf("Digite o código do estado: \n");
scanf("%s", a02);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade2);

printf("Digite a quantidade populacional da cidade: \n");
scanf("%lu", &populacao2);

printf("Digite a área da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &turismo2);

densidade2 = populacao2 / area2; // Cálculo da densidade da carta 2
per2 = pib2 / populacao2; // Cálculo do PIB per capita da carta 2
float superpoder2 = populacao2 + area2 + pib2 + turismo2 - densidade2 + per2; // Super poder

// Impressão das respostas da carta 1
printf("Carta 1\n");
printf("Estado %c\n", a);
printf("Código %s\n", a01);
printf("Nome da cidade %s\n", cidade1);
printf("População %lu\n", populacao1);
printf("Área %.2f\n", area1);
printf("PIB %.2f\n", pib1);
printf("Número de pontos turísticos %d\n", turismo1);
printf("Densidade populacional %.2f\n", densidade1);
printf("PIB per capita %.2f\n", per1);
printf("Super poder %.2f\n", superpoder1);

// Impressão das respostas da carta 2
printf("Carta 2\n");
printf("Estado %c\n", b);
printf("Código %s\n", a02);
printf("Nome da cidade %s\n", cidade2);
printf("População %lu\n", populacao2);
printf("Área %.2f\n", area2);
printf("PIB %.2f\n", pib2);
printf("Número de pontos turísticos %d\n", turismo2);
printf("Densidade populacional %.2f\n", densidade2);
printf("PIB per capita %.2f\n", per2);
printf("Super poder %.2f\n", superpoder2);

// Jogo de comparação
int resultado1, resultado2;
char menu, menu2;

// Váriaveis da soma das cartas para comparação final
unsigned long int somapopulacao; 
float somaarea, somapib, somadensidade, somaper, somasuperpoder;
int somaturismo; 

// Váriaveis da soma das cartas 2 para comparação final

unsigned long int somapopulacao2; 
float somaarea2, somapib2, somadensidade2, somaper2, somasuperpoder2;
int somaturismo2; 

printf("Bem-vindo ao jogo super trunfo\n");
printf("Escolha um dos atributos que deseja comparar \n");
printf("Digite 'P' para população \n");
printf("Digite 'A' para área \n");
printf("Digite 'B' para PIB \n");
printf("Digite 'T' para turismo \n");
printf("Digite 'D' para densidade \n");
printf("Digite 'R' para PIB per capita \n");
printf("Digite 'S' para super poder \n");

printf("Escolha o atributo a ser comparado: \n");
scanf(" %c", &menu);

switch (menu)
{
case 'P':
case 'p':
    printf("Você escolheu para comparar o atributo: População\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    printf("Carta 1 - %s, %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s, %lu\n", cidade2, populacao2);

    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somapopulacao = populacao1 + populacao2;

    break;

case 'A':
case 'a':
    printf("Você escolheu para comparar o atributo: Área\n");
    resultado1 = area1 > area2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, area1);
    printf("Carta 2 - %s, %.2f\n", cidade2, area2);
    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somaarea = area1 + area2;

    break;

case 'B':
case 'b':
    printf("Você escolheu para comparar o atributo: PIB\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, pib1);
    printf("Carta 2 - %s, %.2f\n", cidade2, pib2);
    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somapib = pib1 + pib2;

    break;

case 'T':
case 't':
    printf("Você escolheu para comparar o atributo: Turismo\n");
    resultado1 = turismo1 > turismo2 ? 1 : 0;
    printf("Carta 1 - %s, %d\n", cidade1, turismo1);
    printf("Carta 2 - %s, %d\n", cidade2, turismo2);
    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somaturismo = turismo1 + turismo2;

    break;

case 'D':
case 'd':
    printf("Você escolheu para comparar o atributo: Densidade\n");
    resultado1 = densidade1 < densidade2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, densidade1);
    printf("Carta 2 - %s, %.2f\n", cidade2, densidade2);
    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somadensidade = densidade1 + densidade2;

    break;

case 'R':
case 'r':
    printf("Você escolheu para comparar o atributo: PIB per capita\n");
    resultado1 = per1 > per2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, per1);
    printf("Carta 2 - %s, %.2f\n", cidade2, per2);
    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somaper = per1 + per2;

    break;

case 'S':
case 's':
    printf("Você escolheu para comparar o atributo: Super poder\n");
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, superpoder1);
    printf("Carta 2 - %s, %.2f\n", cidade2, superpoder2);
    if (resultado1 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somasuperpoder = superpoder1 + superpoder2;
    break;

default:
    printf("Atributo inválido.\n");
    break;
}


printf("Escolha o segundo atributo que deseja comparar \n");
printf("Digite 'P' para população \n");
printf("Digite 'A' para área \n");
printf("Digite 'B' para PIB \n");
printf("Digite 'T' para turismo \n");
printf("Digite 'D' para densidade \n");
printf("Digite 'R' para PIB per capita \n");
printf("Digite 'S' para super poder \n");

printf("Escolha o atributo a ser comparado: \n");
scanf(" %c", &menu2);

if(menu2 == menu){
    printf("Opção invalida, você escolheu o mesmo atributo ");
} else {

switch (menu2)
{
case 'P':
case 'p':
    printf("Você escolheu para comparar o atributo: População\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    printf("Carta 1 - %s, %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s, %lu\n", cidade2, populacao2);

    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }
    somapopulacao2 = populacao1 + populacao2;

    break;

case 'A':
case 'a':
    printf("Você escolheu para comparar o atributo: Área\n");
    resultado2 = area1 > area2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, area1);
    printf("Carta 2 - %s, %.2f\n", cidade2, area2);
    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }
    somaarea2 = area1 + area2;

    break;

case 'B':
case 'b':
    printf("Você escolheu para comparar o atributo: PIB\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, pib1);
    printf("Carta 2 - %s, %.2f\n", cidade2, pib2);
    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }
    somapib2 = pib1 + pib2;

    break;

case 'T':
case 't':
    printf("Você escolheu para comparar o atributo: Turismo\n");
    resultado2 = turismo1 > turismo2 ? 1 : 0;
    printf("Carta 1 - %s, %d\n", cidade1, turismo1);
    printf("Carta 2 - %s, %d\n", cidade2, turismo2);
    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somaturismo2 = turismo1 + turismo2;

    break;

case 'D':
case 'd':
    printf("Você escolheu para comparar o atributo: Densidade\n");
    resultado2 = densidade1 < densidade2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, densidade1);
    printf("Carta 2 - %s, %.2f\n", cidade2, densidade2);
    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somadensidade2 = densidade1 + densidade2;

    break;

case 'R':
case 'r':
    printf("Você escolheu para comparar o atributo: PIB per capita\n");
    resultado2 = per1 > per2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, per1);
    printf("Carta 2 - %s, %.2f\n", cidade2, per2);
    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somaper2 = per1 + per2;

    break;

case 'S':
case 's':
    printf("Você escolheu para comparar o atributo: Super poder\n");
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Carta 1 - %s, %.2f\n", cidade1, superpoder1);
    printf("Carta 2 - %s, %.2f\n", cidade2, superpoder2);
    if (resultado2 == 1) {
        printf("Carta 1 venceu - %s\n", cidade1);
    } else {
        printf("Carta 2 venceu - %s\n", cidade2);
    }

    somasuperpoder2 = superpoder1 + superpoder2;

    break;

default:
    printf("Atributo inválido.\n");
    break;
}
}


return 0;
}
