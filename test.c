#include <stdio.h>

int main() {
	int num1 = 1024;
	int num2 = 2048;
	int *ptr1;
	int *ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("num1��ֵΪ%d\t num1�ĵ�ַΪ%p\n", num1, ptr1);
	printf("num2��ֵΪ%d\t num2�ĵ�ַΪ%p\n", num2, ptr2);

	return 0;
}