# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>
//int main()//字符移动，两侧向中间
//{
//  char arr1[]="welcome to beijing!!!";
//  char arr2[]="##################!!!";
//  int left = 0;
//  int right = strlen(arr1)-1;
//  while(left<=right)
//  {
//	 
//      arr2[left]=arr1[left];
//      arr2[right]=arr1[right];
//	  printf("%s\n",arr2);
//	  Sleep(1000);//延时1s
//      system("cls");//清屏
//      left++;
//	  right--;
//  }
//		
//	return 0;
//}



//int main()//模拟用户登录情况，智能登录3次，
//             只允许输入3次，若输入正确，提示登录成功；若3次均错误，则退出程序
//{
//  int i = 0;
//  char passward[] = {0};
//  for(i=0;i<3;i++)
//  {
//    printf("请输入密码>");
//	scanf("%s",passward);
//		if(strcmp(passward,"123456") == 0)
//		{
//		  break;
//		
//		}
//		else
//		{
//		 printf("密码错误，请重新输入!\n");
//		
//		}
//  }
//	if(i>=3)
//	{
//	 printf("3次密码输入错误，退出程序\n");
//	
//	}
//	else
//	{
//	 printf("密码正确，登录成功\n");
//	
//	}
//	
//	
//	return 0;
//}
//int fun(int x)
//{
//	int sum = 1,i = 0;
//	//scanf("%d",&x);
//	for(i=1;i<=x;i++)
//	{
//	  sum*= i;
//	
//	}
//	
//	//printf("%d",sum);
//	return sum;
//}
//int main ()//1到n阶乘求和
//{   int j=1,sum=0;
//    int num=1,n=3;
//	for(j=1;j<=n;j++)
//	{
//	num *= j;
//	sum += num;
//	
//	}
//	printf("%d",sum);
//	return 0;
//}