#include <stdio.h>
int main()
{
	int passward;
	int i = 0;
	
	while(i <= 3)//while while
	{
		printf("���������룺");
		scanf("%d",&passward);
		if(123456 != passward)
		{
			printf("�������,��ǰ�����%d�Σ�\n",i + 1);
			i++;
		}
	if(i == 3)
	{
		printf("�����������ϵͳǿ�ƹرգ�\n");
		exit(0);
	}//int  �������⣺��������û��ֵ����ֵ���ס��ֵ������������ 
		
	}
	
	return 0;
}
