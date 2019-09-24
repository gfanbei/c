#include<iostream>
#include<string.h>
using namespace std;


//��������壨Cube��
//���������������2*a*b+2*a*c+2*b*c���������a*b*c��,
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

class Cube
{
public:

	//���������峤
	void setcube_L(int l)
	{
		m_l = l;
	}

	//��ȡ�����峤
	int  getcube_L()
	{
		return m_l;
	}

	//�����������
	void setcube_W(int w)
	{
		m_w = w;
	}

	//��ȡ�������
	int  getcube_W()
	{
		return m_w;
	}

	//�����������
	void setcube_H(int h)
	{
		m_h = h;
	}
	//��ȡ�������
	int  getcube_H()
	{
		return m_h;
	}

	//�������
	void caculatcube_S()
	{
		cout << "���������� " << 2 * (m_l*m_w + m_l * m_h + m_w * m_h) << endl;
	}

	//�������
	void caculatcube_V()
	{
		cout << "���������� " <<  m_l*m_w * m_h << endl;
	}

	//��Ա����
   bool compareCubeByClass(Cube & cub)
	{
	   bool ret2 = m_l == cub.getcube_L()&& m_w == cub.getcube_W() && m_h == cub.getcube_H();
	
	   return ret2;
   }


private:
	int m_l;//��
	int m_w;//��
	int m_h;//��

};

 //ȫ�ֺ������Ƚ������������Ƿ����
bool  Cubcompare(Cube &cub1, Cube &cub2) //ʹ�����ÿ����Ż������⿪��
{
	if (cub1.getcube_L ()== cub2.getcube_L ()&& cub1.getcube_W ()== cub2.getcube_W ()&& cub1.getcube_H() == cub2.getcube_H())
	{
		return true;;
	}

	return false;
	

}

void test01()
{

	Cube  c1, c2;//����2�������� c1��c2
	c1.setcube_L(10);
	c1.setcube_W(10);
	c1.setcube_H(10);

	

	c2.setcube_L(10);
	c2.setcube_W(10);
	c2.setcube_H(11);

	c1.caculatcube_S();//c1�����
	c1.caculatcube_V();//c1�����

	c2.caculatcube_S();
	c2.caculatcube_V();

	//ͨ��ȫ�ֱ����ж������������Ƿ����
	bool ret = Cubcompare(c1, c2);

	if (ret)
	{
		 cout<<"c1��c2���"<<endl;
	}

	else
		cout << "c1��c2�����" << endl;

	//ͨ����Ա�����ж������������Ƿ����

	bool ret2 = c1.compareCubeByClass(c2);//ͨ��һ������c1���Ƚ�����һ������c2��

	if (ret2)
	{
		cout << "ͨ����Ա��c1��c2���" << endl;
	}

	else
		cout << "ͨ����Ա��c1��c2�����" << endl;
}


int main()
{

	test01();
	system("pause");
	return 0;
}
