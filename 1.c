#include <stdio.h>
#include "���ú���.c"

int main() {
	int value;
	register int i;
	printf("������ѭ��ִ�еı��� ����0�˳���");
	while (scanf("%d", &value) == 1 && value > 0) {
		for (i = value; i >= 0; i--) {
			counter(i);
		}

	}

	return 0;
}
