# define _CRT_SECURE_NO_WARNINGS 2

# include <stdio.h>
# include <string.h>



//int my_strlen(char* str)//非递归实现strlen
//{
//  int count = 0;
//  while(*str != '\0')//注意\0在条件判断时用单引号
//  {
//     count ++;
//	    str ++;
//  }
//   return count;
//}

//
//int my_strlen(char* str)//递归实现strlen；不创建临时变量
//{
//  if(*str != '\0')
//	  return 1 + my_strlen(str+1);
//  else
//	  return 0;
//}
//int main()
//{  char arr[]="abcdef";
//   
//
//
//
// printf("%d\n",my_strlen(arr));
// //my_strlen("abcdef");
//// 1+my_strlen("bcdef");
// //1+1+my_strlen("cdef");
// //1+1+1+1+1+my_strlen("");
////1+1+1+1+1+0;
// return 0;
//
//}

//int fac(int n)
//{
//   if(n <= 1)
//	   return 1;
//   else 
//	   return n * fac(n - 1);
//  
//}
//int main()//递归实现 n的阶乘
//{
//  int n = 0;
//  int ret = 0;
//  scanf("%d",&n);
//  
//  ret = fac(n);
//  printf("%d\n",ret);
//
// return 0;
//}


//int fab(int n)//当n太大时 计算时间过长，缺陷
//{
//   if(n <= 2)
//	   return 1;
//   else 
//	   return fab(n - 1) + fab(n - 2);
//  
//}

//int fab(int n)
//{
//   int a = 1;
//   int b = 1;
//   int c = 0;
//  if (n <=2)
//  return  1;
// else
// {   int i = 0;
//	 for( i=0;i<n-2;i++)
//	 {c= a+b;
//      a = b;
//      b = c;
//   }
// }
//  return c;
//}


//int fab(int n)
//{
//   int a = 1;
//   int b = 1;
//   int c = 1;
//   int i = 0;
//	 for( i=0;i<n-2;i++)
//	 {c= a+b;
//      a = b;
//      b = c;
//     }
// 
//  return c;
//}
//
//int main()//斐波那契数实现
//{
//  int n = 0;
//  int ret = 0;
//  scanf("%d",&n);
//  
//  ret = fab(n);
//  printf("%d\n",ret);
//
// return 0;
//}


//int main()
//{  int i = 0;
//   int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//   int sz = sizeof(arr)/sizeof(arr[0]);
//   for(i=0; i<=sz; i++)
//	   //printf("%d\n",*(arr+i));
//       //printf("%d\n",arr[i]);
//	  // printf("%d\n",i[arr]);
//        //arr[i]<==>*(arr+i)<==>*(i+arr)<==>i[arr]
//	  // printf("&arr[%d]=%p\n",i,&arr[i]);//打印地址
//
//  return 0;
//}


//int main()
//{ int arr[3][5] = {{1},{2},{3}};
//   int i = 0;
//   int j = 0;
//  // for(i=0; i<3; i++)
//     for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)//计算二维数组长度
//   {
//   //  for(j=0; j<5; j++)
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)//计算二维数组宽度
//		{
//			printf("&arr[%d][%d]= %p\n ",i ,j,&arr[i][j]);
//		}
//   
//   }
//
// return 0;
//}

//int main()
//{ int arr[3][5] = {{1},{2},{3}};
//   int i = 0;
//   int j = 0;
//   int* p = &arr[0][0];
//   for(i=0; i<15; i++)
//   {
//   
//		printf("%d ",*(p+i));
//		
//   
//   }
//
// return 0;
//}
void bubble_sort(int arr[],int sz)//冒泡算法
{
   int i = 0;
   int flag = 0;//优化，是有序的，不用执行
    for(i=0; i<sz-1; i++)
	{
	  int j = 0;
	  for(j=0; j<sz-1-i; j++)
	  {
	    if(arr[j]>arr[j+1])
		{
			int tep = arr[j+1];
             arr[j+1] = arr[j];
			 arr[j] = tep;
			 flag = 1;
		}
	  }
	
	
       if(flag==0)
	    break;
   } 
}
void print_arr(int arr[], int sz)
{
  int i = 0;
  for(i=0; i<=sz; i++)
  {
    printf("%d ", arr[i]);
  }

}
int main()//冒泡排序之降序
{   //int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    print_arr(arr,sz);

	return 0;
}