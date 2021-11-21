#include <stdio.h>
#define ITEMS 2
 int main(){
	int i,quantity[5];
	float rate[5],value,total_value;
	char code[5][5];
	
	i=1;
	while(i<=ITEMS){
		printf("Enter code, quantity, and rate:");
		scanf ("%s %d %f",&code[i],&quantity[i],&rate[i]);
		i++;
	}
	
	
	printf ("\n\n\n");
	printf ("                      INVENTORY REPORT                 \n");
	printf ("_____________________________________________________________________________\n");
	printf ("|  Code            Quantity             Rate               Value      \n");
	printf ("|____________________________________________________________________________\n");
	
	
	
	total_value=0;
	i=1;
	
	while (i<=ITEMS){
		value=quantity[i] * rate[i];
		printf("|   %5s",code[i]);
		printf("|");
		       %10d            %10.2f          %e\n",code[i],quantity[i],rate[i],value);
		total_value +=value;
		printf("||");
		i++;
	
	}
	printf ("_______________________________________________________________________________");
}
