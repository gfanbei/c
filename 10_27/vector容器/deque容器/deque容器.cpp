#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>
using namespace std;


/*
deque//构造函数
deque<T> deqT;//默认构造形式
deque(begin,end);//构造函数将（beg，end）区间中的元素拷贝给本身
deque(n,elem);//构造函数将n个elem拷贝给本身
deque(const deque &deq);//拷贝构造函数

deque//赋值操作
assign(beg,end);//将（beg，end）区间中的元素拷贝给本身
assign(n,elm);//将n个elem拷贝赋值给本身
deque& operator=(const deque &deq);//重载等号操作符
swap(deq);//拷贝构造函数

deque//大小操作
deque.size();//返回容器中元素个数
deque.empty();//判断是否为空
deque.resize(num);//重新指定容器的长度为num
deque.resize(num,elem);

*/

void printdeaue(deque<int>&d)
{
	//普通迭代器iteration    逆序迭代器 reverse_iterator   只读迭代器 const_iterator
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//const_iterator  保证内容不被修改
	{
		//*it = 10000l;
		cout << *it << " ";

	}
	cout << endl;

}
void test01()
{
	deque<int>d;//默认构造形式

	d.push_back(10);//尾插法
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);

	printdeaue(d);//10  20  30  40

	deque<int> d2(d.begin(),d.end());
	d2.push_back(2000);
	printdeaue(d2);//10 20 30 40 2000

	d.swap(d2);
	printdeaue(d);//10 20 30 40 2000

	if (d2.empty())
	{
		cout << "d2为空" << endl;
	}
	else
	{
		cout << "d2不为空  大小为" <<d2.size()<< endl;
	}


}


/*
deque//双端插入和删除操作
push_back(elem);//在容器尾部插入一个数据
push_front(elem);//在容器头部插入一个数据
pop_back();//删除容器最后一个数据
push_front();//删除容器第一个数据

deque//数据存取
at(idx);//返回索引idx指定的值 若果越界抛出异常
operator[];//返回索引idx指定的值 若果越界不抛出异常，直接挂
front();//返回第一个数据
back();//返回最后一个数据

deque//插入操作
insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置
insert(pos,n,elem);//在pos位置插入n个elem元素的拷贝 ,无返回值
insert(pos,beg,end);//在pos位置插入(beg,end) 区间的值，无返回值

deque//删除操作
clear();
erase(beg,end);
erase(pos);//删除pos位置 数据  返回下一个数据的位置
*/

void test02()
{
	deque<int> d;
	d.push_back(20);
	d.push_back(60);
	d.push_back(90);
	d.push_front(80);//头插
	d.push_front(40);

	printdeaue(d);//40 80 20 60 90

	//删除 头删 尾删、
	d.pop_back();//
	d.pop_front();//头删
	printdeaue(d);//80 20 60

	cout << "d.front " << d.front() << endl;
	cout << "d.front " << d.back() << endl;

	//插入
	deque<int> d2;
	d2.push_back(50);
	d2.push_back(70);

	d2.insert(d2.begin(),d.begin(),d.end());//80 20  60 50 70
	printdeaue(d2);


}

bool m_compare(int v1,int v2)
{
	return v1 > v2;//100   10  则为从大到小
}
//sort排序算法
void test03()
{
	deque<int> d;
	
	d.push_back(6);
	d.push_back(10);
	d.push_back(12);
	d.push_back(2);
	d.push_back(1);

	printdeaue(d);
	sort(d.begin(),d.end());//默认从小到大
	printdeaue(d);

	//从大到小

	sort(d.begin(), d.end(),m_compare);//m_compare回调函数
	printdeaue(d);

}
int main()
{

	//test01();
	//test02();
	test03();
	system("pause");
	return 0;

}