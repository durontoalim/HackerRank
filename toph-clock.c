#include <stdio.h>

int main() {
	int H,M;
	scanf("%d %d",&H,&M);

	double formula = (double)(360+((5.5*M)-(30*H)));
	if(formula<360-formula){
		printf("%.7lf\n", formula);
	}else{
		printf("%.7lf\n", 360-formula);
	}
	
	return 0;
}