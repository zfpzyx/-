#include <stdio.h>

int main() {
	int i;
	int sum = 0;
	double avg;
	int searchNum;
	int nums[] = {8, 4, 2, 1, 23, 344, 12};
	printf("�������Ϊ��\n");
	for (i = 0; i < 7; i++) {
		printf("%d\t", nums[i]);

	}
	printf("\n**************\n");
	printf("\n");
	for (i = 0; i < 7; i++) {
		sum += nums[i];
	}
	avg = sum / 7.0;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d", &searchNum);
	for (i = 0; i < 7; i++) {
		if (searchNum == nums[i]) {
			printf("�ҵ���������֣�\n");
			break;
		} else {
			printf("û�ҵ��������\n");
		}

	}
	return 0;
}