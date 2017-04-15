#include <stdio.h>
#include <stdlib.h>

main()
{
	int N;
	printf("Digite um numero.\n");
	scanf("%d", &N);
	system("cls");
	if(N%2 == 0)
	{
		printf("%d e par.\n\n", N);
	}
	else
	{
		printf("%d e impar.\n\n", N);
	}
	
	system("pause");
}
