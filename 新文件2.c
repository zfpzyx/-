#include <stdio.h>

void main() {
	int num = 1024;
	int *ptr_num;
	ptr_num = &num;
	printf("num��ֵΪ��%d\n", num);
	printf("num���ڴ��ַΪ��%p\n", &num);
	printf("ptr_num��ֵΪ��%p\n", &ptr_num);
	printf("ptr_num���ڴ��ַΪ��%p\n", &ptr_num);
	printf("*ptr_numָ���ֵΪ��%d\n", *ptr_num);
	return 0;
}