#include <stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int * ptr = (int*)(&a + 1);
//	printf("%d,%d",*(a + 1),*(ptr - 1));
//
//	return 0;
//
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x",ptr1[-1],*ptr2);
//
//	return 0;
//}

//int main(int argc ,char *argv[])
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};
//	int *p;
//	p = a[0];
//	printf("%d\n",p[0]);
//	//printf("%d",sizeof(long));
//	return 0;
//}

void test01()//void* ������ָ�� 4�ֽ�  ���Զ������
{               //�κ����͵�ָ�붼���Բ�����ǿת  ת����void*����
	//void *p = NULL;
	int *pint = NULL;
	char *pchar = (char *)pint;
	void *pvoid = pint;

}

struct person //��С16���ֽ�
{
	char a;//4
	int b;//4
	char c;//4
	int d;//4

};

void test02()//��Ӹ�ֵ
{
	struct person p = {'a',100,'b',300};
	printf("p.d = %d\n", p.d);
	printf("%d\n",sizeof(p));
	p.d = 1000;
	printf("%d\n",*(int*)((char *)&p + 12));//�ҵ�p�׵�ַ��ǿתΪchar*,�Ӳ���12�ҵ�p.d��
	printf("%d\n",(p.d));           //�׵�ַ����ǿתΪ��int*����ȡ4�ֽ� ����������
}

int main()
{          
	//test01();
	test02();

	return 0;
}