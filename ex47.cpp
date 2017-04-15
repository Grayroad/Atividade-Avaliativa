#include <stdio.h>
#include <stdlib.h>

main()
{
	int N;
	printf("Digite um numero.\n");
	scanf("%d", &N);
	system("cls");
	if(N%5 == 0)
	{
		printf("%d e divisivel por 5.\n\n", N);
	}
	else
	{
		printf("%d nao e divisivel por 5.\n\n", N);
	}
	
	system("pause");
}
