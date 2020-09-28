#include <stdio.h>
#include <math.h>

int main(){
	
	int i;
	
	printf("请输入一个十进制整数:");
	scanf("%d",&i);
	
	long long j = pow(i,5);
	
	printf("%d的五次方是%lld \n",i,j);
	
	return 0;
}
