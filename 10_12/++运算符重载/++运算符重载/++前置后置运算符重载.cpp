#include<iostream>
#include<string>
using namespace std;

//++重载运算符(前置 后置)
class  Myinteger
{
	friend ostream& operator<<(ostream& cout, Myinteger& integer); //友元可以访问私有
public:
	Myinteger() 
	{
		m_num = 0;
	};

	//前置++重载   机理 先++，在返回
	Myinteger& operator++()
	{
		this->m_num++;
		return *this; //取* 本体    (this指针永远指向当前对象)

	}

	//后置++运算符重载   机理  先创建临时变量 保存原有值，在内部++，返回临时数据
	Myinteger  operator++(int) //int占位 用于区分 前置和后置
	{
		Myinteger tmp = *this;//创建临时
		   //tmp.m_num = this->m_num;//保存原有
		m_num++;//原有++

		return tmp;
	}

	//临时数据返回引用会出现问题


private:
	int m_num;
};

//<< 运算符重载
ostream& operator<<(ostream& cout, Myinteger& integer)
{
	cout<<integer.m_num<<endl;
	return cout;
}

void test01()
{

	Myinteger  integer;

	++ integer;
	cout << integer;
	integer ++;

	cout << integer << endl;
	//使用 &原由
#if 0
	++(++integer);//(++integer) 若没有引用 返回的是数据，然后对数据++
	//cout << ++(++integer)<< endl;
	cout << integer << endl; //结果为1 ，不是2 因此需要引用
	
#endif

}

int main()
{
	test01();

#if 0

	int a = 10;
	++(++a);
	cout<<a<<endl; // 12
# endif

	system("pause");
	return 0;
}