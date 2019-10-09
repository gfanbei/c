#define _CRT_SECURE_NO_WARNING
#include<iostream>
#include<string>
using namespace std;


//单例模式  打印机
//模拟公司员工使用打印机场景，打印机可以打印员工要输出的内容，并且可以累积打印使用次数
class Printer
{

public:
	static Printer* Getinstance()//对外提供Getinstance()来访问该指针
	{
		return Singleprinter;
	}

	void printext(string text)//提供打印函数
	{
		cout << text << endl;
		m_count++;
		cout <<"打印机累积使用次数  " << m_count << endl;
	}

private://默认与拷贝构造私有
	Printer()
	{
		m_count = 0;
	}
	Printer(const Printer& c)
	{}



private:
	static Printer* Singleprinter;//私有唯一指针

	int m_count;

};


Printer* Printer::Singleprinter = new Printer;//类外初始化

void test01()
{
	//获得 打印机
	Printer* printer = Printer::Getinstance(); 

	printer->printext("离职报告");
	printer->printext("入职报告");
	printer->printext("升级申请"); 
	printer->printext("加薪申请");
	printer->printext("退休申请");

}

int main()
{
	
	test01();
	system("pause");
	return 0;
}