#include <stdio.h>

#define PI 3.14159
#define S(r) 2*PI*r
#define C(r) PI*r*r

int main(){

	int r = 5;

	printf("半径为%d的圆\n周长是:%.2f\n面积是:%.2f\n",r,S(r),C(r));

	return 0;
}
