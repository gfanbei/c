#include<iostream>
#include<string>
using namespace std;

//判断用户输入的是字符串还是数字串
void test01()
{
	cout << "请输入一串字符或数字" << endl;

	//利用偷窥
	char c = cin.peek();

	
		if (c >= '0' && c <= '9')
		{
			int num;
			cin >> num;
			cout << "您输入的是数字， 数字为 " << num << endl;
		}
		
		else
		{
			char buf[1024];
			cin >> buf;
			cout << "您输入是字符串,字符串为 " <<buf<< endl;

		}

	}
		
	//2.让用户输入1到0 的数字 如果输入有误 重新输入

void test02()
{
	int num;
	cout << "请输入一个1到10的数字" << endl;
	while (true)
	{
		cin >> num;
		if (num >= 0 && num <= 10)
		{

			cout << "您输入的是数字， 数字为 " << num << endl;
			break;
		}
		//cout << "对不起，输入有误，请重新输入 " << endl;


		cin.clear();//重置标志位
	    cin.sync();//清空缓冲区
		cout << "标志位 " << cin.fail() << endl;//查看标志位 0正常 1不正常
	}
	

}


int  main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}