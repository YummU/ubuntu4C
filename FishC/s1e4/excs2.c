#include <stdio.h>

int main(){
	/*测试各种打印*/
	printf("打印四个字符:%c%c%c%c\n",67,104,101,78);
	printf("右对其，保留2位:%10.2f\n",3.1416);
	printf("左对其，保留3位:%.3f\n",3.1416);
	printf("右对其，指数形式:%10e\n",520000.0);
	printf("左对其，指数形式:%-10E\n",520000.0);
	return 0;
}
