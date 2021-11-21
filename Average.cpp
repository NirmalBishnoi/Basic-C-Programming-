#include<stdio.h>
int main (){
	int a=1,sum=0 ,n;
	float D;
	printf("enter the value of n");
	scanf ("%d",&n );
	while(a<=n){
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}
	D=sum/n;
	printf("= %f",D);
	return 0;
}



















