#include<iostream>
#include<string>
#include<fstream>//�ļ���д����ͷ�ļ�
using namespace std;



//д�ļ�
void test01()
{
	//�������ʽ���ļ�
	//ofstream ofs("./test.txt", ios::out | ios::trunc);


	//����ָ���򿪷�ʽ
	ofstream  ofs;
	ofs.open("./test.txt", ios::out | ios::trunc);
	//�ж��Ƿ�����ɹ�
	if (!ofs.is_open())
	{
		cout << "��ʧ��" << endl;
	}

	ofs << "��������ħ" << endl;
	ofs << "���䣺200" << endl;
	ofs << "�Ա���" << endl;
}


//���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("./test.txt", ios::in);
	//�ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "��ʧ��" << endl;
	}
	//1.��һ�ֶ�ȡ��ʽ���Ƽ���
	//char buf[1024];
	//while (ifs >> buf)//���ж�ȡ
	//{
	//	cout << buf << endl;
	//}



	//////�ڶ��ַ�ʽ
	//char buf2[1024];
	//while (!ifs.eof())
	//{
	//	ifs.getline(buf2, sizeof(buf2));
	//	cout << buf2 << endl;
	//}

	//�����ֶ�ȡ��ʽ  �������ַ���ȡ ֱ��β(���Ƽ�ʹ��)
	char c;
	while ( ( c = ifs.get() )!= EOF)
	{
		cout << c;
	}
}

int  main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}