#include<iostream>
#include<string>
using namespace std;





class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int  m_age;
};

template<class T>
bool compare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}
//通过(第三代)具体化自定义数据类型 解决上述问题
//如果具体化能够优先匹配，那么就选择具体化
//语法 template<> 返回值 函数名<具体类型>（参数）
template<> bool compare<Person>(Person &a, Person &b)//（新模板 返回值 参数都不能变）若返回类型改为其他 则报错 
{
	if (a.m_age == b.m_age) 
	{
		return true;
	}
	return false;
}

void  test01()
{
	int a = 10;
	int b = 20;
	int ret1 = compare(a, b);
	cout <<"ret1 = " << ret1 << endl;

	Person p1 ("TOM",10);
	Person p2("JERRY", 10);

	int ret2 = compare(p1, p2);
	cout << "ret2 = " << ret2 << endl;
}


int main()
{
	test01();
	
	system("pause");
	return 0;
}