#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;



void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);//v中插入10个数
		cout << v.capacity() << endl;//如果容量不够，会自行扩充容量 安多大倍数扩充（未知）

	}

}

#if 0

vector //构造函数
vector<T> v;//采用膜版类实现，默认构造函数
vector(v.begin(), v.end());//将v[beg，end]区间中的数据赋值给本身
vector(n, elem);//构造含数将n个elem值拷贝给本身
vector(const vector &vec); //拷贝构造含数

//例子 使用第二各构造函数 可以

int arr[] = { 6,9,8,5,4,7 };
vector<int >(arr, arr + sizeof(arr) / sizeof(int));



vector //常用赋值操作
assign(beg, end);//将[beg，end]区间中的数据赋值给本身
assign(n, elm);//将n个elem拷贝赋赋值给本身
vector& operator=(const vector &vec);//重载等号操作符
swap(vec);//将vec与本身元素互换


vector //大小操作
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置，若容器变短，则末尾超出容器的元素被删除
resize(int num, elem); // 重新指定容器的长度为num，若容器变长，则以elem值填充新位置，若容器变短则末尾超出容器的元素被删除
capacity();//容器的容量
reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问

#endif

//打印容器中的数据
void printvector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test02()
{
	vector<int> v;
	int arr[] = { 6,9,8,5,4,7 };
	vector<int >v1(arr, arr + sizeof(arr) / sizeof(int));//将v[beg，end]区间中的数据赋值给本身

	vector<int >v2(v1.begin(),v1.end());
	printvector(v2);

	vector<int> v3(10,100);//构造含数将n个elem值拷贝给本身
	printvector(v3);
	
	//赋值使用
	vector<int> v4;
	v4.assign(v3.begin(), v3.end());//将[beg，end]区间中的数据赋值给本身
	printvector(v4);


	v4.swap(v2);//将vec与本身元素互换
	cout << "交换后的v4 " << endl;
	printvector(v4);

	cout << "v4容器的大小 " << v4.size() << endl;

	if (v4.empty())//判断容器是否为空
	{
		cout << "v4空" << endl;
	}
	else
	{
		cout << "v4不空" << endl;
	}


	//v4.resize(10);//新位置 0 填充
	v4.resize(10,-1);//用指定值-1填充
	//v4.resize(3);//变短删除
	printvector(v4);
}

//巧用swap收缩空间
void test03()
{
	vector<int> v;
	for (int i = 0;i< 100000;++i)
	{
		
		v.push_back(i);

	}
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;

	v.resize(5);
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;

	//巧用swap
	vector<int>(v).swap(v);
	cout << "v的容量" << v.capacity() << endl;
	cout << "v的大小" << v.size() << endl;
}


//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问
void test04()
{
	vector<int> v;
	v.reserve(100000);//（预留出空间）提前告诉 1次
	int *p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; ++i)
	{
		v.push_back(i);
		if (p != &v[0])//计算容器扩充100000空间用了多少次
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

#if 0
vector//数据存取操作
at(int idx);//返回索引idx所指数据，越界时，抛出out_of_range异常
operator[];//返回索引idx所指数据，越界时运行直接报错
front();//返回容器中第一个元素
back();//返回容器中最后一个元素


vector//插入和删除操作
insert(const_iterator pos, int count, ele);//插元素
pop_back();//删除最后一个元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间元素
erase(const_iterator pos);//删除迭代指向的元素
claer();//删除容器中所有元素

#endif

void test05()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);


	cout << "v的front  " << v.front() << endl;//返回容器中第一个元素
	cout << "v的back  " << v.back() << endl;

	//v.insert(v.begin(), 200);
	v.insert(v.begin(), 2, 200);//插元素 参数1 迭代器 参数2 插入的个数  参数3  插入的内容
	printvector(v);

	v.pop_back();//删除最后一个元素
	printvector(v);

	//v.erase(v.begin(),v.end());//删除
	
	v.clear();//删除
	if (v.empty())
	{
		cout << "为空" << endl;
	}
}

//逆序遍历
void test06()
{
	vector<int >v;

	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}
	printvector(v);

	//逆序遍历  reverse_iterator逆序迭代器

	for (vector<int>::reverse_iterator  it = v.rbegin(); it != v.rend(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;

	//vector迭代器是随机访问的迭代器，支持跳跃式访问
	vector<int>::iterator itBegin = v.begin();
	itBegin = itBegin + 3;
	//如果上述写法不报错，这个迭代器就是随机访问迭代器

	list<int> l;
	for (int i = 0; i < 10; ++i)
	{
		l.push_back(i);
	}
	list<int>::iterator lit = l.begin();
	//lit = lit + 3;//list迭代器不支持随机访问
}

int main()
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return 0;
}