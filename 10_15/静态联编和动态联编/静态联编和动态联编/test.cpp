#include<iostream>
#include<string>
using namespace std;


//��̬
//��̬����Ͷ�̬����
class Animal
{
public:

	 virtual void speak()
	{
		cout<<"������˵��"<<endl;
	
	}


};

class Cat :public Animal
{
public:

	void speak()
	{
		cout << "Сè��˵��" << endl;

	}
	
	
};

//����dospeak speak�����ĵ�ַ�Ͱ󶨺���  ������̬���� ����׶ξ�ȷ�����˵�ַ
//�������è��speak ���ܲ�����ǰ�󶨺ú����ĵ�ַ�ˣ�������Ҫ������ʱ��ȥȷ��������ַ
//��̬���� д����dospeak ��Ϊ�麯��
//��̬  ��������û�ָ�� ָ��������������⣺ʲô�Ƕ�̬��
void dospeak(Animal & animal)
{
	animal.speak();

}

//��������˼̳еĹ�ϵ �����������������ת��

void test01()
{
	Cat cat;
	dospeak(cat);
}

void test02()
{
	//cout << sizeof(Animal) << endl; //����virtual֮�� Ϊ4
	Animal * animal = new Cat;
	//animal->speak();//Сè��˵��

	//(*(int *)(*(int*)Animal))  ����ָ�루ָ�뺯������ʹ�ú���ָ�룩
	  //( (void(*)()) (*(int *)*(int*)animal) )   ();//�ڲ�ԭ��

}
int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}