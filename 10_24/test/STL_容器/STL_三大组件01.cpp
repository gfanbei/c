#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


//STL�������  ����  �㷨  ������

//������  �������� ��ָ�����
//��ָͨ��Ҳ��һ�ֵ�����


//��ͨ����
void  test01()
{
	int arr[7] = {9,6,5,2,8,7,3};
	int* p = arr;//ָ��ָ��������Ԫ�ص�ַ
	for (int i = 0; i < 7; ++i)
	{
		//cout << arr[i] << endl;
		cout << (*(p++)) << endl;//ָ�뷽ʽ����

	}
}

void myprint(int v)
{
	cout << v << endl;
}

void test02()
{
	//��������
	vector<int> v;//����һ������ ��������д��int �������� ��������v
	//�������м�������


	//���������е�����
	//���õ�����

	v.push_back(10);//��������
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);


	//��һ�ֱ�����ʽ
	//vector<int>::iterator  itBegain = v.begin();//itBegainָ��v�������׵�ַ
	//vector<int>::iterator  itEnd = v.end();//itEndָ��v������β��ַ����һ����ַ

	//while (itBegain != itEnd)
	//{
	//	cout << *itBegain << endl;
	//	itBegain++;
	//}


	////�ڶ��ֱ�����ʽ
	////for(int i = 0;i < 10; ++i)
	//for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	//{
	//	cout << *it << endl;
	//}

	//�����ַ�ʽ
	for_each(v.begin(), v.end(), myprint);//����ϵͳ�㷨

}

//�Զ����������
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
	Person p1("����", 20);
	Person p2("�ŷ�", 30);
	Person p3("����", 30);
	Person p4("���", 22);
	Person p5("���", 16);

	vector<Person> v;
	v.push_back(p1);//��������
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout <<"���� "<< (*it).m_name<<"  ���� "<<it->m_age;//it����Ϊһָ�� (*it) ΪPerson
		cout <<endl;

	}

}

//��ȷ��*it����ʲô
void test04()
{
	Person p1("����", 20);
	Person p2("�ŷ�", 30);
	Person p3("����", 30);
	Person p4("���", 22);
	Person p5("���", 16);

	vector<Person *> v;//����һ������ ���Person * ��������
	v.push_back(&p1);//�������� 
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
				
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "���� " << (*(*it)).m_name << "  ���� " << (*it)->m_age;//it����Ϊһָ�� ��*vit��ΪPerson*
		cout << endl;

	}
}

//����Ƕ��ʹ��
void test05()
{
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	//3��С������ֵ
	for (int i = 0; i < 5; ++i)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
		v3.push_back(i + 100);
	}

	//��С�������������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	//������������
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); ++it)//���������� ��*it�� Ϊvector<int> ����һ������
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); ++vit)//С��������(*vit) int �������ͣ�ĳ��С�����У�
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