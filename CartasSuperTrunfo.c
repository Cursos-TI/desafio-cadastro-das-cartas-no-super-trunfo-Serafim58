#include <stdio.h>
#include <string.h>

int main() {
    printf("Cartas Super Trunfo");
    printf("Novo commit\n");
    struct Carta {
        char estado;
        char codigo[4];
        char nomeCidade[50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
    };

    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("\nCadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado); // Espaço em branco importante
    getchar(); // Limpa o buffer do teclado

    printf("Código (ex: A01):");
    scanf(" %s", carta1.codigo ); // Espaço em branco importante
    getchar(); // Limpa o buffer do teclado

    printf("Nome da Cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0; // Remove a quebra de linha

    printf("População: ");
    scanf("%d", &carta1.populacao);
    getchar(); // Limpa o buffer do teclado

    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    getchar(); // Limpa o buffer do teclado

    printf("PIB: ");
    scanf("%f", &carta1.pib);
    getchar(); // Limpa o buffer do teclado

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    getchar(); // Limpa o buffer do teclado


    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado); // Espaço em branco importante
    getchar(); // Limpa o buffer do teclado

    printf("Código (ex: B01): ");
    scanf(" %s", carta2.codigo); // Espaço em branco importante
    getchar(); // Limpa o buffer do teclado

    printf("Nome da Cidade: ");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = 0; // Remove a quebra de linha

    printf("População: ");
    scanf("%d", &carta2.populacao);
    getchar(); // Limpa o buffer do teclado

    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    getchar(); // Limpa o buffer do teclado

    printf("PIB: ");
    scanf("%f", &carta2.pib);
    getchar(); // Limpa o buffer do teclado

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    getchar(); // Limpa o buffer do teclado

    // Exibição das cartas (sem alterações)
    // ...

    return 0;

    
    }
