#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        int estado; //VARIÁVEL QUE CONTERÁ O ESTADO
        char cod_carta[3]; // VARIÁVEL CÓDIGO DA CARTA
        char nome_cidade[20]; // VARIÁVEL NOME DA CIDADE
        int populacao; // VARIÁVEL POPULAÇÃO
        float area; // VARIÁVEL ÁREA
        float pib; // VARIÁVEL PIB
        int pontos_turisticos; // VARIÁVEL PONTOS TURÍSTICOS

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o Estado: \n");
    scanf ("%d", &estado);

    printf("Digite o Códido da Carta: \n");
    scanf ("%s", &cod_carta);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_cidade);

    printf ("Digite a População: \n");
    scanf ("%d", &populacao);

    printf ("Digite a Área: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite a quantidade de Pontos Turísticos: \n");
    scanf ("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
