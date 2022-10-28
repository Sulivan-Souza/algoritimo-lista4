#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
        int codconsum;
        float preco, quantidade, total;

        printf("digite o codigo do consumidor : ");
        scanf( " %d ",  &codconsum);
        printf("digite o preco do kw : ");
        scanf("%f",  &preco);
        printf("digite a quantidade : ");
        scanf("%f",  &quantidade);
        total = preco * quantidade;
        if (total <= 11.20){
            printf( " O valor da conta  de codigo %d  = R$ 11,20" , codconsum);
        }
        else {
            printf(" O valor da conta  de codigo  %d  = R$ %.2f " , codconsum, total);
        }


    return 0;
}
