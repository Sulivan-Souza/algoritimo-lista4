#include<stdio.h>
#include<string.h>

using namespace std;

int main()

{
        char n[20];
        float sa = 0,  novosal = 0;


        printf(" Digite o nome do jogador : \n" );
        scanf ("%s", &n);
        printf("Digite o salario: \n");
        scanf("%f" ,  &sa);

        if (sa <= 1000) {
            novosal = sa * 1.20 ;
            }
                if  (10001 <= sa<= 5000 ) {
                novosal = sa * 1.10 ;
            }
            else { novosal = sa;
            }
            printf (" Parabens %s seu salario atual  R$%.2f e foi reajustado para R$%.2f " ,n,sa,novosal);

    return 0;
}
