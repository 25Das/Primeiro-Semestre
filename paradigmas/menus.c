#include <locale.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, mediaA;
	float n1, n2, n3, p1, p2, p3, mediaP;
	int escolha;

	printf("\n\n Menu de Médias!!\n\n");

	do
	{
		printf("Escolha entre as opcoes:");
		printf("\n 1 - Media aritmética");
		printf("\n 2 - Media ponderada");
		printf("\n 3 - Sair: ");
		scanf("%i", &escolha);

		switch (escolha)
		{
		case 1:
			printf("\n Insira a nota 1: ");
			scanf("%f", &nota1);
			printf(" Insira a nota 2: ");
			scanf("%f", &nota2);

			mediaA = (nota1 + nota2) / 2;
			printf("\n\n A Média Aritmética é: %.2f \n\n", mediaA);
			break;

		case 2:
			printf("\n Digite a primeira nota: ");
			scanf("%f", &n1);
			printf(" Digite a segunda nota: ");
			scanf("%f", &n2);
			printf(" Digite a terceira nota: ");
			scanf("%f", &n3);
			printf(" Digite o primeiro peso: ");
			scanf("%i", &p1);
			printf(" Digite o segundo peso: ");
			scanf("%i", &p2);
			printf(" Digite o terceiro peso: ");
			scanf("%i", &p3);
			mediaP = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
			printf("\n\n Media ponderada: %.2f \n\n", mediaP);
			break;
		case 3:
			printf(" Sair");
			break;

		default:
			printf("\n\n Opção inválida \n\n");
		}
	} while (escolha != 3);

	printf("\n\n Obrigado por usar o nosso sistema!!\n\n");
	fflush(stdin);

	return 0;
}
