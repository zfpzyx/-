#include <stdio.h>
int main()
{
	int choice;
	printf("�Ը���ԣ�\n");
	printf("�����������һλ�ʵۣ���������ߵİ�����ϣ����\n");
	printf("1��ֻҪ��һλ�͹���\n");
	printf("2��������λ���ϵİ���\n");
	printf("3���󹬼�����ǧ��\n");
	do{
		printf("��ѡ��\n");
		scanf("%d", &choice);
		
		
			if(choice <= 0 || choice > 3 )
		{
			printf("�������ֻ��������1.2.3֮�������\n");
		 } 
	} while( choice <= 0 || choice > 3 );
	switch(choice)
	{
		case 1:
			printf("��ѡ���������е�Ψһ��\n");
			break;
		case 2:
			printf("������Ĵ��ܲ���\n");
			break;
		case 3:
			printf("����ƨ���أ�\n");
			break;
	}
	return 0;
}
