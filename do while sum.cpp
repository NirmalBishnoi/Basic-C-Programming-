#include<stdio.h>
int main(){
	int a,n,sum;
	a=0;
	sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	do{
	
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}while(a<=n);
	printf("%d",sum);
}
