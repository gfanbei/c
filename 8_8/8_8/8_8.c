#include <stdio.h>
#include <string.h>
#include <windows.h>


//void Findkiller()//�����жϣ�Ѱ�����֣�a˵�����Լ���b˵��c��c˵��d��d˵c��˵����֪��3����˵���滰��1�˼ٻ�
//{
	//char killer = 'A'; //ÿ�˱���һ�γ䵱���֣�
//	for (; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + \
//			(killer == 'D') + (killer != 'D') == 3)
//
//			printf("killer: %c\n", killer);
//		}

//	}


//}
//int main()
//{
//	Findkiller();

//	system("pause");
//	return 0;
//}



//int  Avg(int x,int y) //��ʹ�ã�a+b��/2 ��ʽ��ƽ��ֵ
//{
 //    return (x & y)+((x ^ y) >> 1);//������ͬ���ټ��� ��ͬ���ֵ�һ��
                               //�����λ
//}
//int main()
//{
//   printf("%d",Avg(10,20));
//    system ("pause");
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
	if (y == 0)
	{
		printf("div zero\n");
		return  -1;
	}
	return   x / y;

}



Menu()
{
	printf("#############################\n");
	printf("###1. Add            2.Sub###\n");
	printf("###3. Mul            4.Div###\n");
	printf("###                  0.Exit##\n");
	printf("#############################\n");
	printf("###Please Select:         ###\n");

}


int main()
{
	int select = -1;
	int(*p[5])(int, int) = { NULL, Myadd, Mysub, Mymul, Mydiv };//����ָ������
	const char *op = " +-*/";
	Menu();
	scanf("%d", &select);
	while (1)
	{
		if (select == 0)
			{
			 printf("bye bye\n");
			 break;

			}
		else if (select > 0 && select < 5)
		{

			int x, y;
				printf("Please enter your data<x,y>: ");
				scanf("%d %d", &x, &y);

			int z = p[select](x, y);
			printf("result: %d %c %d=%d\n", x, op[select], y, z);

		}

		else
		{
			printf("select error   peease try again\n");

		}
	}


	return 0;
}