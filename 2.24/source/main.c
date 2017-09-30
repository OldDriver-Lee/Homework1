#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("叫块计\n");
	scanf("%d", &a);
	if (a % 2){
		printf("计计");
	}
	else{
		printf("计案计");
	}

	system("pause");
	return 0;
}