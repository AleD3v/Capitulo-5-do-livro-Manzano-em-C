/*Construir um programa que apresente todos os valores
numéricos divisíveis por 4 e menores que 200. Sugestão: a
variável que controla o contador do laço deve ser iniciada
com valor 1.*/

#include <stdio.h>

int main(){

    for(int i = 0; i <= 200; i += 4){

        printf("%d \n", i);
    }

}