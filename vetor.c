#include <stdio.h>
#include <stdbool.h>
int main()
{
    int vetor[5] = {10,20,30,40,50};
    bool valorEncontrado = false;
    int valorPesquisado;
    printf("Digite o valor que deseja pesquiar: ");
    scanf("%d",&valorPesquisado);
    

    //procurando o valor pesquisado no vetor 
    for(int i=0;i<5;i++){  
        printf("\nRodando o for %d vezes", i); 
        if(valorPesquisado == vetor[i]){
            printf("\nValor %d encontrado no índice %d",vetor[i],i);
            valorEncontrado = true;
            break;


        } 

    }   

   if(valorEncontrado == false){
    printf("\nO valor não foi encontrado");

   }
    


}
