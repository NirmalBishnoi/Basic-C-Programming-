#include<stdio.h>
int main(){
	int a,b,c,x,y,z,p,q,r;
	printf("Enter the value of a b c");
	scanf("%d %*d %d",&a,&b,&c);    
	printf("a=%d b=%d c=%d\n\n",a,b,c);
	
	printf ("Enter Two 4-digit numbers\n");
	scanf ("%2d %4d",&x,&y);
	printf ("%d %d\n\n",x,y);
	
	printf ("Enter the integer\n");
	scanf  ("%d %d",&a,&x);
	printf ("%d %d\n\n",a,x);
	
	printf ("Enter a nine digit number\n");
	scanf  ("%3d %4d %3d",&p,&q,&r);
	printf ("%d %d %d\n\n",p,q,r);
	
	printf ("Enter Two three digit numbers\n");
	scanf  ("%d %d",&x,&y);
	printf ("%d %d",x,y);
	
}
