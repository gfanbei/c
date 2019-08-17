#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//函数调用流程
//宏函数不是一个真正的函数，（只是预处理器进行简单的替换）
#define myadd(x,y)  ((x)+(y))
#define MAX 1024

//下例为真正的函数，返回值，参数，函数体
int Add(int a, int b)
{
	return a + b;
}
//在一定场景下宏函数比函数效率高

int main()
{
	int a = 2;
	int b = 3;
	//以空间换时间
	//对于频繁使用，并且短小的函数，一般使用宏函数代替，因为宏函数没有普通函数的开销（函数压栈，跳转，返回等）
	//printf("a + b = %d\n", myadd(a, b));
	printf("a + b = %d\n", Add(a, b));

	return 0;
}