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
    
    int populacao1 ; // Quantidade da população do estado
    
    float area1 ; // Área da cidade
    
    float pib1 ; // Pib da cidade
    
    int turismo1 ; // Número de ponto turistico
    
    char b ; // Letra que representa do estado 2
    
    char a02 [20] ; // Código do estado 2
    
    char cidade2 [20]; // Nome da cidade 2
    
    int populacao2 ; // Quantidade da população do estado 2
    
    float area2 ; // Área da cidade 2
    
    float pib2 ; // Pib da cidade 2
    
    int turismo2 ; // Número de ponto turistico 2
    
    
    //Entradas e saídas com as perguntas e respostas da carta número 1
    
    printf("Digite a letra que representa a cidade \n");
    scanf("%c" , &a);
    
    printf("Digite o código da cidade \n");
    scanf("%s" , &a01);
    
    printf("Digite o nome da cidade \n");
    scanf("%s", &cidade1);
    
    printf("Digite a quantidade populacional da cidade \n");
    scanf("%d" , &populacao1);
    
    printf("Digite a área da cidade \n");
    scanf("%f" , &area1);
    
    printf("Digite o pib da cidade \n");
    scanf("%f" , &pib1);
    
    printf("Digite o número de pontos túristicos da cidade \n");
    scanf("%d" , &turismo1);
    
    //Entrada e saídas com purguntas e respostas da carta 2
    
    printf("Digite a letra que representa a cidade \n");
    scanf("%c" , &b);
    
    printf("Digite o código da cidade \n");
    scanf("%s" , &a02);
    
    printf("Digite o nome da cidade \n");
    scanf("%s", &cidade2);
    
    printf("Digite a quantidade populacional da cidade \n");
    scanf("%d" , &populacao2);
    
    printf("Digite a área da cidade \n");
    scanf("%f" , &area2);
    
    printf("Digite o pib da cidade \n");
    scanf("%f" , &pib2);
    
    printf("Digite o número de pontos túristicos da cidade \n");
    scanf("%d" , &turismo2);
    
    // Impressão das respostas da carta 1
    printf("Carta 1\n");
    printf("Estado %c \n", a );
    printf("Código %s \n", a01 );
    printf("Nome da cidade %s \n", cidade1 );
    printf("População %d \n", populacao1 );
    printf("Área %f \n", area1 );
    printf("Pib %f \n", pib1 );
    printf("Número de pontos turisticos %d \n", turismo1 );
    
    
    // Impressão das resposta da carta 2
    printf("Carta 2\n");
    printf("Estado %c \n", b );
    printf("Código %s \n", a02 );
    printf("Nome da cidade %s \n", cidade2 );
    printf("População %d \n", populacao2 );
    printf("Área %f \n", area2 );
    printf("Pib %f \n", pib2 );
    printf("Número de pontos turisticos %d \n", turismo2 );
    
    return 0;
    
    return 0;
}
