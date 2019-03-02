# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <string.h>
//int main()
//{
//  
// // printf("%c\n",tolower('A'));//字符大小写转换
//	//printf("%c\n",toupper('a'));
//	
//	char arr1[] = "hello world";//内存设置函数
//	memset(arr1, 'a', 5);
//	printf("%s\n", arr1);
//	
//	
//	return 0;
//}

//int get_max(int x,int y)
//{
//
//	return x>y?x:y;
//}
//int main()//两个数求大小，用函数
//{
//   int a = 10;
//   int b = 20;
//   int max = get_max(a,b);
//   printf("%d\n",max);
//
//
//
//  return 0;
//
//}
//void swmp1(int c,int d)
//{ 
//  int tmp = c;
//  c = d;
//  d = tmp;
//}
//void swmp(int *c,int *d)
//{ 
//  int tmp = *c;
//  *c = *d;
//  *d = tmp;
//}
//
//int main()//两个变量内容互换
//{
//   int a = 10;
//   int b = 20;
//   printf("a=%d b=%d\n",a,b);
//   swmp(&a,&b);
//   //swmp1(a,b);
//   printf("a=%d b=%d\n",a,b);
//
//
//   return 0;
//}


//# include <math.h>
//int is_prime(int x)
//{
//  int i=0;
//  for(i=2;i<=sqrt(x);i++)//优化：一个数n可写成A与B相乘，其中必有一个小于开平方n
//  {
//    if(x%i==0)
//	
//	  return 0;//直接返回，后面语句不执行
//	
//	
//  }
//   return 1;
//
//
//}
//int main()//素数应用场景
//{ int i = 0;
//  int count=0;
//  for(i=100;i<=200;i++)
//  {
//   if(is_prime(i)==1)
//   {
//	   count++;
//      printf("%d",i);
//   }
//  


//  }
//  printf("\ncount=%d\n",count);
// return 0;
//}

//int Rnian(int x)
//{
//  return (((0 == x%4)&&(0 != x%100))||(0 == x%400));//优化
//  /*if(((0 == x%4)&&(0 != x%100))||(0 == x%400))
//  { return 1;
//  }
//  else return 0; */
//
//
//}
//int main()//瑞年判断场景
//{
//  int year = 0;
//  int count = 0;
//  for(year=1000;year<=2000;year++)
//  {
//   if(Rnian(year))
//   {
//	   count++;
//     printf("%d ",year);
//   }
//  
//  }
//
//  printf("\ncount=%d\n",count);
//
//	return 0;
//}



//int binary_search (int arr[], int key, int left, int right)
//{
//	while(left<=right)
// {
//   int mid = left + (right-left)/2;//中间下标求法
//   if(arr[mid]<key)
//   {
//    left = mid + 1;
//  
//   }
//   else 
//       if(arr[mid]>key)
//   {
//     right = mid - 1;
//    
//    }
//   else 
//   { 
//      return arr[mid];//注意返回的是数组中的值，不是下标
//	  //return mid + 1;
//   }
// }
//	return -1;
//} 
//int main()//实现一个整形有序数组的二分查找
//{  
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key =6;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;//最右边下标求法
//	int ret = 0;
//	ret = binary_search (arr,key,left,right);
//	if(ret == -1)
//	{
//	  printf("找不到\n");
//	
//	}
//	else 
//	{
//		printf("找到了:%d\n",ret);
//	}
//
//   return 0;
//}



//void Inc(int* x)
//{
//  (*x)++;
//
//}
//int main()//编写一个函数，实现：每调用一次，变量加1
//{
//	int num = 0;
//	Inc(&num);
//	printf("%d\n",num);
//    Inc(&num);
//	printf("%d\n",num);
//	Inc(&num);
//	printf("%d\n",num);
//   
//	return 0;
//}


//int main()//链式访问；把一个函数的返回值作为，参数给另一个函数
//{
// /* int len = 0;
//  len = strlen("abcdef");
//  printf("%d\n",strlen("abcdef"));*/
//  
//
//	//char arr1[20] = {0};
//	//char arr2 [20]= "abcdef";
//	//strcpy(arr1,arr2);//给的是arr1的首地址
//	//printf("%s\n",strcpy(arr1,arr2));
//	//printf("%d\n",strlen(strcpy(arr1,arr2)));
//	printf("%d",printf("%d",printf("%d",43)));//printf返回的是打印字符的个数
//
//   return 0;
//}


//函数声明，函数位于主函数之后
//# include "Add.h"
//# pragma comment(lib,"Add.lib ")
//
//int main()//使用封装的裤函数
//{ int a = 10;
//  int b = 20;
//  int sum = Add(a,b);
//   
//  printf("%d\n",sum);
//
// return 0;
//}

void print(int n)
{
  if(n>9)
	  print(n/10);
	  printf("%d\n",n%10);


}
int main()
{  
  unsigned int n = 0;
  scanf("%d",&n);
  print(n);

 return 0;

}