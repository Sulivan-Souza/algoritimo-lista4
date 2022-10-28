#include <iostream>

using namespace std;

int main()
{
        float p,a,m; // p= peso , a = altura, m=massa


            printf("Digite o peso : \n");
            scanf("%f",  &p);
            printf("Digite a Altura ,use ponto ex. 0.00: \n");
            scanf("%f", &a);
            m = p/ (a * a);
            printf(" massa  %.2f\n", m);

            if (m < 26){
                printf( " Grau de Obesidade :  NORMAL ");

                }else if (26<m<30){
                printf(" Grau de Obesidade :  OBESO");
                } else if(m>30){
                printf (" Grau de Obesidade:  MORBIDO");
                }



    return 0;
}
