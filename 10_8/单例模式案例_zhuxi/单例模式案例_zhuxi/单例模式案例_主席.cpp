#include<iostream>
#include<string>
using namespace std;

//创建主席类
//需求 单例模式 为了创建类中的对象 并且保证只有一个对象实例
class Chairman
{
	//构造函数 进行私有化
private:
	Chairman()
	{
		cout<<"创建国家主席"<<endl;
	}
	//拷贝构造私有化
	Chairman(const Chairman&c)
	{}

public:
	//提供get方法访问主题
	static Chairman * Getinstance()
	{
		return singleman;
	}

private:
	static Chairman * singleman;//加static可以通过类名来访问，类内声明类外初始化

};

Chairman* Chairman::singleman = new Chairman;//new对象 调用一次构造

void test01()
{
	//Chairman c1;//栈上创建
	//Chairman *c2 = new Chairman;
	//Chairman *c3 = new Chairman;

	//Chairman::singleman;

	//Chairman* cm = Chairman::singleman;//数据共享
	//Chairman* cm2 = Chairman::singleman;//数据共享

	//Chairman::singleman = NULL;//修改了信息，置0了

	Chairman* cm1 = Chairman::Getinstance();
	Chairman* cm2 = Chairman::Getinstance();
	if (cm1 == cm2)
	{
		cout<<"cm1与cm2相同"<<endl;
	}
	else 
	{
		cout << "cm1与cm2不相同" << endl;
	}

	Chairman* cm3 = new Chairman(*cm2);//通过cm2创建一个拷贝构造
	if (cm3 == cm2)//地址不同
	{
		cout << "cm3与cm2相同" << endl;
	}
	else
	{
		cout << "cm3与cm2不相同" << endl;
	}


}

int main()
{
	//cout<<"main调用"<<endl;//主席创建先于mian调用
	test01();
	system("pause");
	return 0;
}