#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e, l;
	float f, g;
	printf("�п�J�C���p���{��:\n");
	scanf("%d", &a);
	printf("�п�J�C�@�[�ڨT�o����:\n");
	scanf("%d", &b);
	printf("�п�J�C�@�[�ڨT�o��p���{��:\n");
	scanf("%d", &c);
	printf("�п�J�C�骺�����O:\n");
	scanf("%d", &d);
	printf("�п�J�C�骺�L���O:\n");
	scanf("%d", &e);
	printf("�п�J���ȼ�:\n");
	scanf("%d", &l);
	
	f = ((b*c) / a) + d + e;
	g = f / (l+1);
	printf("�C��}���W�Z���O��:%f\n", f);
	printf("�ϥΦ@���p�e�W�Z���O��:%f\n", g);

	system("pause");
	return 0;
}