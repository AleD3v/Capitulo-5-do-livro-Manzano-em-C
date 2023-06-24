/*Elaborar um programa que apresente os quadrados sem
armazená-los na memória dos valores inteiros existentes na
faixa de valores de 15 a 200 com saltos de 3 em 3.*/

#include <stdio.h>

int main(){

    for(int i = 15; i <= 200; i += 3){
        
        int q = i*i;
        printf("%d \n", q);
    }
}