#include <stdio.h>
#include <stdlib.h>

main()
{
	int N;
	printf("Digite um numero.\n");
	scanf("%d", &N);
	system("cls");
	if(N%3 == 0)
	{
		printf("%d e multiplo de 3.\n\n", N);
	}
	else
	{
		printf("%d nao e multiplo de 3.\n\n", N);
	}
	
	system("pause");
}
