# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>

/////����ָ���ʹ��///////


//int main()
//{
//      int arr[8];  //����������� ���鱾�������������Ԫ�صĸ���ͬʱ������
//      char arr[10];
//      int (*p)[10] = &arr;
//      int (*p)[10] = arr;
// 
//      return 0;
//}


//void my_fun(int arr[10][5],int num)//���鴫��ʱ��ֻ�о��������������ά�ȿ���ʡ��
//void my_fun(int arr[][5],int num)
 // void my_fun(int (*arr)[5],int num)//(����֪�ϣ����е�����2��3��4ά���ɿ���һά����)
  void my_fun(int (*arr)[5][3],int num)//���鴫��ʱ����ά��ָ���ڲ�Ԫ�����͵�ָ��

{
  
}
int main()
{
   int arr[10][5][3];
   int num = sizeof(arr)/sizeof(arr[0]);

   my_fun(arr,num);

   return 0;

}