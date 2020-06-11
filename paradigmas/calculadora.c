#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");
  float num1, num2, soma, sub, mult, divi; //poderia usar uma variável só e apenas mudar a operação
  int calcula = 1, operacao = 1;

  printf("\n\n Simulador de Calculadora!! \n");

  printf("\n\n Deseja realizar um cálculo? Digite 1 para Sim ou 2 para Não \n\n");
  scanf("%d", &calcula);

  //do
  //{
  while (calcula == 1)
  {
    printf("\n Informe a Operação: \n '1' Soma \n '2' Subtração \n '3' Multiplicação \n '4' Divisão -> ");
    scanf("%d", &operacao);

    printf("\n\n Informe o primeiro número: \n\n");
    scanf("%f", &num1);

    printf("\n Informe o segundo número: \n\n");
    scanf("%f", &num2);

    switch (operacao)
    {
    case 1:
    {
      soma = num1 + num2;
      printf("\n A soma é: %0.2f \n\n", soma);
      break;
    }

    case 2:
    {
      sub = num1 - num2;
      printf("\n A subtração é: %0.2f \n\n", sub);
      break;
    }

    case 3:
    {
      mult = num1 * num2;
      printf("\n A multiplicação é: %0.2f \n\n", mult);
      break;
    }

    case 4:
    {
      divi = num1 / num2;
      printf("\n A divisão é: %0.2f", divi);
      break;
    }

    default:
    {
      printf("\n\n Operação inválida");
    }
    }

    printf("\n\n Deseja realizar outro cálculo? Digite 1 para Sim ou 2 para Não \n\n");
    scanf("%d", &calcula);

  } //while (calcula == 1);

  printf("\n\n Obrigado por usar o nosso sistema!! \n\n");

  fflush(stdin);

  return 0;
}