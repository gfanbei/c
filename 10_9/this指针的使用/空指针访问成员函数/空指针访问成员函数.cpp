#include<iostream>
#include<string>
using namespace std;


//��ָ����ʳ�Ա����
class Person
{
public:
	void show()
	{
		cout<<"Person show"<<endl;
	}

	void showage()//showage(Person *this)
	{
	
		if (this == NULL)//��if�ж� ��֤���в�����
		{
			return;
		}
		cout<<age<<endl;//this->age �൱�� NULL-> age;
	}


	int age;
};

//����;
//1.�����Ա����û���õ�this  ��ô��ָ�����ֱ�ӷ���
//2.�����Ա����ʹ�õ�thisָ��  ע�� �ɼ�if�ж� ��� thisΪNULLֱ��return
void test01()
{
	Person * p1 = NULL;
	p1->show();//���Ե��ã�û�õ�thisָ��
	p1->showage();//�����Ե��ã������쳣 

}

int main()
{
	test01();
	system("pause");
	return 0;
}