#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int cont = 0, num = 0;

  for (num = 1; num <= 100;)
  {
    for (cont = 1; cont <= 10; cont++)
    {
      if (num == 100)
      {
        printf("%d ", num);
        num++;
      }
      else
      {
        printf("%d - ", num);
        num++;
      }
    }
    printf("\n");
  }
  printf("\n\n obrigado por usar nosso sistema!!!");
  fflush(stdin);
  return 0;
}