#include <stdio.h>
#define N 5

int main() {
	int count = 5;
	double powers[N] = {42322, 45771, 40907, 41234, 40767};
	double deletePower;
	int deleteIndex = -1;
	int insertPower;
	int i;
	printf("������Ҫɾ����ս��ֵ:");
	scanf("%lf", &deletePower);
	for (i = 0; i < count; i++) {
		if (deletePower == powers[i]) {
			deleteIndex = i;
			break;
		}
	}
	if (-1 == deleteIndex) {
		printf("���ź���û���ҵ�Ҫɾ����ս��ֵ\n");
	} else {
		count--;
		for (i = deleteIndex; i < count; i++) {
			powers[i] = powers[i + 1];
		}
		printf("ɾ����Ľ��Ϊ\t");
		for (i = 0; i < count; i++) {
			printf("%.2lf\t", powers[i]);
		}
	}
	printf("������Ҫ��ӵ�ս������");
	scanf("%d", &insertPower);
	powers[count] = insertPower;
	count++;
	printf("�����Ľ��Ϊ��\n");
	for (i = 0; i < count; i++) {
		printf("%.2lf\t", powers[i]);
	}
	return 0;
}