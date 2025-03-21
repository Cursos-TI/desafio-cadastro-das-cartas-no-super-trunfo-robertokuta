#include <stdio.h>
#include <stdlib.h>  
#include <string.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        char estado[5];   //VARIÁVEL QUE CONTERÁ O ESTADO
        char cod_carta[10];  // VARIÁVEL CÓDIGO DA CARTA
        char nome_cidade[20]; // VARIÁVEL NOME DA CIDADE
        int populacao;  // VARIÁVEL POPULAÇÃO
        float area;  // VARIÁVEL ÁREA
        float pib;  // VARIÁVEL PIB
        int pontos_turisticos;  // VARIÁVEL PONTOS TURÍSTICOS

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o Códido da Carta:\n"); // EXIBE NA TELA 'CÓDIGO DA CARTA'
    scanf ("%s", &cod_carta); // CAPTURA INFORMAÇAO P/ VARIÁVEL 'COD_CARTA'

    printf("Digite o Estado: \n"); //EXIBE NA TELA 'DIGITE ESTADO
    scanf ("%s", &estado); //CAPTURA INFORMAÇÃO P/ VARIÁVEL 'INT ESTADO'
   
    printf ("Digite o nome da cidade:\n"); // EXIBE NA TELA 'NOME DA CIDADE'
    scanf ("%s", &nome_cidade); // CAPTURA INFORMAÇÃO P/ VARIAVEL 'NOME_CIDADE'

    printf ("Digite a População: \n"); //EXIBE NA TELA 'POPULAÇÃO'
    scanf ("%d", &populacao); //CAPTURA VARIÁVEL POPULAÇAO

    printf ("Digite a Área: \n"); //EXIBE NA TELA 'DIGITE A ÁREA'
    scanf ("%f", &area); // CAPTURA VARIÁVEL 'AREA''

    printf ("Digite o PIB: \n"); //EXIBE NA TELA 'DIGITE O PIB'
    scanf ("%f", &pib); //CAPTURA VARIÁVEL 'PIB'

    printf ("Digite a quantidade de Pontos Turísticos: \n"); // EXIBE NA TELA 'QUANTIDADE DE PONTOS TURISTICOS'
    scanf ("%d", &pontos_turisticos); // CAPUTRA VARIÁVEL 'PONTOS_TURISTICOS'
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição das variáveis após as captura:

    printf ("Código: %c \n", cod_carta); //EXIBE CÓDIGO CARTA
    printf ("Estado: %c \n", estado); //EXIBE ESTADO
    printf ("Cidade: %c \n", nome_cidade); //EXIBE NOME CIDADE
    printf ("População: %d \n", populacao); //EXIBE POPULAÇÃO
    printf ("Área: %f \n", area); //EXIBE ÁREA
    printf ("PIB: %f \n", pib); //EXIBE PIB
    printf ("Pontos Túristicos: %d \n", pontos_turisticos); //EXIBE PONTOS TÚRISTICOS

    system("pause"); 
    return 0;
}
