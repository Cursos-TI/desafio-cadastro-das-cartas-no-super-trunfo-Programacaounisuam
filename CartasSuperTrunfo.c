#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char a ; // Letra que representa do estado
char a01 [20] ; // Código do estado
char cidade1 [20]; // Nome da cidade
unsigned long int populacao1 ; // Quantidade da população do estado
float area1 ; // Área da cidade
float pib1 ; // Pib da cidade
int turismo1 ; // Número de ponto turistico
float densidade1 ;
float per1 ;


// Carta 2

char b ; // Letra que representa do estado 2
char a02 [20] ; // Código do estado 2
char cidade2 [20]; // Nome da cidade 2
unsigned long int populacao2 ; // Quantidade da população do estado 2
float area2 ; // Área da cidade 2
float pib2 ; // Pib da cidade 2
int turismo2 ; // Número de ponto turistico 2
float densidade2;
float per2;


//Entradas e saídas com as perguntas e respostas da carta número 1

printf("Digite a letra que representa a cidade \n");
scanf("%c" , &a);

printf("Digite o código da cidade \n");
scanf("%s" , &a01);

printf("Digite o nome da cidade \n");
scanf("%s", &cidade1);

printf("Digite a quantidade populacional da cidade \n");
scanf("%u" , &populacao1);

printf("Digite a área da cidade \n");
scanf("%f" , &area1);

printf("Digite o pib da cidade \n");
scanf("%f" , &pib1);

printf("Digite o número de pontos túristicos da cidade \n");
scanf("%d" , &turismo1);

densidade1 = populacao1/area1; // calculo da densidade da carta 1
per1 = pib1/populacao1; // calculo do pib per capita da carta 1
float superpoder1 = populacao1 + area1 + pib1 + turismo1 - densidade1 + per1; //Super poder

//Entrada e saídas com purguntas e respostas da carta 2

printf("Digite a letra que representa a cidade \n");
scanf("%c" , &b);

printf("Digite o código da cidade \n");
scanf("%s" , &a02);

printf("Digite o nome da cidade \n");
scanf("%s", &cidade2);

printf("Digite a quantidade populacional da cidade \n");
scanf("%u" , &populacao2);

printf("Digite a área da cidade \n");
scanf("%f" , &area2);

printf("Digite o pib da cidade \n");
scanf("%f" , &pib2);

printf("Digite o número de pontos túristicos da cidade \n");
scanf("%d" , &turismo2);

densidade2 = populacao2/area2; //Calcula da densidade carta 2
per2 = pib2/populacao2; // Calculo do PIB per capita carta 2
float superpoder2 = populacao2 + area2 + pib2 + turismo2 - densidade2 + per2; //Super poder

// Impressão das respostas da carta 1
printf("Carta 1\n");
printf("Estado %c \n", a );
printf("Código %s \n", a01 );
printf("Nome da cidade %s \n", cidade1 );
printf("População %d \n", populacao1 );
printf("Área %f \n", area1 );
printf("Pib %f \n", pib1 );
printf("Número de pontos turisticos %d \n", turismo1 );
printf("Densidade populacional %.2f \n", densidade1 );
printf("PIB per capita %.2f \n", per1 );
printf("Super poder %f \n" , superpoder1);





// Impressão das resposta da carta 2
printf("Carta 2\n");
printf("Estado %c \n", b );
printf("Código %s \n", a02 );
printf("Nome da cidade %s \n", cidade2 );
printf("População %d \n", populacao2 );
printf("Área %f \n", area2 );
printf("Pib %f \n", pib2 );
printf("Número de pontos turisticos %d \n", turismo2 );
printf("Densidade populacional %.2f \n", densidade2 );
printf("PIB per capita %.2f \n", per2 );
printf("Super poder %f \n" , superpoder2);

printf("Comparação das cartas \n");;;;;

// Comparação das cartas

if (populacao1 > populacao2 )
{ 
    printf("População: carta 1 venceu \n");
}
else 
{
    printf("População: carta 2 venceu \n");
}

if (area1 > area2 )
{
    printf("Área: carta 1 venceu \n");
}
else 
{
    printf ("Área: carta 2 venceu \n");
}

if (pib1 > pib2)
{
    printf("PIB: carta 1 venceu \n");
}
else 
{
    printf ("PIB: carta 2 venceu \n");
}

if (turismo1 > turismo2 )
{
    printf("Turismo: carta 1 venceu \n");
}
else
 {
    printf ("Turismo: carta 2 venceu \n");
 }

if (densidade1 < densidade2 )
{
    printf("Densidade: carta 1 venceu \n");
}
else 
{
    printf ("Densidade: carta 2 venceu \n");
}

if (per1 > per2 )
{
    printf("Pib per capita: carta 1 venceu \n");
}
else 
{
    printf ("Pib per capita: carta 2 venceu \n");
}

if (superpoder1 > superpoder2 )
{
    printf("Super poder: carta 1 venceu \n");
}
else 
{
    printf("Super poder: carta 2 venceu \n");
}




return 0 ;
}
