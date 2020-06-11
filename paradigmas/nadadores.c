#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float idade;
	int continuar;

	printf("\n\n Classificação de nadadores");

	printf("\n\n Deseja inserir a idade? (1 para sim/0 para não): ");
	scanf("%d", &continuar);

	while (continuar == 1)
	{

		printf("\n Informe a idade: ");
		scanf("%f", &idade);

		if ((idade < 5) && (idade >= 0))
		{
			printf("\n Não existe categoria para essa idade!!");
		}
		else
		{
			if (idade < 0)
			{
				printf("\n Idade inválida!!");
			}
		}

		if ((idade >= 5) && (idade <= 7))
		{
			printf("\n Nadador da categoria Infantil A.");
		}

		if ((idade >= 8) && (idade <= 10))
		{
			printf("\n Nadador da categoria Infantil B.");
		}

		if ((idade >= 11) && (idade <= 13))
		{
			printf("\n Nadador da categoria Juvenil A.");
		}

		if ((idade >= 14) && (idade <= 17))
		{
			printf("\n Nadador da categoria Juvenil B.");
		}

		if (idade >= 18)
		{
			printf("\n Nadador da categoria Sênior.");
		}

		printf("\n\n Deseja continuar? (1 para sim/0 para não): ");
		scanf("%d", &continuar);
	}

	printf("\n\n Obrigado por usar o nosso sistema!!\n\n");
	fflush(stdin);

	return 0;
}
