# define _CRT_SECURE_NO_WARNINGS 2

# include <stdio.h>
# include <windows.h>
# include <string.h>
# include <assert.h>

//int Reverse(int x)//��һ�������� ��������ʽ��ת�� �����
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
//    int x = 1234��//1234  -> 1260388352
//    int y = Reverse(x);
//	printf("%d %d",x ,y);
//
//	system ("pause");
//
//    return 0;
//}



//int  Avg(int x,int y) //��ʹ�ã�a+b��/2 ��ʽ��ƽ��ֵ
//{
//     return (x & y)+((x ^ y) >> 1);//������ͬ���ټ��� ��ͬ���ֵ�һ��
//                               �����λ
//}
//int main()
//{
//    printf("%d",Avg(10,20));
//    system ("pause");
//    return 0;
//}





//int Findsign(int a[], int num)//һ��������ֻ��һ�����ֵ������֣�����ɶԳ��֣�
//{   	                          //�ҳ�����������
//	  int i = 1;
//      int r = a[0];
//	  assert(a);//���棬����Ϊ��
//	  assert(num > 0);//������һ����
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
//	int a[] = {1,2,3,4,5,6,9,1,2,3,4,5,6,};//һ������0���=����
//	                                         //��ͬ�����Ϊ0
//	int num = sizeof(a)/sizeof(a[0]);
//
//	int data = Findsign(a,num);
//	printf("data is %d",data);
//    system("pause");
//    return 0;
//}



void ReverseStringCode(char *start, char *end)//һС���ַ���ת
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

void ChangeString(char a[])//�Կո񻮷֣���η�ת
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
     ReverseStringCode(prev, p - 1);//��ת���һ���ַ�
 
	 ReverseStringCode(a, p - 1);//���巭ת
}



 int main()//  ���ַ���  student a am i   ��תΪ  i  am a student
 {
       char a[] = "student a am i";
	   printf("before: %s\n",a);

	   ChangeString(a);
	   
        
	   printf("after: %s\n",a);
	   
       system("pause");

       return 0;
 
 }