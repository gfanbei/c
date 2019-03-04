# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
//
//
//int main()
//{ int arr[10] = {0};
//   //arr 数组首元素地址
//   //printf("%d\n",sizeof(arr));//结果为40，不是4，sizeof（数组名）数组名表示整个数组，
//   sizeof(&arr);//数组名是整个数组，除以上2种情况之外，都为首元素地址
//
//  return 0;
//}
 /* int main()
  {
    int a = 10;
	int* p = &a;
	int* *pp = &p;
	int** *p = &pp
  }*/

//void print(int* *ch,int sz)//二级指针
//{ int i = 0;
//  for(i=0; i<sz; i++)
//	{
//	  printf("%s\n",ch[i]);//*(ch+i)
//	
//	}
//  
//
//}
//int main()
//{   // int arr[10];
//    //char ch[5];
//	//指针数组
//	//int *arr[5];
//	char* ch[3] = {"abcdef","zhangsan","lisi"};
//	int i = 0;
//	int sz = sizeof(ch)/sizeof(ch[0]);
//	print(ch,sz);
//	//for(i=0; i<sz; i++)
//	//{
//	//  printf("%s\n",ch[i]);//*(ch+i)
//	//
//	//}
//
//  return 0;
//}


//int main()
//{ 
//	int arr1[]= {1,2,3,4};
//	int arr2[]= {2,3,4,5};
//	int arr3[] = {3,4,5,6};
//     //指针数组
//	int* arr[3] = {arr1, arr2, arr3};
//
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//	 for(j=0; j<4; j++)
//	 {
//	   printf("%d",arr[i][j]);
//	         //*(*(arr+i)+j)
//
//	 }
//	printf("\n");
//	}
//
//
//
// return 0;
//}


//typedef struct Stu//结构体类型
//{
//  char name[20];
//  short int age;
//  char sex[5]; 
//
//}Stu;
//
//int main ()
//{
//	Stu s = {"zhangsan",20,"男"}; //创建一个结构体变量s，并初始化
//	printf("%s %d %s\n", s.name,s.age,s.sex);
//	strcpy(s.name,"lisi");//修改或复制时用strcpy
//	printf("%s %d %s\n", s.name,s.age,s.sex);
//
//
//  return 0;
//}



//struct S
//{
//   char arr[1000];
//   int num;
//
//};
//
//void print1(struct S ss)
//{
//  printf("%s %d\n",ss.arr,ss.num);
//}
//void print2(struct S *ps)//通过解引用打印，优化，效率高
//{
//  printf("%s %d\n",ps->arr,ps->num);//->通过ps所存的地址，找到它所在对象的成员
//
//
//}
//int main()//结构体传参
//{
//	struct S s = {"zhishi",100};//创建一个结构体变量是s，并初始化
//	print1(s);
//	print2(&s);//
//
//	return 0;
//
//}



//int main()//死循环 （degug下），release下不死循环
//{   int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%p\n", &i);
//    printf("%p\n", arr);
//     
//
// /*    for(i=0; i<=12; i++)//vs下<=11报错，vc6.0下10 11 12 都报错
//	 {
//	    arr[i] = 0;
//	    printf("hehe\n");
//	 
//	 }*/
//	return 0;
//}



//void test2()
//{
//   printf("hehe\n");
//}
//
//void test1()
//{
//   test2();
//}
//
//void test()
//{
//   test1();
//}
//int main()//堆栈调试
//{
//   test();
//
//  return 0;
//}



//int main()//1到n的阶乘求和
//{  
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	   ret *=i;
//	  sum += ret;
//	}
//   printf("%d\n",sum);
//  return 0;
//}