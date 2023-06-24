/*Escrever um programa que calcule e apresente o somatório
do número de grãos de trigo que se pode obter em um
tabuleiro de xadrez, obedecendo à seguinte regra: colocar
um grão de trigo no primeiro quadro, e nos quadros
seguintes, o dobro do quadro anterior. Ou seja, no primeiroquadro coloca-se um grão, no segundo quadro colocam-se
dois grãos (neste momento têm-se três grãos), no terceiro
quadro colocam-se quatro grãos (tendo neste momento sete
grãos), no quarto quadro colocam-se oito grãos (tendo-se,
então, 15 grãos), até atingir o sexagésimo quarto quadro*/

#include <stdio.h>

int main(){

    float somatorio = 0;
    float anterior = 1;

    for(int i = 1; i <= 64; i++){

        somatorio += anterior;
        anterior = anterior*2;
        
    }
    printf("O somatório total é: %.0f \n", somatorio);

}