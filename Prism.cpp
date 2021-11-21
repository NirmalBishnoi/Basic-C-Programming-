#include <stdio.h>
int main(){
	int ba,la,h,surfacearea,volume;//ba=base area  ,  la=lateralarea
	printf ("enter the value of ba,la,h");
	scanf ("%d%d%d",&ba,&la,&h);
	surfacearea=2*(ba+la);
	volume=ba*h;
	printf("surface area of Prism=%d",surfacearea);
	printf("volume of Prism=%d",volume);
}
