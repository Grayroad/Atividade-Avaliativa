#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j, k;
	printf("digite os valores.\n");
	scanf("%d %d %d", &i, &j, &k);
	printf("\n\nValores digitados em ordem crescente...\n\n");
	for(int l = -i-j-k;l <= i+j+k;l++)
	{
		if((l == i) || (l == j) || (l == k))
		{
			printf("%d, ", l);
		}
	}
	printf("etc...\n\n");
	
	system("pause");
}
