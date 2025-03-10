#include <stdio.h>
#include <math.h>
int main ()
{
	float l,pt,at,h;
	//asignacion de valores
	l = 7;
	h = sqrt(pow(l,2)+ pow(l,2));
	pt = (l *8)+(3*h);
	at = 3*l*l/2 + l*l + 2*l*l;
	printf("El area total es: %f\n",at);
	printf("El perimetro total es: %f\n",pt);
	return 0;
}
