#include<iostream>
#include<string>
using namespace std;

//������ϯ��
//���� ����ģʽ Ϊ�˴������еĶ��� ���ұ�ֻ֤��һ������ʵ��
class Chairman
{
	//���캯�� ����˽�л�
private:
	Chairman()
	{
		cout<<"����������ϯ"<<endl;
	}
	//��������˽�л�
	Chairman(const Chairman&c)
	{}

public:
	//�ṩget������������
	static Chairman * Getinstance()
	{
		return singleman;
	}

private:
	static Chairman * singleman;//��static����ͨ�����������ʣ��������������ʼ��

};

Chairman* Chairman::singleman = new Chairman;//new���� ����һ�ι���

void test01()
{
	//Chairman c1;//ջ�ϴ���
	//Chairman *c2 = new Chairman;
	//Chairman *c3 = new Chairman;

	//Chairman::singleman;

	//Chairman* cm = Chairman::singleman;//���ݹ���
	//Chairman* cm2 = Chairman::singleman;//���ݹ���

	//Chairman::singleman = NULL;//�޸�����Ϣ����0��

	Chairman* cm1 = Chairman::Getinstance();
	Chairman* cm2 = Chairman::Getinstance();
	if (cm1 == cm2)
	{
		cout<<"cm1��cm2��ͬ"<<endl;
	}
	else 
	{
		cout << "cm1��cm2����ͬ" << endl;
	}

	Chairman* cm3 = new Chairman(*cm2);//ͨ��cm2����һ����������
	if (cm3 == cm2)//��ַ��ͬ
	{
		cout << "cm3��cm2��ͬ" << endl;
	}
	else
	{
		cout << "cm3��cm2����ͬ" << endl;
	}


}

int main()
{
	//cout<<"main����"<<endl;//��ϯ��������mian����
	test01();
	system("pause");
	return 0;
}