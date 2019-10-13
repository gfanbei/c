#include<iostream>
#include<string>
using namespace std;

class Person
{

public:
	Person(int age)//�вι���
	{
		this->m_age = age;
	}


	void showage()
	{
		cout << "����  " << this->m_age << endl;
	}

	//��������
	~Person()
	{
	
		cout << "Person����������" << endl;
	}

	int m_age;
};



//����ָ��
//�����й��Զ������͵Ķ����ö�������Զ��ͷ�
class smartPointer
{
public:
   smartPointer(Person * person)
	{
	  this->person = person;
	}


   //����->������ָ������� Person *pһ��ȥʹ��
   Person* operator->()
   {
	   return this->person;
   }

   //*���������
   Person& operator*()
   {
	  // return * person;
	   return *this->person;//���ر��� ��&
   }


   //��������
   ~smartPointer()
   {
	   cout << "����ָ��������" << endl;
	   if (this->person != NULL)
	   {
		   delete this->person;
		   this-> person = NULL;
	   }
   }

private:
   Person * person;//�ڲ�ά��һ��ָ�����ڷ��� Person��
};

void test01()
{
	//Person p1(100);//�Զ�����  ջ�Ͽ���

	//Person* p1 = new Person(100);//���Ͽ��٣�Ҫ�Լ��ͷ�delete

	//p1->showage();
    //	delete p1;

	smartPointer sp(new Person(100));//sp���ٵ���ջ�ϣ��Զ��ͷ�

	sp->showage(); //sp->->showage();�������Ż���,sp->���ص���ָ��

	(*sp).showage();//Ҳ����ָ��ȡ*����showage������

}

int main()
{
	test01();
	system("pause");
	return 0;
}