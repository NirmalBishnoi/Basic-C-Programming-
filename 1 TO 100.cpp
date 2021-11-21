#include<stdio.h>
int main(){
	int a,sum,max_number;
	sum=0;
	printf ("enter your max_number");
	scanf("%d",&max_number);
	for(a=0;a<=max_number;a++){
	sum=sum+a;
	printf("%d\n",a);
	}
	printf("sum of 0 to 100 %d",sum);

