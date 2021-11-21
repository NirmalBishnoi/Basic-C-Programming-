#include<stdio.h>
int main (){
	int a,n,sum;
	sum=0;
	a=1;
	printf("enter the value of n");
	scanf("%d",&n);
	while(a<=n){
	printf("%d\n",a);
	sum=sum+a;
	a++;
	}
	printf("sum of 1 to n %d",sum);
	return 0;
}
