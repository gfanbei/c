# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>
# include <string.h>

//# define NUM 8

// version 2
//int CountBits(unsigned int x_)
//{
//  int count = 0;
//  while(x_)
//  {
//   x_ = x_ & (x_ - 1);
//   count ++;
//
//  }
//
//  return count;
//}



// version 1
//int CountBits(unsigned int x_)
//{
//  unsigned int flag = 1;//利用1进行位与运算，从右到左，并记数
//  
//  int top = sizeof(x_) * NUM;//计算所传十进制转化为二进制的位数
//  int count = 0;
//  while(top)
//  {
//    if(x_ & flag)
//     {
//        count++;
//	
//     }
//        flag <<= 1;
//		top--;
//  }
//  return count;
//}

//int main()//写一个函数返回参数二进制中1的个数
//{
//  unsigned int data;
//	int count = 0;
//	printf("Please Enter: ",&data);
//	scanf("%d",&data);
//	
//	count = CountBits(data);
//	printf("%d bit 1 num is: %d\n",data, count);
//	
//    system("pause");
//
//
//    return 0;
//}




//void printBits(unsigned int x)// 获取一个二进制数中的偶数bit位，和奇数bit位，并输出序列
//{  
//	//偶数 ,先考虑一共多少位，在打印方向
//	unsigned int flag = 0x80000000;//  10000000000000000000000000000000 从最高位开始，
//    printf("偶数bits ");
//    while(flag){
//	   if(x&flag){
//	    printf("1");
//	     
//	   }
//	   else{
//	    printf("0");
//	   }
//	
//	    flag >>= 2;
//	}
//
//	  printf("\n");
//
//	  printf("奇数bits ");
//
//   //奇数
//     flag = 0x40000000;//从次高位开始，依次用1与运算后，右移2位 
//	 while(flag) {
//	    if(x&flag){
//	    printf("1");
//	     
//	   }
//	     else{
//	    printf("0");
//	   }
//	   flag >>= 2;
//     
//	 }
//       printf("\n");
//}
//
//int main() //
//{
//    unsigned int data;
//	printf("Please Enter: ",&data);
//	scanf("%d",&data);
//	
//	printBits(data);
//	
//    system("pause");
//    return 0;
//}



//void BinaryBits(unsigned int x)//将一个整数的二进制位数 输出
//{
//    unsigned int flag = 0x80000000;//注意为无符号整型
//	while(flag){
//	   if(x & flag){
//	   
//	    printf("1");
//	   }
//	   else{
//	    printf("0");
//	   
//	   }
//	   flag >>= 1;
//	}
//
//       printf("\n");
//}
//
//int main ()
//{
//    unsigned int data;
//	printf("Please Enter: ",&data);
//	scanf("%d",&data);
//	 
//	BinaryBits(data);
//	
//    system("pause");
//  
//
//
//   return 0;
//}




//int DiffBits(unsigned int x,unsigned int y)//实现两个int（32）位整数m，n的二进制表达中，
//{                                //不相同的bit位数
//	int  res = x ^ y;
//    return CountBits( res);
//
//}
//int main()
//{
//   
//    unsigned int x,y;
//	int count = 0;
//	printf("Please Enter: ");
//	scanf("%u%u",&x,&y);
//	 
//	count = DiffBits(x,y);
//	printf("%u %u diff: %d",x,y,count);
//    system("pause");
//
//    return 0;
//}




void Findkiller()//文字判断，寻找凶手，a说不是自己，b说是c，c说是d，d说c胡说，已知有3个人说了真话，1人假话
{
   char killer = 'A'; //每人遍历一次充当凶手，
   for(; killer <= 'D'; killer++)
   {
     if((killer != 'A')+(killer == 'C')+\
		 (killer == 'D')+(killer != 'D')== 3)
	 {
	 
		 printf("killer: %c\n",killer);
	 }
   
   }
 

}
int main()
{ 
     Findkiller();

	 system("pause");
     return 0;
}