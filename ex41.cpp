#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, j;
	i = 0;
	j = 0;
	while(i + j <= 10)
	{
		printf("Digite dois numeros cuja a soma seja maior que 10.\n");
		scanf("%d %d", &i, &j);
		if(i + j > 10)
		{
			printf("%d + %d = %d.\n", i, j, i+j);
		}
		else
		{
			system("cls");
		}
	}
	
	system("pause");
}
