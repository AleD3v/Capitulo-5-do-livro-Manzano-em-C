/*Elaborar um programa que mostre os resultados da tabuada
de um número qualquer, a qual deve ser apresentada de
acordo com sua forma tradicional.*/

#include <stdio.h>

int main(){

    int valor, resultado;
    char op = 's';

    

    while (op == 's')
    {
        printf("Digite um valor: \n");
        scanf("%d", &valor);

        for(int i = 1; i <= 10;  i++){

            resultado = valor*i;

            printf("%dx%d = %d \n", i, valor, resultado);
        }

        printf("Deseja refazer a tabuada? s/n: \n");
        scanf(" %c", &op);
    }
    

}