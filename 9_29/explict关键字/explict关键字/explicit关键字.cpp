#include<iostream>
#include<string>
using namespace std;


class mystring
{
public:
	mystring(const char * str)
	{
	
	}

	explicit mystring(int a)
	{
		m_size = a;
	}

	char *mstr;
	int m_size;
};

void test01()
{

	mystring   str = "acd";
	mystring   str2(10);
	//mystring   str3 = 10;//做什么用途？str2的字符串10 或者字符串长度为10
	//隐士类型转换 相当于 mystring str3 = mystring（10）
	////explicit关键字 防止隐式类型转换

}
int main()
{
	test01();
	system("pause");
	return 0;
}