# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <string.h>
# include <windows.h>
# include <assert.h>
#pragma  warning(disable:4996)




//void Exchange(int a[],int sz)//�ֱ�����˿�ʼ��ǰ�벿���ж�ż��������������
//{                                 //��벿���ж�����������ż��
// 
//   int start = 0;  //��ʼλ
//   int end =sz - 1;
//	   
//
//    assert(a);
//    assert(sz > 0);
//  
//
//   while(start < end)
//   {
//	   while(start < end && (a[start] & 1)){ //ͬ1���������㣬ע�����������
//	
//	     start ++;
//	   }
//	 
//	   while(end > start && (!(a[end] & 1))){
//   
//         end --;
//	   }
//   
//     if(start < end)
//	 {
//	    a[start] ^= a[end];//��ż����
//		a[end] ^= a[start];
//		a[start] ^= a[end];
//	 
//	 }
//
//   }
//
//
//}
//void show(int a[],int sz)
//{
//
//	int i = 0;
//	assert(a);
//  
//	for(;i < sz; i ++)
//	{
//	 printf("%d",a[i]);
//	   
//	}
//
//	printf("\n");
//}
//
//int main() //����һ�����飬����λ��ǰ�벿�֣�ż��λ�ں�벿��
//{
//	int a[] ={1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	show(a,sz);
//	Exchange(a,sz);
//	show(a,sz);
//
//	system("pause");
//
//   return 0;
//}



//int main()    //���Ͼ��󣬲������֣�ÿ�д����ҵ�����ÿ�д����ҵ���
//{
//	int yang[4][4] = {
//		{1,2,3,4},
//		{2,3,4,5},
//		{3,4,5,6},
//		{4,5,6,7},
//	
//	};
//	int sz = sizeof(yang) / sizeof(yang [0]);//����һ��������
//
//	FindData(yang, sz, 5); //���� ������  ����  ��Ѱ������
//
//    
//
//	system("pause");
//
//    return 0;
//}




//void FindData(int (*a)[4], int row, int x)//�����Ͻǵ�Ԫ����Ϊ�Ƚ϶��������ų� �к� ��
//{
//     
//	 
//	 int row_ = 0;
//	 int col_ = 3;
//
//      assert(a);
//
//	 while(row_ < row && col_ >= 0)
//	 {
//		 if(x < a[row_][col_]){
//		    col_ --;
//		 
//		 }
//		 else if(x > a[row_][col_]){
//		     row_ ++;
//		 }
//	 
//		 else {
//
//			 printf("row: %d col: %d\n",row_ +1 ,col_ +1 ); //
//			 return ;
//		 }
//	 }
// 
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


/* void LeftMove(char *a, int len, int k)//�ַ�������k������ ABCDEF  -> ����2�� CDEFAB
{
    //version 1
	 //  assert(a);
	 int num = k % len;//��Ч����

	 //version 2
     ReverseStringCode(a, a + num - 1); // �ֲ���ת֮  ǰ�벿�֣�abcdef  12345 -> fedcba  54321 -> 12345 abcdef
	 ReverseStringCode(a + num , a + len -1);//�ֲ���ת֮  ��벿�֣�
	 ReverseStringCode(a , a +len -1);//���巭ת

       /* int i = 0;
		for(; i <num ; i++)//���� nun��
		{
		  //LEFT ONE        
			int tep = a[0];   
			int j = 1;
			for(; j< len ;j ++)
			{
			   a[j -1] = a[j]; 
			
			}

		   a[j - 1] = tep;
		
		}  


}  */



//  version 3

void LeftMove(char *a, int len, int k)//�ַ�������k������ ABCDEF  -> ����2�� CDEFAB
{
    
    int num = k % len;
  
	char* p = (char *)malloc(2 * len + 1); //����˫���ַ��ռ�
	  assert(a);

	strcpy(p , a);

	strcat(p , a);//�ַ����Ӻ���

	strncpy(a , a + num , len);//Ҫ���������ַ������Լ����Ŀ�ʼ �� Ҫ�����ĳ���

	free(p); //�ͷ�����Ŀռ�

       

}


//int main() 
//{
//    char a[] = "abcdef12345";
//	int len = strlen(a);
//    int k = 5;
//    LeftMove(a, len, k);
//
//	printf("left down: %s\n",a);
//
//    system("pause");
//
//    return 0;
//}

int Myadd(int x, int y)
{
     return   x + y; 
 
}
int Mysub(int x, int y)
{
     return   x - y; 
 
}
int Mymul(int x, int y)
{
     return   x * y; 
 
}
int Mydiv(int x, int y)
{  
	if(y == 0)
	{
	  printf("div zero\n");
	  return  -1;
	}
     return   x / y; 
 
}



 Menu()
{
	printf("#############################");
	printf("###1. Add            2.Sub###");
	printf("###3. Mul            4.Div###");
	printf("###                  0.Exit##");
	printf("#############################");
	printf("###Please Select:         ###");

}


int main()
{
	 int select = -1;
	 int (*p[5])(int ,int) = {NULL, Myadd, Mysub, Mymul, Mydiv };//����ָ������
     const char *op = " +-*/";
     Menu();
	 scanf("%d", &select);
	while(1)
  {     
	     if(select == 0��
	    {
	     printf("bye bye\n");
		 break ;
	 
	     }
	     else if( select > 0 && select <4)
		 {
	           
			 int x,y;
			 printf("Please enter your data<x,y>: ");
			 scanf("%d %d",&x, &y);
	        
			 int z = p[select](x, y);
			 printf("result: %d %c %d=%d\n",x, op[select] ,y, z);
	          
		 }

		 else
		 {
	        printf("select error   peease try again\n");
	  
	      }
 }


     return 0; 
}