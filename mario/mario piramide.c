#include <cs50.h>
#include <stdio.h>

int main (void)
{

 int y;

    do
    {

    y = get_int("qual a altura da pirâmide? ");
    }
    while( y < 1 || y > 8);

    for (int i = 1; i <= y; i++)
    {
        for (int x = y - i; x > 0; x--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf ("#");
        }
         for (int k = 0; k < i; k++)
        {
            printf ("#");
        }
        printf("\n");
    }


}