#include <stdio.h>
#include <math.h>
int main ()
{
	float l,pt,at,h;
	l = 7;
	h = sqrt(pow(l,2)* pow((3*l),2));
	pt = (3.1416*21)/2+44.28+28+21;
	at = h*3+(3.1416*110.25)/2;
	printf("El �rea total es: %f\n",at);
	printf("El per�metro total es: %f\n",pt);
	return 0;
}
