#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int opcao;

  printf("\n\n Informe o dia da semana!! \n 1 para segunda \n 2 para terça \n 3 para quarta: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
  {
    printf("\n\n Hoje é segunda e você tem aula de Paradigmas às 19h!!");
    break;
  }

  case 2:
  {
    printf("\n\n Hoje é terça e você tem aula de Sistemas Computacionais às 19h!!");
    break;
  }

  case 3:
  {
    printf("\n\n Hoje é quarta e você tem aula de Fundamentos Matemáticos às 19h!!");
    break;
  }

  default:
  {
    printf("\n\n Opcão inválida para a agenda!!");
    break;
  }
  }

  printf("\n\n Obrigado por usar o nosso sistema!!\n\n");

  fflush(stdin);

  return 0;
}