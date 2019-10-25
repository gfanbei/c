#include<iostream>
#include<string>
using namespace std;

//#define add(x,y)  x+ y
#define COMPARE(x,y) ( (x) < (y) ? (x) : (y))

int Compare(int x, int y)
{
	return x < y ?  x : y;
}
void test01()
{
	int a = 1;
	int b = 3;
	//int d = ;
	//cout << add(a, b) << endl;
	cout << COMPARE(++a, b) << endl;//3
	//cout << Compare(++a, b) << endl;//2
   
}
int main()
{
	test01();
	system("pause");
	return 0;
}