#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//�������봿������



//����������������������������
//������������Ӱ�촴������ ��ʵ����
//������������ ������� ����ʵ����
class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	
	}

	//��ͨ���� �ǲ����������������ģ����Կ��ܻᵼ���ͷŲ��ɾ�
	//��������������������

	/*virtual ~Animal()
	{
		cout << "Animal����������" << endl;
	}*/

	//�������� д��
	//����������Ҫ���� ����Ҫʵ�� �������� ����ʵ��
	//��������г����� ������������ ��ô�����Ҳ�������
    //������ ����ʵ��������
	virtual ~Animal() = 0;
};


//��������г����� ������������ ��ô�����Ҳ�������  ����ʵ��������
//void fun()
//{
//	Animal an;
//	Animal * animo = new Animal;
//}

Animal::~Animal()
{
 
	cout << "Animal�Ĵ�����������" << endl;
}

class Cat :public Animal
{
public:
	Cat(const char * name)
	{
		this->m_name = new char[strlen(name) + 1];
		strcpy(this->m_name,name);
	} 
	
	virtual void speak()//virtual �ɲ�д
	{
		cout << "Сè��˵��" << endl;
	}

	~Cat()
	{
		cout << "Cat����������" << endl;
		if (this->m_name != NULL)
		{
			delete[] this->m_name;
			this->m_name = NULL;

		}
	}

	char * m_name;
};
void test01()
{

	Animal* animal = new Cat("TOM");
	animal->speak();

	delete animal;

}
int main()
{

	test01();
	system("pause");
	return 0;
}