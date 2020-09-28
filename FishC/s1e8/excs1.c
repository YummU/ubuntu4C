#include <stdio.h>

int main(){

	char name[256];
	double height;
	double weight;
	
	double lb;
	double in;
	
	printf("请输入您的姓名:");
	scanf("%s", name);
	printf("请输入您的身高(cm):");
	scanf("%lf",&height);
	printf("请输入您的体重(kg):");
	scanf("%lf",&weight);
	
	printf("=======正在为您转换======= \n");
	
	lb = weight / 0.453;
	in = height / 2.54 ;
	
	printf("%s的身高是%.2f(in),体重是%.2f(lb) \n",name, in, lb);
	
	return 0;
}


