#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	ini:
	printf("Digite sua idade.\n");
	scanf("%d", &i);
	printf("\n\nClassificacao para a idade de %d anos e:\n", i);
	if((i < 18) && (i > 0))
	{
		printf("Menor de idade.\n\n");
	}
	else if((i >= 18) && (i < 65))
	{
			printf("Maior de idade.\n\n");
	}
	else if(i >= 65)
	{
		printf("Idoso.\n\n");
	}
	else
	{
		system("cls");
		goto ini;
	}
	
	system("pause");
}
