#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int opcao;

  printf("\n\n Informe o dia da semana!! \n 1 para segunda \n 2 para ter�a \n 3 para quarta: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
  {
    printf("\n\n Hoje � segunda e voc� tem aula de Paradigmas �s 19h!!");
    break;
  }

  case 2:
  {
    printf("\n\n Hoje � ter�a e voc� tem aula de Sistemas Computacionais �s 19h!!");
    break;
  }

  case 3:
  {
    printf("\n\n Hoje � quarta e voc� tem aula de Fundamentos Matem�ticos �s 19h!!");
    break;
  }

  default:
  {
    printf("\n\n Opc�o inv�lida para a agenda!!");
    break;
  }
  }

  printf("\n\n Obrigado por usar o nosso sistema!!\n\n");

  fflush(stdin);

  return 0;
}