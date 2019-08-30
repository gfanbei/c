#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SeqStack.h"





//字符中小括号匹配，若没有匹配指出位置，并显示




int IsLeft(char ch)
{
	return ch == '(';
}

int IsRight(char ch)
{
	return ch == ')';
}

void printError(const char *str, char *errMsg, char *pos)
{

	printf("错误信息:%s\n", errMsg);
	printf("%s\n", str);
	int dis = pos - str;
	for (int i = 0; i < dis; ++i)
	{
		printf(" ");
	}

	printf("A\n");


}


void test()
{
	const char *str = "5+(5*(6)9/3*1-1+3(";
	char *p = (char * )str;

	//初始化
	SeqStack stack = Init_SeqStack();

	
	while (*p != '\0')
	{
		//判断当前字符是否是左括号
		if (IsLeft(*p))
		{
			Push_SeqStack(stack, p);
		}

		//判断当前字符是否是右括号	
		if (IsRight(*p))
		{
			if (Size_SeqStack(stack) > 0) //判断栈中是否有内容
			{
				Pop_SeqStack(stack);//弹出栈顶元素
			}
			else
			{
				printError(str,"右括号没有匹配的左括号", p);
			}
		}

		p++;
	}

	while (Size_SeqStack(stack) > 0)//判断栈中是否还有元素（即‘（‘）
	{
		printError(str, "左括号没有匹配的右括号", Top_SeqStack(stack));
		//弹出栈顶元素
		Pop_SeqStack(stack); 
	}
	//销毁
	Destory_SeqStack(stack);
	stack = NULL;

}







int main()
{
	test();
	return 0;
}