#include <stdio.h>

int main(){
	FILE *f = fopen("/home/chen/FishC/s1e2/test.c","r");
	char c[1000];
	int lines = 0;
	if(!f)
		return 0;
	while(fgets(c,1000,f))
		lines++;
	printf("lines: %d\n",lines);
	return 0;
}
