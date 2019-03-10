# define _CRT_SECURE_NO_WARNINGS 2

# include <stdio.h>
# include <windows.h>
# include <string.h>
# include <assert.h>

//int Reverse(int x)//将一个整数的 二进制形式翻转， 并输出
//{
//  
//   int top = sizeof(int) * 8;
//   int flag = 1;
//   int i = 0;
//   int y = 0;
//   while(i < top)
//   {
//      if(x & (flag << i) )
//	  {
//	     y |= (flag <<(31 - i));
//	  }
//      i ++;
//   
//   }
//  
//     return y;
//
//}
//
//
//int main()
//{
//    int x = 1234；//1234  -> 1260388352
//    int y = Reverse(x);
//	printf("%d %d",x ,y);
//
//	system ("pause");
//
//    return 0;
//}



//int  Avg(int x,int y) //不使用（a+b）/2 形式求平均值
//{
//     return (x & y)+((x ^ y) >> 1);//保留相同，再加上 不同部分的一半
//                               不会进位
//}
//int main()
//{
//    printf("%d",Avg(10,20));
//    system ("pause");
//    return 0;
//}





//int Findsign(int a[], int num)//一组数据中只有一个数字单独出现，其余成对出现，
//{   	                          //找出单独的数字
//	  int i = 1;
//      int r = a[0];
//	  assert(a);//警告，不能为空
//	  assert(num > 0);//至少有一个数
//      
//   
//	while(i < num)
//	{
//	  r ^= a[i];
//	  i ++;
//	
//	}
//    return r;
//
//}
//
//int  main()
//{
//	int a[] = {1,2,3,4,5,6,9,1,2,3,4,5,6,};//一个数与0异或=本身
//	                                         //相同数异或为0
//	int num = sizeof(a)/sizeof(a[0]);
//
//	int data = Findsign(a,num);
//	printf("data is %d",data);
//    system("pause");
//    return 0;
//}



void ReverseStringCode(char *start, char *end)//一小段字符翻转
{
   assert(start);
   assert(end);

   while(start < end)
   {
      *start ^= *end;
	  *end ^= *start;
	  *start ^= *end;
	  start ++;
	  end --;
   
   }


}

void ChangeString(char a[])//以空格划分，逐段翻转
{
      
	//assert(a);

	 char *p = a;
	 char *prev = p;
	
	 while(*p)
	 {
	    if(*p == ' ')
		{
		 ReverseStringCode(prev,p - 1);
		 p ++;
		 prev = p;

		 continue;

		}

	   p ++;

	 }
     ReverseStringCode(prev, p - 1);//翻转最后一个字符
 
	 ReverseStringCode(a, p - 1);//整体翻转
}



 int main()//  将字符串  student a am i   翻转为  i  am a student
 {
       char a[] = "student a am i";
	   printf("before: %s\n",a);

	   ChangeString(a);
	   
        
	   printf("after: %s\n",a);
	   
       system("pause");

       return 0;
 
 }