#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("請輸入兩組整數:");
	scanf("%d %d", &a, &b);
	if (a % b ){
		printf("%d不為%d的倍數\n",a, b);
	}
	else{
		printf("%d為%d的倍數\n",a,b);
	}

	system("pause");
	return 0;
}