
#include <stdio.h>

typedef struct {
    char nome[50];
    char ra[15];
    float notas[5]; // Posições 0, 1, 2, 3 são as notas. A posição 4 guarda a média.
} Aluno;

int main() {
    Aluno aluno1;
    float soma = 0.0;

    printf("\n========= CADASTRAR ALUNO ==========\n");
    printf("Nome: ");
    scanf(" %49[^\n]", aluno1.nome);

    printf("RA: ");
    scanf(" %14s", aluno1.ra);
    
    // 1. Entrada das 4 notas e acúmulo da soma
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &aluno1.notas[i]); // Adicionado &[i]
        soma += aluno1.notas[i];       // Somando nota por nota
    }

    // 2. Cálculo da média guardado no índice 4 (última posição do vetor)
    aluno1.notas[4] = soma / 4.0;

    // 3. Exibição dos dados inseridos
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", aluno1.nome);
    printf("RA: %s\n", aluno1.ra);
    
    printf("Notas: ");
    for (int i = 0; i < 4; i++) {
        printf("[%.1f] ", aluno1.notas[i]);
    }
    
    printf("\nMédia Final: %.2f\n", aluno1.notas[4]);

    return 0;
}

