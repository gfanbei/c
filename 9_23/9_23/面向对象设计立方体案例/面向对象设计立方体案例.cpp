#include<iostream>
#include<string.h>
using namespace std;


//设计立方体（Cube）
//求出立方体的面积（2*a*b+2*a*c+2*b*c）和体积（a*b*c）,
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:

	//设置立方体长
	void setcube_L(int l)
	{
		m_l = l;
	}

	//获取立方体长
	int  getcube_L()
	{
		return m_l;
	}

	//设置立方体宽
	void setcube_W(int w)
	{
		m_w = w;
	}

	//获取立方体宽
	int  getcube_W()
	{
		return m_w;
	}

	//设置立方体高
	void setcube_H(int h)
	{
		m_h = h;
	}
	//获取立方体高
	int  getcube_H()
	{
		return m_h;
	}

	//计算面积
	void caculatcube_S()
	{
		cout << "立方体的面积 " << 2 * (m_l*m_w + m_l * m_h + m_w * m_h) << endl;
	}

	//计算体积
	void caculatcube_V()
	{
		cout << "立方体的体积 " <<  m_l*m_w * m_h << endl;
	}

	//成员函数
   bool compareCubeByClass(Cube & cub)
	{
	   bool ret2 = m_l == cub.getcube_L()&& m_w == cub.getcube_W() && m_h == cub.getcube_H();
	
	   return ret2;
   }


private:
	int m_l;//长
	int m_w;//宽
	int m_h;//高

};

 //全局函数，比较两个立方体是否相等
bool  Cubcompare(Cube &cub1, Cube &cub2) //使用引用可以优化，避免开销
{
	if (cub1.getcube_L ()== cub2.getcube_L ()&& cub1.getcube_W ()== cub2.getcube_W ()&& cub1.getcube_H() == cub2.getcube_H())
	{
		return true;;
	}

	return false;
	

}

void test01()
{

	Cube  c1, c2;//创建2个立方体 c1，c2
	c1.setcube_L(10);
	c1.setcube_W(10);
	c1.setcube_H(10);

	

	c2.setcube_L(10);
	c2.setcube_W(10);
	c2.setcube_H(11);

	c1.caculatcube_S();//c1的面积
	c1.caculatcube_V();//c1的体积

	c2.caculatcube_S();
	c2.caculatcube_V();

	//通过全局变量判断两个立方体是否相等
	bool ret = Cubcompare(c1, c2);

	if (ret)
	{
		 cout<<"c1和c2相等"<<endl;
	}

	else
		cout << "c1和c2不相等" << endl;

	//通过成员函数判断两个立方体是否相等

	bool ret2 = c1.compareCubeByClass(c2);//通过一个对象（c1）比较另外一个对象（c2）

	if (ret2)
	{
		cout << "通过成员：c1和c2相等" << endl;
	}

	else
		cout << "通过成员：c1和c2不相等" << endl;
}


int main()
{

	test01();
	system("pause");
	return 0;
}
