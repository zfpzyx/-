#include <stdio.h>
int main()
{
	double flowerprice;
	printf("��һ��ҹ�ڷ�ߵ�ҹ��\n");
	printf("һ��С�������Լ�Ǯ����һ���ʻ�\n");
	printf("Ů�����еļ۸��⻨����Ǯ����\n");
	printf("�е�˵��");
	scanf("%lf",&flowerprice);
	
	if(flowerprice > 10)
	{
		printf("Ů��˵̫�����Ҳ�����");
	}
	
	
	
	else if(flowerprice <5 && flowerprice > 1)
	{
		printf("Ů��˵����лл��");
	}
	
	
	
	else if(flowerprice < 1)
	{
		printf("Ů��˵лл��");
	}
	
	
	
	return 0;
	
}
