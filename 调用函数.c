#include <stdio.h>
void counter(int);

void counter(int i) {
	static int subTotal = 0;
	subTotal++;
	printf("counter������������%d��\n", subTotal);
	return i;
}

