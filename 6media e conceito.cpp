#include <iostream>
#include <stdio.h>



using namespace std;

    int main() {

        float nota1,nota2,nota3,media;

        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota:\n");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3) /3;
        printf ("Sua Media Final foi, :  %.2f \n " , media);


            if  (media >= 8 && media <= 10 ){
                printf("  Conceito :  A \n   PARABENS OTIMO ALUNO");
                } else
                    if  ( media >=5 && media < 8){
                    printf(" Conceito : B \n  Continue assim");
                } else
                    printf("Conceito : C  \n   Precisa se esforcar mais  ");

        return 0;
}
