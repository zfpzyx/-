#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calccircle(double);//���ݴ���뾶����Բ���
int validate(double);
int main() {
	double R;
	double s;
	printf("������Ҫ���ֵ:");
	int flag;
	flag = 0;
	do {
		scanf("%lf", &R);
		if (!validate(R)) {
			printf("���������ݲ���Ϊ�������������룺");
		}
	} while (!validate(R));

	s = calccircle(R);
	printf("���Ϊ %.2lf\n", s);
	return 0;
}

double calccircle(double R) {
	double s = 3.14 * pow(R, 2);
	return s;//�����Ѿ���õ�Բ���
}

int validate(double num) {
	return num > 0;
}
