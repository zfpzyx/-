#include <stdio.h>

int main() {
	int array[] = {15, 20, 25, 30, 35};
	int i;
	int *ptr_array = array;
	for (i = 0; i < 5; i++) {
		printf("��%d��Ԫ�ص�ֵΪ%d\t��ַΪ��%p\n", i + 1, *ptr_array, ptr_array);
		ptr_array++;
	}
	return 0;
}