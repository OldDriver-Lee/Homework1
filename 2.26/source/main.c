#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("�п�J��վ��:");
	scanf("%d %d", &a, &b);
	if (a % b ){
		printf("%d����%d������\n",a, b);
	}
	else{
		printf("%d��%d������\n",a,b);
	}

	system("pause");
	return 0;
}