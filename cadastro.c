#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;


};

int main()
{
    struct Pessoa pessoa[4];

    printf("----------- CADASTRO DE PESSOA -----------------\n");
    for(int i=0;i<4;i++){
        printf("---------- Pessoa %i -------------\n",i+1);
    printf("Nome: ");
    scanf(" %[^\n]",pessoa[i].nome);

    printf("Idade: ");
    scanf("%d",&pessoa[i].idade);
    

    printf("altura: ");
    scanf("%d",&pessoa[i].altura);
    }
    for(int i =0;i<4;i++){
    printf("\n------- DADOS CADASTRADOS --------\n");
    printf("\nNome: %s\n",pessoa[i].nome);
    printf("\nIdade: %d\n",pessoa[i].idade);
    printf("\nAltura: %f\n",pessoa[i].altura);
    }
}

 

