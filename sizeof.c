#include <stdio.h>

int main() {
    int vetor[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    int elementoProcurado;
    printf("******** BUSCA BINARIA *********");
    printf("\nDigite o valor que deseja procurar: ");
    scanf("%d",&elementoProcurado);

    int inicio = 0;
    int fim = tamanho - 1;
    int indiceEncontrado = -1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == elementoProcurado) {
            indiceEncontrado = meio;
            break;
        }

        if (vetor[meio] < elementoProcurado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (indiceEncontrado != -1) {
        printf("Elemento %d encontrado no indice %d.\n", elementoProcurado, indiceEncontrado);
    } else {
        printf("Elemento %d nao foi encontrado no vetor.\n", elementoProcurado);
    }

}

