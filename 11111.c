#include <stdio.h>
int main()
{
	int month;
	printf("�������·ݣ������ж�������");
	scanf("%d",&month);
	
	switch(month);
	{
	case 1:
		printf("1����31��\n");
		break;
	case 2:
		printf("2����28��\n");
		break;
	case 3:
		printf("3����31��\n");
		break;
	case 4:
		printf("4����3��\n");
		break;
	default:
		printf("��ǰ������ʱֻ���ж���Щ��");
		
	}
	return 0;
}
