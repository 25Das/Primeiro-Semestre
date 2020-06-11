#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float media = 0;
	int cont = 0, idade = 0;

	printf("\n\n Digite as idades e digite 0 para parar. \n");

	for (int c = 0; c < 5; c++)
	{
		c = 0;

		printf(" Digite uma idade: ");
		scanf(" %d", &idade);

		if (idade == 0)
		{
			c = 10;
		}
		else
		{
			media += idade;
			cont++;
		}

		if (idade < 0)
		{
			printf("\n\n Idade inv�lida!!\n\n");
		}
	}

	media = media / cont;

	printf("\n\n A m�dia �: %0.1f ", media);

	printf("\n\n Obrigado por usar o nosso sistema!!\n\n");
	fflush(stdin);

	return 0;
}
