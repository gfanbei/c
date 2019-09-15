#include<iostream>
#include<string>
using namespace std;


//设计一个学生类 学生具有 姓名 和学号  并显示
class Student
{
public:
	void set_name(string name)//成员函数，设置姓名
	{
		m_name = name;
	}


	void set_ID(int id)//成员函数，设置学号
	{
		 m_ID = id;

	}


	void show()
	{
		cout << "姓名" << m_name << "  " << "学号" << m_ID << endl;
	
	}
	string m_name;//成员变量 
	int m_ID;
};

void test02()
{
	Student st;//创建一个学生实例化，通过类来创建对象的过程
	st.set_name("张三");
	st.set_ID(2);

	//通过st的属性打印st的信息
	cout << "st的姓名" << st.m_name <<"  "<<"st的学号" << st.m_ID << endl;

	//通过成员函数 打印st的信息
	st.show();
}


int main()
{
	test02();
	return 0;
}