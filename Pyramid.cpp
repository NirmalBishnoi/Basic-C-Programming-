#include <stdio.h>
int main(){
	int h,ba,la,surfacearea;
	float Volume;
	printf ("enter the value of ba,h,la");//ba=base area  la=lateral area
	scanf ("%d%d%d",&ba,&h,&la);
	surfacearea=ba+la;
	Volume=ba*h/3;
	printf("Surface area of Pyramid=%d\n",surfacearea);
	printf ("Volume of Pyramid=%f",Volume);
}
