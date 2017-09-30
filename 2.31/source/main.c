#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,i;
	printf("number      squar       cube\n");
	for (i = 0; i < 11; i++){
		a = i;
		b = i*i;
		c = i*i*i;
	printf("  %d           %d          %d\n",a,b,c);
	}
	
	system("pause");
	return 0;
}