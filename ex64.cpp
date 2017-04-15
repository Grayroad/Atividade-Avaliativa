#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	ini:
	printf("Digite a idade do nadador.\n");
	scanf("%d", &i);
	if((i >= 5) && (i <= 7))
	{
		printf("Classificacao do concorrente: ");
		printf("infantil A.\n");
	}
	else if((i >= 8) && (i <= 10))
	{
		printf("Classificacao do concorrente: ");
		printf("infantil B.\n");
	}
	else if((i >= 11) && (i <= 13))
	{
		printf("Classificacao do concorrente: ");
		printf("juvenil A.\n");
	}
	else if((i >= 14) && (i <= 17))
	{
		printf("Classificacao do concorrente: ");
		printf("juvenil B.\n");
	}
	else if(i >= 18)
	{
		printf("Classificacao do concorrente: ");
		printf("Senior.\n");
	}
	else
	{
		printf("Idade invalida, por favor entrar com a correta(idade maior de 5 anos).\n");
		system("pause");
		system("cls");
		goto ini;
	}
	printf("\n\n");
	system("pause");
}
