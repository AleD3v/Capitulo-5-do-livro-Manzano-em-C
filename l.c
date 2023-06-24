/*Elaborar um programa que leia quinze valores numéricos
inteiros e no final apresente o somatório da fatorial de cada
valor lido.*/

#include <stdio.h>

int main(){

    int somatorio = 0;
    int fatorial;
    char op = 's';

    while(op=='s'){
        printf("Digite 15 valores para fazer o somatorio dos fatoriais: \n");
        for(int i = 1; i <= 15; i++){

            scanf("%d", &fatorial);
            int resposta = 1;

            for(; fatorial >= 1; fatorial--){

                resposta *= fatorial;
            }
            somatorio += resposta;
        }
        printf("O somatório é: %d \n", somatorio);

        printf("Deseja refazer o cálculo? s/n: \n");
        scanf(" %c", &op);
    }

}