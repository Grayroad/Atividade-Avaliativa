#include <stdio.h>
#include <stdlib.h>

main()
{
	int i = 0;
	while(i <= 20)
	{
		printf("Digite um numero maior que 20.\n");
		scanf("%d", &i);
		if(i > 20)
		{
			printf("Vocu digitou %d.\n", i);
		}
		else
		{
			system("cls");
		}
	}
	
	system("pause");
}
