#include <stdio.h>
int main(){
	float r,surfacearea,volume,Pi;
	Pi=3.14;
	printf ("enter the value of r");
	scanf ("%f",&r);
	surfacearea=4*Pi*r*r;
	volume=4/3*(Pi*r*r*r);
	printf("Surface area of Sphere=%f\n",surfacearea);
	printf ("Volume of Sphere=%f",volume);
}
