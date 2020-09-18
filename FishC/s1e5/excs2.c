#include <stdio.h>

#define FQ 3.7
#define JL 7.0
#define XQ 1.3
#define KXC 8.0
#define YANGC 2.4
#define YOUC 9.0
#define HG 6.3
#define BLB 0.5

int main(){

	printf("小明:%.2f\n",(2*FQ+KXC+YOUC)*0.5);
	printf("小红:%.2f\n",(3*XQ+0.5*YANGC+5*HG))*0.5;
	printf("小甲鱼:%.2f\n",(10*HG+20*BLB)*0.5);

	return 0;
}
