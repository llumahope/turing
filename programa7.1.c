/*Lumma Cristina de Oliveira Maia - 2015090077*/

#include<stdio.h>

int main(int argc, char**argv)
{

	int num, i, par, impar;

	i=1;
	par=0;
	impar=0;

	do{
		printf("Digite o %d° numero: ", i++);
		scanf("%d", &num);

		i
			par=par+1;
		}
		else
		{
			impar=impar+1;
		}
	}
	while(i<=10);

	printf("Numeros Pares: %d\n", par);
	printf("Numeros Impares: %d\n", impar);

	return 0;

}
