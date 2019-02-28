# define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <math.h>




//int main()
//{
//int year=0,count=0;
//  for(year=1000;year<=2000;year++)
//  {
//   if(year%4==0)
//   {
//     if(year%100!=0)
//	 {count++;
//		 printf("%d ",year);
//	 }
//   }
//  if(year%400==0)
//  {
//   count++;
//   printf("%d ",year);
//   
//  }
//  
//  }
//
//printf("count=%d",count);
//
// return 0;
//}



//int main()//求1000到2000之间的瑞年
//{
// int year=0,count=0;
// for(year=1000;year<=2000;year++)
// {
//   if((year%4==0)&&(year%100!=0)||(year%400==0))
//   { printf("%d ",year);
//       count++;
//   }
// }
// printf("\ncount=%d\n ",count);
// return 0;
// }


//int main()//求100到200之间素数个数
//{
//int i=0,count=0;
//for(i=100;i<=200;i++)
//{
//  int j=0;
//  for(j=2;j<=i-1;j++)
//  {
//    if(i%j==0)
//		break;
//
//  }
// if(j>=i-1)
// {
// count++;
// printf("%d ",i);
// }
//
//}
//
// printf("%d ",count);
//
//
//return 0;
//}
//int main()//打印1到9乘法表
//{
// int i;
// for(i=1;i<=9;i++)
// {
//   int j;
//   for(j=1;j<=i;j++)
//   {
//	   printf("%d*%d=%-2d ",i ,j,i*j);
//   }
//printf("\n");
// }
// 
//return 0;
//}