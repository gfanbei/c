#include<iostream>
#include<string>
#include"Mystring.h"
using namespace std;


//强化训练 字符串封装
void test01()
{
	Mystring str = "abc";
	cout << str ;

	/*cout << "请输入str新的内容： " << endl;;
	cin >> str;
	cout << "新内容为： " << str ;*/

	/*int a = 10;
	cin >> a;
	cout << "a = " << a << endl;*/

	Mystring str2(str);
	Mystring str3 = "aaaa";
	
	str3 = str2;
	str3 = "aaaa";
	cout << "str3 =  " << str3 << endl;

	str3[0] = 'w';//注意单双引
	cout << "str3第一个位置为 =  " << str3[0] << endl;

	Mystring str4 = "";
	str4 = str2 + str3;//字符串拼接   

	cout << "str4= " << str4 << endl;


	if (str3 == str4)//str3 == "sdcfsd"
	{
		cout << "str3与str4相等" << endl;

	}
	else
	{
		cout << "str3与str4不相等" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}