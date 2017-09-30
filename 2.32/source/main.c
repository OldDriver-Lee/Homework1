#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float c, b,bmi;
	printf("請選擇使用磅或是公斤:1--->磅  / 2--->公斤\n");
	scanf("%d", &a);
	
	if (a == 1){
		printf("請輸入您的體重(磅):\n");
		scanf("%f", &b);
		printf("請輸入您的身高(吋):\n");
		scanf("%f", &c);
		bmi = (b * 703) / (c*c);
	}
	else if( a == 2){
		printf("請輸入您的體重(公斤):\n");
		scanf("%f", &b);
		printf("請輸入您的身高(公尺):\n");
		scanf("%f", &c);
		bmi = b / (c*c);
	}
	printf("您的BMI值為:%f\n", bmi);
	printf("BMI VALUES\n");
	printf("UnderWeight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("OverWeight:  between 25   and 29.9\n");
	printf("Obese:       30 or  greater\n");

	system("pause");
	return 0;
}