/*Escrever um programa que possibilite calcular a área total
em metros de uma residência com os cômodos sala,
cozinha, banheiro, dois quartos, área de serviço, quintal,
garagem, entre outros que podem ser fornecidos ao
programa. O programa deve solicitar a entrada do nome, da
largura e do comprimento de um determinado cômodo. Em
seguida, deve apresentar a área do cômodo lido e também
uma mensagem solicitando ao usuário a confirmação decontinuar calculando novos cômodos. Caso o usuário
responda “NÃO”, o programa deve apresentar o valor total
acumulado da área residencial.*/

#include <stdio.h>

int main(){

    char op = 's';
    int somatorio = 0;

    while (op=='s')
    {
        char name[100];
        int l, c, a;

        printf("Digite o nome do cômodo: \n");
        scanf("%s", name);

        printf("Digite a largura(l) do cômodo: \n");
        scanf("%d", &l);

        printf("Digite o comprimento(c) do cômodo: \n");
        scanf("%d", &c);

        a = l*c;
        somatorio += a;

        printf("O cômodo %s tem uma área de: %d. \n", name, a);

        printf("Dejesa continuar calculando outros cômodos? s/n: \n");
        scanf(" %c", &op);

    }

    printf("A área residêncial total é: %d. \n", somatorio);
    
    
}