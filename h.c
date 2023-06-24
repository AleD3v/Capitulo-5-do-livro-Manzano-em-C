/*Escrever um programa que apresente como resultado a
potência de uma base qualquer elevada a um expoente
qualquer, ou seja, de BE, em que B é o valor da base e E o
valor do expoente. Considere apenas a entrada de valores
inteiros e positivos, ou seja, de valores naturais. Sugestão:
não utilize o formato “base ↑ expoente”, pois é uma solução
muito trivial. Use a técnica de laço, em que o valor da base
deve ser multiplicado o número de vezes determinado no
expoente.*/

#include <stdio.h>

int main(){

    
    int base, ex;
    char op = 's';

    while(op == 's'){
        
        int resultado = 1;

        printf("Digite um valor para a base: \n");
        scanf("%d", &base);

        printf("Digite um valor para o expoente: \n");
        scanf("%d", &ex);

        for(int i = 1; i <= ex; i++){

            resultado *= base;
        }
        printf("O resultado de %d elevado à %d é: %d \n", base, ex, resultado);
        printf("Deseja refazer o cálculo? s/n: \n");
        scanf(" %c", &op);
    }
    

}