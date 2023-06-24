/*Elaborar um programa que leia dez valores numéricos reais
e apresente no final o somatório e a média dos valores lidos.*/

#include <stdio.h>

int main(){

    int somatorio = 0;
    int media, num;
    char op ='s';

    while (op=='s')
    {
        printf("Digite 10 valores: \n");

        for(int i = 1; i <=10; i++){
            scanf("%d", &num);

            somatorio += num;
        }
        media = somatorio/10;
        printf("O somatório dos valores é %d, e a média deles é %d. \n", somatorio, media);

        printf("Deseja refazer o cálculo? s/n: \n");
        scanf(" %c", &op);
    }
    
    

}