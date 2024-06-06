#include <stdio.h>
#include <cs50.h>

int main  (void)
{
  int n;
  int year = 0;

  n = get_int("Qual a população inicial?\n ");

  do
  {
    int add_pop = n/3 * year;
    int sub_pop = n/4 * year;

    int pop = n + add_pop - sub_pop;

    printf("População atual é: %i \n", pop);

    if (pop > 0)
  {
        year = get_int("Quantos anos vão passar?\n");
  }

  }

  while(n > 0);

}