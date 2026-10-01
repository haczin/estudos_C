#include <stdio.h>

// Definição de uma struct Aluno
//typedef define um tipo de dado
typedef struct{
	char nome[50];
	char ra[15];
	float nota;
	
	
	
	
}Aluno;

int main(){
	
	Aluno aluno1; // Aluno é a estrutura e aluno1 é a variavel 
	
	
	printf("=============== CADASTRAR ALUNO===============\n");
	
	printf("Nome: ");
	scanf(" %49[^\n]", aluno1.nome); // \n é o enter, ultimo caractere
	
	printf("RA: ");
	scanf("%14s", aluno1.ra);
	
	printf("Nota: ");
	scanf("%f", &aluno1.nota);
	
	printf("\n=============== DADOS DOS ALUNOS ==============");
	printf("\nNome: %s", aluno1.nome);
	printf("\nRA: %s", aluno1.ra);
	printf("\nNota: %.1f", aluno1.nota);
		
		
	Aluno aluno2;
		printf("=============== CADASTRAR ALUNO===============\n");
	
	printf("\nNome: ");
	scanf(" %49[^\n]", aluno2.nome);  // 
	
	printf("\nRA: ");
	scanf("%14s", aluno2.ra);
	
	printf("\nNota: ");
	scanf("%f", &aluno2.nota);
	
	printf("\n=============== DADOS DOS ALUNOS ==============");
	printf("\nNome: %s", aluno2.nome);
	printf("\nRA: %s", aluno2.ra);
	printf("\nNota: %.1f", aluno2.nota);
		
	
	
	
	
	
}
