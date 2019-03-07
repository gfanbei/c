# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>

/////数组指针的使用///////


//int main()
//{
//      int arr[8];  //数组的类型由 数组本身的类型与数组元素的个数同时决定。
//      char arr[10];
//      int (*p)[10] = &arr;
//      int (*p)[10] = arr;
// 
//      return 0;
//}


//void my_fun(int arr[10][5],int num)//数组传参时，只有距离数组名最近的维度可以省略
//void my_fun(int arr[][5],int num)
 // void my_fun(int (*arr)[5],int num)//(在认知上，所有的数组2，3，4维都可看做一维数组)
  void my_fun(int (*arr)[5][3],int num)//数组传参时，降维成指向内部元素类型的指针

{
  
}
int main()
{
   int arr[10][5][3];
   int num = sizeof(arr)/sizeof(arr[0]);

   my_fun(arr,num);

   return 0;

}