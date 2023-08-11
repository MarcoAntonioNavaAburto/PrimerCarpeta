#include<stdio.h>
int main()
{
	float cal, sumacal=0, prom;
	int n, i=1;
	printf("\nIngrese el n%cmero de calificaciones que va ingresar: ", 163);
	scanf("%d", &n);
		for(i=1;i<=n;i++)
		{
			printf("\nIngrese la calificaci%cn %d: ", 162, i);
			scanf("%f", &cal);
			sumacal+=cal;
		}
	prom=sumacal/n;
	printf("\nEl promedio del alumno es: %.2f", prom);
			if(prom>=90)
			{
				printf("\nLa califica%cn asignada es A", 162);	
			}
			else
			if(prom>=80)
			{
				printf("\nLa calificaci%cn asignada es B", 162);	
			}
			else
			if(prom>=70)
			{
				printf("\nLa calificaci%cn asiganda es C", 162);	
			}
			else
			if(prom>=60)
			{
				printf("\nLa calificaci%cn asignada es D", 162);
			}
			else
			printf("\nLa califaci%cn asignada es F", 162);
	return 0;
}
