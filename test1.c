#include <stdio.h>
int main()
{
	char ch1,ch2;
	printf("�������ַ���");
	ch1 = getchar();
	fflush(stdin);
	printf("������ڶ����ַ���");
	ch2 = getchar();
	printf("��������ַ��ǣ�%c,%c\n",ch1,ch2);
	putchar(ch1);
	putchar(', d');
	putchar(ch2);
	return 0;
	
}
