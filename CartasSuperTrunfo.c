#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao, ptur;
    float area, PIB;
    char codigo[5];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Código da cidade: \n");
    scanf(" %s", &codigo);
    printf("Digite o PIB da cidade em bilhões: \n");
    scanf(" %f", &PIB);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao);
    printf("Digite quantos pontos turísticos a cidade tem: \n");
    scanf(" %d", &ptur);
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCidade %s cadastrada com sucesso!\n\n", codigo);
    printf("  Atributos da carta:\n");
    printf("  População - %d habitantes\n", populacao);
    printf("  PIB - %.2f bilhões\n", PIB);
    printf("  Área - %.2f km²\n", area);
    printf("  Pontos Turísticos - %d\n\n", ptur);

    return 0;
}
