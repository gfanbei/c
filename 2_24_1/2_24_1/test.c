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
//  unsigned int flag = 1;//����1����λ�����㣬���ҵ��󣬲�����
//  
//  int top = sizeof(x_) * NUM;//��������ʮ����ת��Ϊ�����Ƶ�λ��
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

//int main()//дһ���������ز�����������1�ĸ���
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




//void printBits(unsigned int x)// ��ȡһ�����������е�ż��bitλ��������bitλ�����������
//{  
//	//ż�� ,�ȿ���һ������λ���ڴ�ӡ����
//	unsigned int flag = 0x80000000;//  10000000000000000000000000000000 �����λ��ʼ��
//    printf("ż��bits ");
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
//	  printf("����bits ");
//
//   //����
//     flag = 0x40000000;//�Ӵθ�λ��ʼ��������1�����������2λ 
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



//void BinaryBits(unsigned int x)//��һ�������Ķ�����λ�� ���
//{
//    unsigned int flag = 0x80000000;//ע��Ϊ�޷�������
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




//int DiffBits(unsigned int x,unsigned int y)//ʵ������int��32��λ����m��n�Ķ����Ʊ���У�
//{                                //����ͬ��bitλ��
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




void Findkiller()//�����жϣ�Ѱ�����֣�a˵�����Լ���b˵��c��c˵��d��d˵c��˵����֪��3����˵���滰��1�˼ٻ�
{
   char killer = 'A'; //ÿ�˱���һ�γ䵱���֣�
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