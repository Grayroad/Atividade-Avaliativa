#include <stdio.h>
#include <stdlib.h>

main()
{
	float h1, m1, imc;
	ini:
	printf("Digite sua altura e seu peso.\n");
	scanf("%f %f", &h1, &m1);
	printf("\n\nVoce esta ");
	imc = m1/(h1*h1);
	if(imc < 20)
	{
		printf("abaixo do peso.\n\n");
	}
	else if((imc >= 20) && (imc < 25))
	{
		printf("com peso normal.\n\n");
	}
	else if((imc >= 25) && (imc < 30))
	{
		printf("com sobrepeso.\n\n");
	}
	else if((imc >= 30) && (imc < 40))
	{
		printf("obeso.\n\n");
	}
	else if(imc >= 40)
	{
		printf("obeso morbido.\n\n");
	}
	else
	{
		system("cls");
		goto ini;
	}
	
	system("pause");
}
