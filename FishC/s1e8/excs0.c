#include <stdio.h>

int main(){
	
	double Fs;
	double Dc;
	double FsToDc(double Fs);
	
	printf("请输入华氏度:");
	scanf("%lf",&Fs);

	Dc = FsToDc(Fs);
	printf("转换为摄氏度是:%.2f \n",Dc);
	
	return 0;
}

double FsToDc(double Fs){
	
	double Dc;
	
	Dc = (Fs - 32) *5/9;
	
	return Dc;
}
