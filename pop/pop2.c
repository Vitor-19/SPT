#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float pop_i, pop_f;
    int years = 0;

    pop_i = get_float("Qual a população inicial?\n");
    pop_f = get_float("Qual a população final?\n");

    if (pop_i != pop_f)
    {
        do
        {
            float add_pop = pop_i / 3.0;
            float sub_pop = pop_i / 4.0;
            pop_i = pop_i + add_pop - sub_pop;
            years++;
        }
        while (pop_i < pop_f);
    }
    printf("Foram necessários: %i anos para atingir essa população\n", years);

    return 0;
}
