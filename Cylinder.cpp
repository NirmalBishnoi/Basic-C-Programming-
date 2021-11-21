#include <stdio.h>
int main(){
	float r,h,Pi,volume,surfacearea;
	Pi=3.14;
	printf ("enter the value of r,h");
	scanf ("%f%f",&r,&h);
	surfacearea=2*Pi*r*h+2*Pi*r*r;
	volume=Pi*r*r*h;
	printf("Surface area of Cylionder=%f",surfacearea);
	printf("Volume of Cylinder=%f",volume);
}
