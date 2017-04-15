#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j;
	printf("Digite dois numeros.\n");
	scanf("%d %d", &i, &j);
	if(i > j)
	{
		printf("%d > %d", i, j);
	}	
	else
	{
		printf("%d > %d", j, i);
	}
}
