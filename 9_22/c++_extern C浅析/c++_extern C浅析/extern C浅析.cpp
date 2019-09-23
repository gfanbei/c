#include<iostream>
using namespace std;
#include"test.h"


//c++中想调用c语言中的函数

//extern"C" void show();  //show方法按照c语言方式连接
//解决了c++文件中调用 c语言的代码
int main()
{

	show();//在c++中  函数是可以发生重载的，编译器会把这个函数名称偷偷改变 _showv void

	system("pause");
	return 0;
}