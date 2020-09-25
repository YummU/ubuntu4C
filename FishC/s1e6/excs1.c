#include <stdio.h>
#include <math.h>

int main(){

	unsigned long long int count = 0;
	unsigned long long int kg;	
	unsigned long long int num;
	int i;
	
	//第一次 2^0 第二次 2^1 第三次 2^2 ... 第64次 2^63
	//总数相加
	
	for(i=0;i<64;i++){
		num = pow(2,i);
		count += num;
	}	
	
	kg = count/25000;

	printf("需要给予达伊尔%llu粒麦子！\n",count);
	printf("如果每25000粒麦子为1kg，那么应该给%lldkg麦子！\n",kg);

	return 0;
}

