#include<iostream>
#include<string>
using namespace std;

//�ж��û���������ַ����������ִ�
void test01()
{
	cout << "������һ���ַ�������" << endl;

	//����͵��
	char c = cin.peek();

	
		if (c >= '0' && c <= '9')
		{
			int num;
			cin >> num;
			cout << "������������֣� ����Ϊ " << num << endl;
		}
		
		else
		{
			char buf[1024];
			cin >> buf;
			cout << "���������ַ���,�ַ���Ϊ " <<buf<< endl;

		}

	}
		
	//2.���û�����1��0 ������ ����������� ��������

void test02()
{
	int num;
	cout << "������һ��1��10������" << endl;
	while (true)
	{
		cin >> num;
		if (num >= 0 && num <= 10)
		{

			cout << "������������֣� ����Ϊ " << num << endl;
			break;
		}
		//cout << "�Բ��������������������� " << endl;


		cin.clear();//���ñ�־λ
	    cin.sync();//��ջ�����
		cout << "��־λ " << cin.fail() << endl;//�鿴��־λ 0���� 1������
	}
	

}


int  main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}