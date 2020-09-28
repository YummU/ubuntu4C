#include <stdio.h>

int main(){

	char c;
	int i;
	int j;
	
	
	scanf("%c%d%x",&c,&i,&j);

	printf("c:%c \n",c);
	printf("i:%d \n",i);
	printf("j:%#X (%d) \n",j,j);
	
	return 0;
}
