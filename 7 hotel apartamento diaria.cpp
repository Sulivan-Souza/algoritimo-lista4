#include <ctype.h>
#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
        int c;
        char  nome[20], tipo;
        float    vl_uni, vl_tot, vl_sub, vl_ger, cons,diarias,taxa;

        printf(" Hotel Lunar\n");
        printf(" Nome do hospede : \n");
        scanf(" %s", &nome);
        printf(" Tipo de Apartamento: (a/b/c/d): \n");
        scanf(" %c", &tipo);
        printf(" Quantidade de Diarias :\n");
        scanf(" %f", &diarias);
        printf(" Valor do Consumo interno: \n ");
        scanf(" %f", &cons);

        switch(tipo) {
        case 'a' :  vl_uni = 150;
        break;

        case 'b' : vl_uni = 100;
        break;

        case 'c' : vl_uni = 75;
        break;

        case 'd' : vl_uni =50;
        break;

        }

        printf(" %s, Voce escolheu o Apartamento do Tipo : ( %c) \n ", nome, tipo);
        printf(" Se hospedou por : (%.0f) dias, \n Com valor diario:  %.2f \n" , diarias,  vl_uni);
        vl_tot = vl_uni * diarias;
       printf(" Valor Total das diarias: %.2f \n", vl_tot );
       printf(" Valor do Consumo: = %.2f  \n", cons);
       vl_sub = vl_tot + cons;
       printf(" Sub total: = %.2f\n", vl_sub );
       taxa = vl_sub * 0.10;
       printf(" Taxa de servico: = %.2f\n", taxa);
       vl_ger = vl_sub + taxa;
       printf(" Valor Total : = %.2f\n", vl_ger) ;

    return 0;
}
