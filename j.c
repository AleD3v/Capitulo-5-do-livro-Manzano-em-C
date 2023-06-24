/*Elaborar um programa que apresente os valores de
conversão de graus Celsius em graus Fahrenheit, de dez
em dez graus, iniciando a contagem em dez graus Celsius e
finalizando em cem graus Celsius. O programa deve
apresentar os valores das duas temperaturas.*/

#include <stdio.h>

int main(){

    int f;

    for(int c = 10; c <= 100; c += 10){

        f = (c*9/5) + 32;
        printf("A temperatura %dºC em Fahrenheit é: %dºF \n", c, f);
    }

}