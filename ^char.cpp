#include<stdio.h>
int main (){
	int no;
	char name1[15],name2[15],name3[15];
	printf ("Enter serial number and name1\n");
	scanf ("%d,%15c ",&no,&name1);
	printf ("%d %15s\n\n",no,name1);
	
	printf("enter serial number and name2\n");
	scanf ("%d %s",&no,&name2);
	printf("%d % 15s\n\n",no,name2);
	
	printf("enter serial number and name3\n");
	scanf ("%d %15s",&no,&name3);
	printf("%d %15s\n\n",no,name3);
	
	
	}
