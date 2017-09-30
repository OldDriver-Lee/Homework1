#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e, l;
	float f, g;
	printf("請輸入每日行駛里程數:\n");
	scanf("%d", &a);
	printf("請輸入每一加侖汽油價格:\n");
	scanf("%d", &b);
	printf("請輸入每一加侖汽油行駛里程數:\n");
	scanf("%d", &c);
	printf("請輸入每日的停車費:\n");
	scanf("%d", &d);
	printf("請輸入每日的過路費:\n");
	scanf("%d", &e);
	printf("請輸入乘客數:\n");
	scanf("%d", &l);
	
	f = ((b*c) / a) + d + e;
	g = f / (l+1);
	printf("每日開車上班的費用:%f\n", f);
	printf("使用共乘計畫上班的費用:%f\n", g);

	system("pause");
	return 0;
}