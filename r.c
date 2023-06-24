/*Elaborar um programa que leia valores positivos inteiros até
que um valor negativo seja informado. Ao final devem ser
apresentados o maior e o menor valores informados pelo
usuário.*/

#include <stdio.h>

int main(){

    int maior, menor, a, start = 1;

    printf("Digite valores para o cálculo(para parar, digite um valor negativo): \n");

    while (1)
    {
        scanf("%d", &a);

        if(a<0){
            break;
        }

        if(start == 1){

            maior = a;
            menor = a;
            start++;
    
        }
        if(a > maior){

            maior = a;
        }
        if(a < menor){

            menor = a;
        }
    }
    printf("Maior: %d \n", maior);
    printf("Menor: %d \n", menor);
    
}