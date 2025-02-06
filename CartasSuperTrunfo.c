#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        int codigocidade;
        float populacao, area, pib;
        int pontosturisticos;
        char nome;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("Informe o Código da Cidade: \n");
        scanf("%d", &codigocidade);

        printf("Informe a Populaçâo: \n");
        scanf("%f", &populacao);

        printf("Informe a Área: \n");
        scanf("%f", &area);

        printf("Informe o PIB: \n");
        scanf("%f", &pib);

        printf("Informe o Número de Pontos Turíscos: \n");
        scanf("%d", &pontosturisticos);

        printf("Informe o Nome da Cidade: \n");
        scanf("%s", &nome);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        printf("Nome da Cidade: %s   População: %f");
        printf("PIB: %f    Área: %f ");
        printf("Pontos Turisticos: %d");

    return 0;
}
