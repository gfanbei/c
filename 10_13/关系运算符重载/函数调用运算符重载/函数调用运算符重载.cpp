#include<iostream>
#include<string>
using namespace std;

//()�����������������

class Myprint
{
public:
	/*void operator()()
	{
		cout << "hellow word" << endl;
	}
*/
	void operator()(string text)
	{
		cout << text<< endl;
	}

};
void test01()
{
	Myprint myprint;
	myprint("hellow word");//�º��� ����������һ��ʹ��

}


class Myadd
{
public:
	int  operator()(int v1, int v2)
	{
		return v1 + v2;
	}

};

void test02()
{
	/*Myadd myadd;
	cout<< myadd(1, 2)<< endl;*/

	cout << Myadd()(1, 2) << endl;//��������
 
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}