#include<iostream>
#include<string>
using namespace std;


//菱形继承概念及问题

//虚继承：只能解决具备公共祖先的多继承所带来的二义性问题，不能解决没有公共祖先的多继承
//节省资源
class Animal
{
public:
	int m_age ;
	void func() { cout << "Animal::func" << endl; }
};

//虚基类Sheep
class Sheep :  virtual public Animal
{};

//虚基类Tuo
class Tuo : virtual public Animal
{};


class Sheeptuo :public Sheep, public Tuo
{
 

};


//菱形继承的解决方案  虚继承 virtual
void test01()
{
	Sheeptuo st;
	st.m_age = 200;

#if 0 
	st.Sheep::m_age = 10;
	st.Tuo::m_age = 20;

	//st.func();
	//虚继承之后 sheep TUO操作一份数据 （通过虚基类指针（vbtr）+偏移量）
	cout << st.Sheep::m_age << endl;//20
	cout << st.Tuo::m_age << endl;//20
	//cout << st.m_age << endl;
	

	//cout << st.m_age << endl;//解决了二义性问题

#endif



	//*(int*)((int*)*(int*)(&st + 1) + 1)

	//找到Sheep的偏移操作量
	cout << *(int*)((int*)*(int*)&st + 1) << endl;
	
	//找到Tuo的偏移操作量
	cout << *((int*)((int*)*((int*)&st + 1) + 1)) << endl;

	//输出age  初始+Sheep的偏移量
	cout << ((Animal*)((char*)&st + (*(int*)((int*)*(int*)&st + 1))))->m_age << endl;


}


int main()
{

	test01();
	system("pause");
	return 0;
}