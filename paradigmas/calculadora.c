#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");
  float num1, num2, soma, sub, mult, divi; //poderia usar uma vari�vel s� e apenas mudar a opera��o
  int calcula = 1, operacao = 1;

  printf("\n\n Simulador de Calculadora!! \n");

  printf("\n\n Deseja realizar um c�lculo? Digite 1 para Sim ou 2 para N�o \n\n");
  scanf("%d", &calcula);

  //do
  //{
  while (calcula == 1)
  {
    printf("\n Informe a Opera��o: \n '1' Soma \n '2' Subtra��o \n '3' Multiplica��o \n '4' Divis�o -> ");
    scanf("%d", &operacao);

    printf("\n\n Informe o primeiro n�mero: \n\n");
    scanf("%f", &num1);

    printf("\n Informe o segundo n�mero: \n\n");
    scanf("%f", &num2);

    switch (operacao)
    {
    case 1:
    {
      soma = num1 + num2;
      printf("\n A soma �: %0.2f \n\n", soma);
      break;
    }

    case 2:
    {
      sub = num1 - num2;
      printf("\n A subtra��o �: %0.2f \n\n", sub);
      break;
    }

    case 3:
    {
      mult = num1 * num2;
      printf("\n A multiplica��o �: %0.2f \n\n", mult);
      break;
    }

    case 4:
    {
      divi = num1 / num2;
      printf("\n A divis�o �: %0.2f", divi);
      break;
    }

    default:
    {
      printf("\n\n Opera��o inv�lida");
    }
    }

    printf("\n\n Deseja realizar outro c�lculo? Digite 1 para Sim ou 2 para N�o \n\n");
    scanf("%d", &calcula);

  } //while (calcula == 1);

  printf("\n\n Obrigado por usar o nosso sistema!! \n\n");

  fflush(stdin);

  return 0;
}