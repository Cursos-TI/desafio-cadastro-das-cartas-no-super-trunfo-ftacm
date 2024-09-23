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
    // Solicita o código da cidade
    printf("Digite o Código da cidade: \n");
    // Lê o código da cidade
    scanf(" %s", &codigo);
    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade em bilhões: \n");
    // Lê o PIB da cidade
    scanf(" %f", &PIB);
    // Solicita a população da cidade
    printf("Digite a população da cidade: \n");
    // Lê a população da cidade
    scanf(" %d", &populacao);
    // Solicita os pontos turísticos da cidade
    printf("Digite quantos pontos turísticos a cidade tem: \n");
    // Lê os pontos turísticos da cidade
    scanf(" %d", &ptur);
    // Solicita a área da cidade
    printf("Digite a área da cidade em km²: \n");
    // Lê a área da cidade
    scanf(" %f", &area);

    // Cálculo das propriedades extras:
    // Calcula o PIB per capita transformando o PIB em bilhões, dividindo pela populaçao e armazenando na variável capita
    float capita = PIB*1000000000/populacao;
    // Calcula a densidade dividindo a população pela área e armazenando na variável densidade
    float densidade = populacao/area;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibe todos os valores cadastrados nas variáveis da carta
    printf("\nCidade %s cadastrada com sucesso!\n\n", codigo);
    printf("  Atributos da carta:\n");
    printf("  População - %d habitantes\n", populacao);
    printf("  PIB - %.2f bilhões\n", PIB);
    printf("  Área - %.2f km²\n", area);
    printf("  PIB per capita - %.2f \n", capita);
    printf("  Densidade Populacional - %.2f hab/km²\n", densidade);
    printf("  Pontos Turísticos - %d\n\n", ptur);

    return 0;
}
