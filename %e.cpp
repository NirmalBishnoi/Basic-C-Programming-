#include<stdio.h>
int main(){
	float x,y;
	double p,q;
	
	
	printf ("Value of x and y");
	scanf  ("%f %e",&x,&y);
	printf ("\n");
	printf ("x=%f\n y=%f\n\n",x,y);
	
	
	printf ("Enter the Value of p and q");
	scanf  ("%lf %lf",&p,&q);
//	printf ("\n p=%lf \n q=%e\n",p,q);
	printf ("p=%.12lf \n q=%.12e",p,q)
}
