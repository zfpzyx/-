#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int hp1 = 100,hp2 = 100;
	int att1,att2;
	srand(time (NULL));
	att1 = rand() % 11 + 5;
	att2 = rand() % 11 + 5;
	

	
	while(hp1 || hp2 >= 0)
	{
		hp1 -= att1;
		hp2 -= att2;
		printf("\n*********************************\n");
		printf("1������Ϊ%d,1ʣ��Ѫ��Ϊ%d\n",att1,hp1);
		printf("2������Ϊ%d��2ʣ��Ѫ��Ϊ%d\n",att2,hp2);
		printf("\n*********************************\n");
		
	}
	printf("��Ϸ���������1Ѫ����%d\t���2Ѫ����%d\n");
return 0;
}

