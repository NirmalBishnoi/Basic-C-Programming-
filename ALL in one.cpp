#include<stdio.h>
  #include<stdlib.h>
int main(){
	
	float SQR_area,RECT_area,TRI_area,REGP_area,CIRC_area,ELLI_area;
	int intger, a, area;
	printf ("If you want\n Area of Square=1\n");
	printf("Area of Rectangle=2\n");
	printf("Area of Triangle=3\n Area of Regpolygom=4\n");
	printf("Area of Circle=5\n Area of Ellipse=6\n");
	printf ("enter your program name intger= ");

	if (scanf ("%c",&intger); == 1)
	{
	printf ("enter the value of a=");
	scanf ("%d",&a);
	area=a*a;
	printf("Area of square=%d",area);
}
	if (intger == 2)
	{
	printf ("enter the value of a=");
	scanf ("%d",&a);
	area=a*a;
	printf("I am in program 2 Area of square=%d",area);
}
else {
	printf ("NOT RUN");
}

system("pause");
return 0;	
}
