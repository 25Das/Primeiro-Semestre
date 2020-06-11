#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  int num = 1, a = 1, b = 5, cont = 1;

  printf("\n\n Exemplo de estruturas de repetição sem laço!!");

  printf("\n\n 1 - 2 - 3 - 4 ..... - 1000 ");

  printf("\n\n Exemplo de estruturas de repetição laço do..while!! \n\n");

  do
  {
    printf("%d - ", num);
    num = num + 1;
  } while (num <= 20);

  num = 1;

  printf("\n\n Exemplo de estruturas de repetição laço while!! \n\n");

  while (num <= 20)
  {
    printf("%d - ", num);
    num = num + 1;
  }

  printf("\n\n Exemplo 2 de estruturas de repetição laço while!! \n");

  while (a <= b)
  {
    printf("\n A = %d - B = %d", a, b);
    a = a + 2;
    b++;
  }

  printf("\n\n Exemplo de estruturas de repetição laço for crescente!! \n\n");

  for (cont = 1; cont <= 10; cont++)
  {
    printf("%d - ", cont);
  }

  printf("\n\n Exemplo de estruturas de repetição laço for decrescente!! \n\n");

  for (cont = 10; cont >= 1; cont--)
  {
    printf("%d - ", cont);
  }

  printf("\n\n Obrigado por usar o nosso sistema!!\n\n");

  fflush(stdin);

  return 0;
}