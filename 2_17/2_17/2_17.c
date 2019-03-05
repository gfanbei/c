# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>
# include <string.h>



//int main()//机器大小端判断
//{
//    int x = 1;
//
//	printf("%d\n",(*(char *)&x));
//
//
//
//  return 0;
//}



//int check_sys()
//{
//   int i = 1;
//
//   return (*(char *)&i);
//
//}

//int check_sys()//机器大小端判断
//{
//   union 
//   {
//     int i;//4字节
//	 char c;//1字节
//   
//   }un;
//
//   un.i = 1;
//
//   return un.c;
//}

//int main()
//{
//   int ret = check_sys();
//    
//   if(ret == 1)
//   {
//     printf("小端\n");
//   
//   }
//   else
//   {
//    printf("打端\n");
//   
//   }
//
//  return 0;
//}



//union un {   //联合体，共用空间
//    
//	int x;
//    char c;
//};
//
//
//int main()
//{  
//	union un obj ;
//
//	printf("%p\n",&obj);  // 3个地址完全一样
//	printf("%p\n",&(obj.x));
//	printf("%p\n",&(obj.c));
//
//  
//  
//	return 0;
//}


//数据在内存中的存储问题

////1.
//int main()//
//
//{
//  char a = -1;
//  signed char b = -1;
//  unsigned char c = -1;//依次写出 源码 反码 补码 ：1）整形添加bit位根据原生类型添加，2）再根据%d读取（先看符号位）
//  printf("%d,%d,%d\n",a,b,c);//-1 -1 255        -1  源码1000 0001  反码1111 1110  补码1111 1111
//    4字节共32位 根据原生 添加之后00000000 00000000 00000000 11111111  -> 11111111 = 255
// return 0;
//}

//2.
//int main()//
//
//{
//  char a = -128; //有符号类型
//  
//  printf("%u\n",a);
//  
// return 0;
//}

//3.
//int main()//
//
//{
//  //char a = 128;//越界-128（1111 1111 1111 1111 1111 1111 1000 0000）-127
//  //unsigned char a = 128;//128   unsigned范围 0-2^N-1
//  signed char a = 128;//有符号类型
//  //printf("%u\n",a);
//   printf("%d\n",a);//-128  ,有符号位//bit位填充 等问题
//  
// return 0;
//}


//4.
//int main()
//{
//  int i = -20;//源码10000000 00000000 00000000 00010100 反码 11111111 11111111 11111111 11101011 补码11111111 11111111 11111111 11101100
//  unsigned int j = 10;//00000000 00000000 00000000 00001010
//  printf("%d\n",i+j);//按补码形式运算，最后格式化为有符号整数
//                //最终源码
//
//return 0;
//}



//5.
//int main()//死循环
//{
//  
//
//	unsigned int i;
//	for(i=9; i>=0;i--)
//	{
//	  //printf("%u\n",i);
//	  printf("%x\n",i);
//	  Sleep(500);
//	}
//
// return 0; 
//} 


////6.
//int main()
//{  
//	char a[1000];//范围-128-127
//	int i;
//	for(i=0; i<300; i++)
//	{
//	
//	 a[i] = -1 - i;
//     printf("%d:%d\n",i, a[i]);
//	}
//
//	printf("strlen:%d",strlen(a));
//
// return 0;
//}

//7.
int main()//
{  
	short num = 32767;
	short int a = num + 1;
	printf("%d\n",a);//按字节提升问题看待

 return 0;
}


//8.
//int main()//死循环
//{  
//	unsigned char i = 0;//范围0-255
//	for(i=0; i<=255; i++)
//	{
//	  printf("hello word\n");
//
//	}
//
// return 0;
//}