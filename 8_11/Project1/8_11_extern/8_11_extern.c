#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//extern int a = 10;默认外部链接
int a = 10;//全局区
static int b = 5;//静态区

//内部链接和外部链接有什么区别?
//1.如果变量时内部链接，那么此变量只能在当前文件内访问
//2.如果变量时外部链接，那么此变量可以被其它文件使用


//1.全局静态变量和局部静态变量都存储在静态区，都是在程序运行期间合法有效
//2.局部静态变量符号的可见范围仅限于当前.c文件，全局静态变量可见范围从定义到文件结尾


////头文件不能放放定义，只能方声明
//void test01()
//{
//	static int c = 20;//静态区
//
//}
////头文件不参与编译，每一个.c文件叫做一个编译单元
////编译器独立编译每一个.c文件
//void test02()
//{
//	extern g_p;//声明，表示告诉编译器这个符号是存在的 ，你让我编译先通过，让连接器去找到这个符号在哪
//	printf("g_p = %d ",g_p);
//}


//----------------------------------------------------------------
//常量区  字符串常量  全局const变量
//  1.const全局和局部变量区别
//    const全局变量在常量区，不能修改(直接或间接)
//const int g_c = 100;
//void test03()
//{   
	//不能直接修改
	//g_c = 200;
	//不能见解修改
	//int *p = (int *)&g_c;
	//*p = 200;

	//全局const放在常量区，一旦初始化不能修改
//}

//2.const局部变量（栈上），不能直接修改，可以间接修改
//void test04()
//{
//	 const int a = 100;
//     //a = 200;//不能直接修改
//
//	 int *p = (int *)&a;//可以间接修改
//	 *p = 200;
//	 printf("a = %d\n ",a);
//}



//-----------------------------
//字符串常量区
//字符串常量区地址是否相同?
//1.tc2.0,同文件字符串常量地址不同
//2.VS2013,字符串常量地址同文件和不同文件都相同
//3.QT同文件相同，不同文件不同
void test05()
{
	char *p = "hello word";
	printf("%d\n", &"hello word");
	printf("%d\n", p);


	//vs环境下不能修改字符常量区，但bcc环境下可以修改
	printf("p = %s\n",p);
	p[0] = 'A';
	printf("p = %s\n", p);
}

//总结:
//c/c++内存分区
//数据区包括; 堆、栈、全局 / 静态存储区
//全局 / 静态存储区包括：常量区，全局区，静态区
//常量区包括; 字符串常量区，常变量去
//代码区；存放程序编译后的二进制代码，不可寻址区
//-------可以说c/c++内存分区只有两个，即代码区和数据区
int main()
{
	//test02();
	//test03();
	  //test04();
	test05();
	return 0;
}