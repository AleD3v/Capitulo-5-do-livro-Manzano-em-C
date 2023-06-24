/*Construir um programa que apresente a soma dos cem
primeiros números naturais (1 + 2 + 3 +...+ 98 + 99 + 100).*/

#include <stdio.h>

int main(){

    int somatorio = 0;

    for(int i = 1; i <= 100; i++)
    {
        somatorio += i;

    }
    printf("O somatório dos cem primeiros números é: %d \n", somatorio);

}