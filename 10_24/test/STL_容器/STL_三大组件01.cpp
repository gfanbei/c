#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


//STL三大组件  容器  算法  迭代器

//迭代器  遍历功能 用指针理解
//普通指针也算一种迭代器


//普通遍历
void  test01()
{
	int arr[7] = {9,6,5,2,8,7,3};
	int* p = arr;//指针指向数组首元素地址
	for (int i = 0; i < 7; ++i)
	{
		//cout << arr[i] << endl;
		cout << (*(p++)) << endl;//指针方式遍历

	}
}

void myprint(int v)
{
	cout << v << endl;
}

void test02()
{
	//声明容器
	vector<int> v;//声明一个容器 这个容器中存放int 类型数据 对象名称v
	//向容器中加入数据


	//遍历容器中的数据
	//利用迭代器

	v.push_back(10);//插入数据
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);


	//第一种遍历方式
	//vector<int>::iterator  itBegain = v.begin();//itBegain指向v容器的首地址
	//vector<int>::iterator  itEnd = v.end();//itEnd指向v容器的尾地址的下一个地址

	//while (itBegain != itEnd)
	//{
	//	cout << *itBegain << endl;
	//	itBegain++;
	//}


	////第二种遍历方式
	////for(int i = 0;i < 10; ++i)
	//for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	//{
	//	cout << *it << endl;
	//}

	//第三种方式
	for_each(v.begin(), v.end(), myprint);//调用系统算法

}

//自定义操作数据
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}


	string m_name;
	int m_age;
};

void test03()
{
	Person p1("关羽", 20);
	Person p2("张飞", 30);
	Person p3("刘备", 30);
	Person p4("诸葛", 22);
	Person p5("孙坚", 16);

	vector<Person> v;
	v.push_back(p1);//插入数据
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout <<"姓名 "<< (*it).m_name<<"  年龄 "<<it->m_age;//it本身为一指针 (*it) 为Person
		cout <<endl;

	}

}

//明确（*it）是什么
void test04()
{
	Person p1("关羽", 20);
	Person p2("张飞", 30);
	Person p3("刘备", 30);
	Person p4("诸葛", 22);
	Person p5("孙坚", 16);

	vector<Person *> v;//声明一个容器 存放Person * 类型数据
	v.push_back(&p1);//插入数据 
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
				
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "姓名 " << (*(*it)).m_name << "  年龄 " << (*it)->m_age;//it本身为一指针 （*vit）为Person*
		cout << endl;

	}
}

//容器嵌套使用
void test05()
{
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	//3个小容器赋值
	for (int i = 0; i < 5; ++i)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
		v3.push_back(i + 100);
	}

	//将小容器放入大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	//遍历所有数据
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); ++it)//大容器遍历 （*it） 为vector<int> 还是一个容器
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); ++vit)//小容器遍历(*vit) int 数据类型（某个小容器中）
		{
			cout << *vit << " ";
		}
		cout << endl;
	}

}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return 0;
}