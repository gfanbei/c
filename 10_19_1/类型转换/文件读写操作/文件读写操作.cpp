#include<iostream>
#include<string>
#include<fstream>//文件读写操作头文件
using namespace std;



//写文件
void test01()
{
	//以输出方式打开文件
	//ofstream ofs("./test.txt", ios::out | ios::trunc);


	//后期指定打开方式
	ofstream  ofs;
	ofs.open("./test.txt", ios::out | ios::trunc);
	//判断是否代开成功
	if (!ofs.is_open())
	{
		cout << "打开失败" << endl;
	}

	ofs << "姓名：蓝魔" << endl;
	ofs << "年龄：200" << endl;
	ofs << "性别：男" << endl;
}


//读文件
void test02()
{
	ifstream ifs;
	ifs.open("./test.txt", ios::in);
	//判断是否打开成功
	if (!ifs.is_open())
	{
		cout << "打开失败" << endl;
	}
	//1.第一种读取方式（推荐）
	//char buf[1024];
	//while (ifs >> buf)//按行读取
	//{
	//	cout << buf << endl;
	//}



	//////第二种方式
	//char buf2[1024];
	//while (!ifs.eof())
	//{
	//	ifs.getline(buf2, sizeof(buf2));
	//	cout << buf2 << endl;
	//}

	//第三种读取方式  按单个字符读取 直到尾(不推荐使用)
	char c;
	while ( ( c = ifs.get() )!= EOF)
	{
		cout << c;
	}
}

int  main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}