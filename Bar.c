#include <stdio.h>
int main()
{
	const int COVER =500;
	const float DESC=.25;
	int numMuj, numHom;
	float total;
	printf("¿Cuantas mujeres?");
	scanf("%d",&numMuj);
	printf("¿Cuantos hombres?");
	scanf("%d",&numHom);

	total=(numHom*COVER)+(numMuj*COVER)-(numMuj*COVER*DESC);
	printf("Total=%f",total);
	return 0;
}
