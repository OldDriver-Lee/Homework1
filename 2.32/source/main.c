#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float c, b,bmi;
	printf("�п�ܨϥνS�άO����:1--->�S  / 2--->����\n");
	scanf("%d", &a);
	
	if (a == 1){
		printf("�п�J�z���魫(�S):\n");
		scanf("%f", &b);
		printf("�п�J�z������(�T):\n");
		scanf("%f", &c);
		bmi = (b * 703) / (c*c);
	}
	else if( a == 2){
		printf("�п�J�z���魫(����):\n");
		scanf("%f", &b);
		printf("�п�J�z������(����):\n");
		scanf("%f", &c);
		bmi = b / (c*c);
	}
	printf("�z��BMI�Ȭ�:%f\n", bmi);
	printf("BMI VALUES\n");
	printf("UnderWeight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("OverWeight:  between 25   and 29.9\n");
	printf("Obese:       30 or  greater\n");

	system("pause");
	return 0;
}