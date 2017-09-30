#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,l;
	for (i = 1; i < 10; i+=2){
		
		for (l = 1; l <= (9 - i) / 2; l++){
			printf(" ");
		}
		for (j = 1; j <= i; j ++){
			printf("*");
			
		}
		printf("\n");
		
	}
	system("pause");
	return 0;
}