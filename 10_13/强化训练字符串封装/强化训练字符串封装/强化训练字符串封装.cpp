#include<iostream>
#include<string>
#include"Mystring.h"
using namespace std;


//ǿ��ѵ�� �ַ�����װ
void test01()
{
	Mystring str = "abc";
	cout << str ;

	/*cout << "������str�µ����ݣ� " << endl;;
	cin >> str;
	cout << "������Ϊ�� " << str ;*/

	/*int a = 10;
	cin >> a;
	cout << "a = " << a << endl;*/

	Mystring str2(str);
	Mystring str3 = "aaaa";
	
	str3 = str2;
	str3 = "aaaa";
	cout << "str3 =  " << str3 << endl;

	str3[0] = 'w';//ע�ⵥ˫��
	cout << "str3��һ��λ��Ϊ =  " << str3[0] << endl;

	Mystring str4 = "";
	str4 = str2 + str3;//�ַ���ƴ��   

	cout << "str4= " << str4 << endl;


	if (str3 == str4)//str3 == "sdcfsd"
	{
		cout << "str3��str4���" << endl;

	}
	else
	{
		cout << "str3��str4�����" << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}