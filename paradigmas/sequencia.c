#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int cont = 0, cont2 = 0, num1 = 0, num2 = 0;

  printf("\n\n Informe o primeiro número do intervalo: ");
  scanf("%d", &num1);

  printf("\n\n Informe o segundo número do intervalo: ");
  scanf("%d", &num2);

  if (num1 < num2)
  {
    printf("\n\n Sequência em ordem crescente: \n");
    for (cont = num1; cont <= num2;)
    {
      for (cont2 = 1; ((cont2 <= 10) && (cont <= num2)); cont2++)
      {
        printf("%d - ", cont);
        cont++;
      }
      printf("\n");
    }
    printf("\n\n Sequência em ordem decrescente: \n");
    for (cont = num2; cont >= num1;)
    {
      for (cont2 = 1; ((cont2 <= 10) && (cont >= num1)); cont2++)
      {
        printf("%d - ", cont);
        cont--;
      }
      printf("\n");
    }
  }
  else
  {
    printf("\n\n Sequência em ordem crescente:\n");
    for (cont = num2; cont <= num1;)
    {
      for (cont2 = 1; ((cont2 <= 10) && (cont <= num1)); cont2++)
      {
        printf("%d - ", cont);
        cont++;
      }
      printf("\n");
    }
    printf("\n\n Sequência em ordem decrescente:\n");
    for (cont = num1; cont >= num2;)
    {
      for (cont2 = 1; ((cont2 <= 10) && (cont >= num2)); cont2++)
      {
        printf("%d - ", cont);
        cont--;
      }
      printf("\n");
    }
  }

  printf("\n\n Obrigado por usar o nosso sistema!!");

  fflush(stdin);

  return 0;
}