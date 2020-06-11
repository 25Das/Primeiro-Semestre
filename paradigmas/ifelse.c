#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  int idade, sexo;
  char nome[60];

  printf("\n\n Exemplo de estruturas de decisão!!");

  printf("\n\n Informe seu nome completo: ");
  gets(nome);

  printf("\n\n Informe a sua idade: ");
  scanf("%d", &idade);

  if (idade >= 18)
  {
    printf("\n\n Informe seu sexo (1 para feminino ou 2 para masculino): ");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
      printf("\n\n Nome: %s", &nome);
      printf("\n\n Você é maior de 18 anos e do sexo feminino!!");
    }
    else
    {
      printf("\n\n Nome: %s", &nome);
      printf("\n\n Você é maior de 18 anos e do sexo masculino!!");
    }
  }
  else
  {
    printf("\n\n Nome: %s", &nome);
    printf("\n\n Você é menor de 18 anos!!");
  }

  printf("\n\n Obrigado por usar o nosso sistema!!\n\n");
  fflush(stdin);

  return 0;
}