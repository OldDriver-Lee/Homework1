#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	int max = 0;
	int min = 100000;
	printf("�п�J�T�Ӿ��:\n");
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
	printf("�̤j�Ȭ�:%d\n", max);
	printf("�̤p�Ȭ�:%d\n", min);
	system("pause");
	return 0;
}