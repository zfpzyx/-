#include <stdio.h>
int main()
{
	int age;
	for(;;)
	{
		printf("������������䣺");
		scanf("%d",&age);
		if(age < 0)
		{
			printf("������䲻��Ϊ�������˳�ϵͳ��"); 
			break;
		}
	}
	return 0;
}
