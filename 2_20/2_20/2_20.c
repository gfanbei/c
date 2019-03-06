# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>


//所有的数组传参，都退化成指针(降维只发生数组传参)
//调用函数时形成栈帧，返回函数时对应函数栈帧释放，一个函数一个栈帧
//char *q = NULL;
//void fun(int a[10])//int a[] ,int *a ,int a[10]
//{
//	//printf("fun: %d\n",sizeof(a));
//    //char  * p = "helo word";//位于字符常量去，只能读，不能被写.存的是该字符串的首地址（最小地址）
//    //*p = 'h';                 //函数返回时，依然存在
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


//1.数组名在sizeof（）中，时代表数组名 2. 在取地址数组名时代表，整个数组名
//除以上2点之外 都代表首元素 地址

int main()
{
   int arr[10];

   printf("%p\n",arr);

   printf("%p\n",arr + 1);//对指针+1 <=>加上 所指类型的大小 ，int为4

   printf("%p\n",&arr + 1); //指向整个数组+40



  return 0;
}