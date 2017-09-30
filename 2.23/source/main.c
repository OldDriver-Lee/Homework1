#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	int max = 0;
	int min = 100000;
	printf("請輸入三個整數:\n");
	scanf("%d %d %d",&a ,&b ,&c);
	if (a > max){
		max = a;
	}
	if (a < min) {
			min = a;
		}
	
	if (b > max){
		max = b;
	}
	else if (b < min) {
		min = b;
	}
	if (c > max){ 
		max = c;
	}
	else if (c < min) {
		min = c;
	}
	printf("最大值為:%d\n", max);
	printf("最小值為:%d\n", min);
	system("pause");
	return 0;
}