# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>


//���е����鴫�Σ����˻���ָ��(��άֻ�������鴫��)
//���ú���ʱ�γ�ջ֡�����غ���ʱ��Ӧ����ջ֡�ͷţ�һ������һ��ջ֡
//char *q = NULL;
//void fun(int a[10])//int a[] ,int *a ,int a[10]
//{
//	//printf("fun: %d\n",sizeof(a));
//    //char  * p = "helo word";//λ���ַ�����ȥ��ֻ�ܶ������ܱ�д.����Ǹ��ַ������׵�ַ����С��ַ��
//    //*p = 'h';                 //��������ʱ����Ȼ����
//	 char arr[] = "hello word";
//	q = arr;
//
//}
//
//int main()
//{
//	int a[10];
//	//printf("main:%d\n",sizeof(a));
//
//	fun(a);
//	printf("%s", q);
//    system("pause");
//  return 0;
//}


//1.��������sizeof�����У�ʱ���������� 2. ��ȡ��ַ������ʱ��������������
//������2��֮�� ��������Ԫ�� ��ַ

int main()
{
   int arr[10];

   printf("%p\n",arr);

   printf("%p\n",arr + 1);//��ָ��+1 <=>���� ��ָ���͵Ĵ�С ��intΪ4

   printf("%p\n",&arr + 1); //ָ����������+40



  return 0;
}