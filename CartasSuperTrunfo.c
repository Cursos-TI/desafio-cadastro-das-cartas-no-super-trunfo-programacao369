#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 5  // Número fixo de cartas já cadastradas

// Estrutura para armazenar as cartas
typedef struct {
    char nome[50];
    int populacao;     // Em milhões
    float area;        // Em km²
    float pib_per_capita; // Em dólares
} Carta;

int main() {
    // Cartas já cadastradas
    Carta cartas[MAX_CARTAS] = {
        {"Brasil", 213, 8515767, 6890.0},
        {"Estados Unidos", 331, 9834000, 63543.0},
        {"China", 1441, 9597000, 12151.0},
        {"Alemanha", 83, 357022, 46212.0},
        {"Japão", 125, 377975, 40988.0}
    };

    // Exibir as cartas cadastradas
    printf("\n=== Cartas Super Trunfo - Países ===\n");
    for (int i = 0; i < MAX_CARTAS; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %d milhões\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB per capita: %.2f dólares\n", cartas[i].pib_per_capita);
        printf("---------------------------\n");
    }

    return 0;
}
