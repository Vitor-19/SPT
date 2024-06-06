#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y;

    do
    {
        y = get_int("Qual é a altura (max 8, min 1): ");
    }
    while (y < 1 || y > 8);

    for (int i = 1; i <= y; i++)
    {
        for (int j = y - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
