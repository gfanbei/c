#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//������������
//�꺯������һ�������ĺ�������ֻ��Ԥ���������м򵥵��滻��
#define myadd(x,y)  ((x)+(y))
#define MAX 1024

//����Ϊ�����ĺ���������ֵ��������������
int Add(int a, int b)
{
	return a + b;
}
//��һ�������º꺯���Ⱥ���Ч�ʸ�

int main()
{
	int a = 2;
	int b = 3;
	//�Կռ任ʱ��
	//����Ƶ��ʹ�ã����Ҷ�С�ĺ�����һ��ʹ�ú꺯�����棬��Ϊ�꺯��û����ͨ�����Ŀ���������ѹջ����ת�����صȣ�
	//printf("a + b = %d\n", myadd(a, b));
	printf("a + b = %d\n", Add(a, b));

	return 0;
}