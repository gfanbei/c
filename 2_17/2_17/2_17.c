# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <windows.h>
# include <string.h>



//int main()//������С���ж�
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

//int check_sys()//������С���ж�
//{
//   union 
//   {
//     int i;//4�ֽ�
//	 char c;//1�ֽ�
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
//     printf("С��\n");
//   
//   }
//   else
//   {
//    printf("���\n");
//   
//   }
//
//  return 0;
//}



//union un {   //�����壬���ÿռ�
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
//	printf("%p\n",&obj);  // 3����ַ��ȫһ��
//	printf("%p\n",&(obj.x));
//	printf("%p\n",&(obj.c));
//
//  
//  
//	return 0;
//}


//�������ڴ��еĴ洢����

////1.
//int main()//
//
//{
//  char a = -1;
//  signed char b = -1;
//  unsigned char c = -1;//����д�� Դ�� ���� ���� ��1���������bitλ����ԭ��������ӣ�2���ٸ���%d��ȡ���ȿ�����λ��
//  printf("%d,%d,%d\n",a,b,c);//-1 -1 255        -1  Դ��1000 0001  ����1111 1110  ����1111 1111
//    4�ֽڹ�32λ ����ԭ�� ���֮��00000000 00000000 00000000 11111111  -> 11111111 = 255
// return 0;
//}

//2.
//int main()//
//
//{
//  char a = -128; //�з�������
//  
//  printf("%u\n",a);
//  
// return 0;
//}

//3.
//int main()//
//
//{
//  //char a = 128;//Խ��-128��1111 1111 1111 1111 1111 1111 1000 0000��-127
//  //unsigned char a = 128;//128   unsigned��Χ 0-2^N-1
//  signed char a = 128;//�з�������
//  //printf("%u\n",a);
//   printf("%d\n",a);//-128  ,�з���λ//bitλ��� ������
//  
// return 0;
//}


//4.
//int main()
//{
//  int i = -20;//Դ��10000000 00000000 00000000 00010100 ���� 11111111 11111111 11111111 11101011 ����11111111 11111111 11111111 11101100
//  unsigned int j = 10;//00000000 00000000 00000000 00001010
//  printf("%d\n",i+j);//��������ʽ���㣬����ʽ��Ϊ�з�������
//                //����Դ��
//
//return 0;
//}



//5.
//int main()//��ѭ��
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
//	char a[1000];//��Χ-128-127
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
	printf("%d\n",a);//���ֽ��������⿴��

 return 0;
}


//8.
//int main()//��ѭ��
//{  
//	unsigned char i = 0;//��Χ0-255
//	for(i=0; i<=255; i++)
//	{
//	  printf("hello word\n");
//
//	}
//
// return 0;
//}