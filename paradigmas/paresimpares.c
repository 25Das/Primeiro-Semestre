#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num = 0, contpar = 0, contimpar = 0, continua = 1;

  printf("\n\n Teste de par e impar!!");

  do
  {
    printf("\n\n Informe um número positivo ou 0 para parar: ");
    scanf("%d", &num);
    if (num > 0)
    {
      if (num % 2 == 0)
      {
        contpar++;
      }
      else
      {
        contimpar++;
      }
    }
    else
    {
      if (num < 0)
      {
        printf("\n Número inválido!!");
      }
      else
      {
        continua = 0;
      }
    }
  } while (continua != 0);

  printf("\n\n Foram informados \n\n %d => pares \n %d => ímpares", contpar, contimpar);

  printf("\n\n Obrigado por usar o nosso sistema!!");

  fflush(stdin);

  return 0;
}