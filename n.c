/*Elaborar um programa que leia sucessivamente valores
numéricos e apresente no final o somatório, a média e o
total de valores lidos. O programa deve ler os valores
enquanto o usuário estiver fornecendo valores positivos. Ou
seja, o programa deve parar quando o usuário fornecer um
valor negativo (menor que zero).*/

#include <stdio.h>

int main(){

    int media, num;
    char op ='s';

    while (op=='s')
    {
        int somatorio = 0;
        int qtd = 0;

        printf("Digite valores para o cálculo(digite um número negativo para para): \n");

        while (1)
        {
            scanf("%d", &num);

            if(num<0){
                break;
            }

            somatorio += num;
            qtd++;
        }
        
        if(qtd>0){

            media = somatorio/qtd;

            printf("Foram lidos no total: %d \n", qtd);
            printf("O somatório dos valores é: %d \n", somatorio);
            printf("A média dos valores é: %d \n", media);

        }else{

            printf("Nenhum valor foi inserido. \n");
        }

        printf("Deseja refazer o cálculo? s/n: \n");
        scanf(" %c", &op);

    }
    



}