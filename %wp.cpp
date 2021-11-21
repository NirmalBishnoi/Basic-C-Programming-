#include<stdio.h>
int main (){
	int m=12345;
	long n=987654;

//	scanf  ("%d %l",&m,&n);
	printf ("%d\n",m);
	
	printf ("%10d\n",m);
	
	printf ("%010d\n",m);
	
	printf ("%-10d\n\n\n",m);
	
	printf ("%10ld\n",n);
	
	printf ("%10ld\n",-n); 
}
