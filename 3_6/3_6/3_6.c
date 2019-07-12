# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
# include <string.h>
# include <windows.h>
# include <assert.h>
#pragma  warning(disable:4996)




//void Exchange(int a[],int sz)//分别从两端开始，前半部分判断偶数，保留奇数，
//{                                 //后半部分判断奇数，保留偶数
// 
//   int start = 0;  //起始位
//   int end =sz - 1;
//	   
//
//    assert(a);
//    assert(sz > 0);
//  
//
//   while(start < end)
//   {
//	   while(start < end && (a[start] & 1)){ //同1进行与运算，注意满足的条件
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
//	    a[start] ^= a[end];//奇偶交换
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
//int main() //输入一个数组，奇数位于前半部分，偶数位于后半部分
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



//int main()    //杨氏矩阵，查找数字，每行从左到右递增，每列从左到右递增
//{
//	int yang[4][4] = {
//		{1,2,3,4},
//		{2,3,4,5},
//		{3,4,5,6},
//		{4,5,6,7},
//	
//	};
//	int sz = sizeof(yang) / sizeof(yang [0]);//计算一共多少行
//
//	FindData(yang, sz, 5); //传参 数组名  行数  找寻的数字
//
//    
//
//	system("pause");
//
//    return 0;
//}




//void FindData(int (*a)[4], int row, int x)//以右上角的元素作为比较对象，依次排除 行和 列
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


/* void LeftMove(char *a, int len, int k)//字符串左旋k个，例 ABCDEF  -> 左旋2个 CDEFAB
{
    //version 1
	 //  assert(a);
	 int num = k % len;//有效次数

	 //version 2
     ReverseStringCode(a, a + num - 1); // 局部翻转之  前半部分，abcdef  12345 -> fedcba  54321 -> 12345 abcdef
	 ReverseStringCode(a + num , a + len -1);//局部翻转之  后半部分，
	 ReverseStringCode(a , a +len -1);//整体翻转

       /* int i = 0;
		for(; i <num ; i++)//左移 nun次
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

void LeftMove(char *a, int len, int k)//字符串左旋k个，例 ABCDEF  -> 左旋2个 CDEFAB
{
    
    int num = k % len;
  
	char* p = (char *)malloc(2 * len + 1); //申请双倍字符空间
	  assert(a);

	strcpy(p , a);

	strcat(p , a);//字符连接函数

	strncpy(a , a + num , len);//要被拷贝的字符串，以及从哪开始 和 要拷贝的长度

	free(p); //释放申请的空间

       

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
	 int (*p[5])(int ,int) = {NULL, Myadd, Mysub, Mymul, Mydiv };//函数指针数组
     const char *op = " +-*/";
     Menu();
	 scanf("%d", &select);
	while(1)
  {     
	     if(select == 0）
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