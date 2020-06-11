#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int n = 0, maior = 0, menor;

	printf("\n Maior e menor \n");

	do
	{

		printf("\n Digite os números ou 0 para parar: ");
		scanf("%d", &n);

		if (n < 0)
		{
			printf("\n\n Idade inválida!!\n\n");
		}

		if (n > maior)

			maior = n;

		if (n < menor && n != 0)

			menor = n;

	} while (n != 0);

	printf("\n O maior valor e: %d", maior);

	printf("\n O menor valor e: %d", menor);

	printf("\n\n Obrigado por usar o nosso sistema!!\n\n");
	fflush(stdin);

	return 0;
}
