#include<stdio.h>
#include<math.h>
int main() {
	float a,b,c,i,r;
	float root1,root2;
	printf ("enter the value of a,b,c:");
	scanf ("%f%f%f",&a,&b,&c);
	r=b*b-(4*a*c);
	if (r>0){
		root1=(-b+sqrt(r)/(2*a));
		root2=(-b-sqrt(r)/(2*a));
		printf("\nTwo distnct real roots exists: root1=%.2f and root=%.2f",root1,root2);	
	}
    else if 
           (r==0){
           	root1=root2=-b/2*a;
           	printf ("\nTwo equel and real roots exists: root1=%.2f and root2=%.2f",root1,root2);
		   }
		   else if
		   (r<0)
		{
			root1=root2=-b/2*a;
			i=sqrt(-r/2*a);
			printf ("\n Two distnct complex roots exists: root1=%.2f+%.2f and root2=%.2f-%.2f",root1,root2);
		}
}
