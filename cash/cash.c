#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float troco;
    int moedas_usadas = 0;
    do
    {
       troco = get_float("qual o troco? ");
    }
    while (troco <= 0);

    int troco_em_centavos = troco * 100;

    while(troco_em_centavos > 0)
    {
        if (troco_em_centavos >= 25)
        {
            troco_em_centavos -= 25;
        }
        else if (troco_em_centavos >= 10)
        {
            troco_em_centavos -= 10;
        }
        else if ( troco_em_centavos >= 5)
        {
            troco_em_centavos -= 5;
        }
        else
        {
            troco_em_centavos -= 1;
        }

        moedas_usadas++;
    }
        printf("Foram necessárias %i moedas!\n", moedas_usadas);

}