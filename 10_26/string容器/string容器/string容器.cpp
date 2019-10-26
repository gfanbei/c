#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

#if 0

string //���캯��
string(); //����һ���յ��ַ��� ���磺string str
string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
string(const char * s);//ʹ���ַ���s��ʼ��
string(int n, char c);//ʹ��n���ַ�c��ʼ��


string //������ֵ����
string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string& s);//���ַ���s������ǰ���ַ���
string& operator=(const char c);//�ַ���ֵ����ǰ���ַ���
string& assign(const char* s);//���ַ���s��ֵ����ǰ�ַ���
string& assign(const char* s, int n);//���ַ���s��ǰn���ַ�������ǰ�ַ���
string& assign(const string& s);//���ַ���s������ǰ�ַ���
string& assign(int n, char c);//��n���ַ���c������ǰ�ַ���
string& assign(const string&s, int start, int n);//��s��start��ʼn���ַ�ֵ�����ַ���

#endif


void test01()
{
	string str;//Ĭ�Ϲ���
	string str2(str);//��������
	string str3 = str;

	string str4 = "abcdef";//ʹ���ַ���s��ʼ��
	cout << str4 << endl;

	string str5(10 ,'g');//ʹ��n���ַ�c��ʼ��
	cout << str5 << endl;

	//������ֵ
	str = "hellow";//char*�����ַ��� ��ֵ����ǰ���ַ���
	str2 = str4;//string& operator=(const string& s);//���ַ���s������ǰ���ַ���

	//string& assign(const char* s, int n);//���ַ���s��ǰn���ַ�������ǰ�ַ���
	str3.assign("asdfff", 3);
	cout << str3 << endl;


	//string& assign(const string&s, int start, int n);//��s��start��ʼn���ַ�ֵ�����ַ���
	string str6;
	str6.assign("asdfghjk", 1, 4); //��0 ��ʼ����
	cout << str6 << endl;

}

#if 0
string//��ȡ�ַ�����
char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
char& at(int n);//ͨ��at������ȡ�ַ�
#endif

void test02()
{
	string s = "helloword";
	for (int i = 0; i < s.size(); ++i)
	{
		//cout << s[i] << " ";
		cout << s.at(i) << " ";
		
	}
	cout << endl;
	//[]��at����[]����Խ�� ֱ�ӹҵ� at�׳��쳣
	try
	{
		//cout << s[100] << endl;
		cout << s.at(100) << endl;
	}
	catch (out_of_range& e)
	{
		cout <<e.what() << endl;
	}
	catch (...)
	{
		cout << "Խ���쳣" << endl;
	}

}

#if 0

string //ƴ�Ӳ���
string& operator+=(const string& str);//����+=������
string& operator+=(const char* str);//����+=������
string& append(const char* s);//����+=������
string& append(const char* s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);//ͬoperator+=����
string& append(const string &s, int n);//���ַ���s�д�pos��ʼ��n���ַ������ӵ���ǰ�ַ�����Ϊ
string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�


string//���Һ��滻
int find(const string& str, int pos = 0) const;//����str��һ�γ���λ�ã���pos��ʼ����
int find(const char* s, int pos = 0) const;//����str��һ�γ���λ�ã���pos��ʼ����
int find(const char* s, int pos, int n) const;//��posλ�ÿ�ʼ����s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const;//�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const;//����str���һ��λ�ã���posλ�ÿ�ʼ
int rfind(const char * s, int pos = npos) const;//����s���һ�γ���λ�ã���posλ�ÿ�ʼ
int rfind(const char * s, int pos = npos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const;//�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str

#endif

void test03()
{
	//ƴ��
	string s1;
	s1 = "��";
	string s2 = "������";
	s1 += s2;
	cout << s1 <<endl;
	s1.append("�찲��");
	cout << s1 << endl;

	//����
	string s = "abcdef";
	int pos = s.find("bcdf");//���������ң�û�ҵ�  ������ֵΪ-1
	cout << "pos = " <<pos<< endl;//1

	int pos2 = s.rfind("bc");//�����ұ߿�ʼ����
	cout << "pos2 = " << pos2 << endl;//1  rfind��find���һ��  �ڲ�����˳���෴


	//�滻
	string s3 = "hello";
	s3.replace(1,2,"223");//�滻��pos��ʼn���ַ��滻Ϊ�ַ���str
	cout << s3 << endl;//h223lo
}



#if 0
//string //�Ƚϲ���
//compare������ > ʱ���� 1�� < ʱ���� - 1�����ڷ���0
	//�Ƚ����ִ�Сд  �Ƚ�ʱ�ο��ֵ�˳����Խǰ��ԽС

//int compare(const string &s) const;
//int compare(const char *s)const;

#endif

void test04()
{
	string s1 = "abc";
	string s2 = "abc";

	if (s1.compare(s2) == 0)
	{
		cout << "s1����s2" << endl;

	}
	else if (s1.compare(s2) == 1)
	{
		cout << "s1����s2" << endl;
	}
	else 
	{
		cout << "s1С��s2" << endl;
	}
}



/*
string//�Ӵ�
string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���
*/

void test05()
{
	string s1 = "abcdefg";
	string s2 = s1.substr(1, 4);
	cout << s2 << endl;

	//����һ���ʼ����û���
	string emil = "zhangsan@sina.com";
	int pos = emil.find("@");//��0��ʼ���ң��������ң�
	cout << "pos = " << pos << endl;

	string username = emil.substr(0, pos);
	cout << "username =  " << username << endl;
}

#if 0
string //�����ɾ������
string& insert(int pos, const char *s);//�����ַ���
string& insert(int pos, const string& str); // �����ַ���
string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
string& erase(int pos, int n = npose);//ɾ����pos��ʼ��n���ַ�

#endif

void test06()
{
	string s1 = "hellow";
	s1.insert(1,"333");// �����ַ��� h333ellow
	//s1.insert(2,2,'0');//he00llow   ��ָ��λ�ò���n���ַ�c
	cout << s1 << endl;

	s1.erase(1, 3);//ɾ����pos��ʼ��n���ַ� hellow
	cout << s1 << endl;
}

/*
string��c - style�ַ���ת��
*/

void func(string s)
{
	cout << s << endl;
}

void func2( const char * s)
{
	cout << s << endl;
}

void test07()
{
	string s = "adf";
	//string-> const char *
	const char * p = s.c_str();//string����תΪ const char*
	//cout << p << endl;

	func(s);//const char * ����ʽת��Ϊ string


	//const char * -> string
	string  s2(p);//const char* תΪ string ���ù���ķ�ʽ
	//cout << s2 << endl;

	//func2(s2); //string ��������ʽת��Ϊconst char*


}

void test08()
{
	string s = "abcdefg";
	char& a = s[2];
	char& b = s[3];

	a = '2';
	b = '3';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

	s = "kkkkkkkkkkkkkkkkkkkk";//���·����ڴ�
	//a = '2';//��ַ�Ѿ��ı�
	//b = '3';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

}


//��һ���� ��Сд���ַ��� ȫ��תΪ ��д��Сд(��֤�� ���۴�Сд)
void test09()
{
	string s = "jnkDGSDHsdc";

	for (int i = 0; i < s.size(); ++i)
	{
		//s[i] = toupper(s[i]);

		//ȫ��ΪСд
		s[i] = tolower(s[i]);


	}
	cout << s << endl;
}

int main()
{

	//test01();
	//test02();
	//test03();
	 //test04();
	//test05();
	//test06();
	//test07();
	//test08();
	test09();
	system("pause");
	return 0;
}