#include<stdio.h>
#include<math.h>
#define LAMDA 0.001
 main(){
	double t;
	float r;
	int i,R;
	for(i=1;i<=27;++i){
		printf("--");
	}
	printf("\n");
	for(t=0;t<=3000;t+=150){
		r=exp(-LAMDA*t);
		R=(int)(50*r+0.5);
		printf(" |");
		for(i=1;1<=R;++i){
			printf("*");
		}
		printf("#\n");
	}
	for(i=1;i<3;++i){
		printf("|\n");
	}
}
