#include<iostream>
#include<string>

using namespace std;

class Phone
{
public:
	Phone()
	{
		cout << "�ֻ��Ĺ��캯������" << endl;
	}

	Phone(string name)
	{
		cout << "phone���вι������" << endl;
		m_phonename = name;
	}

	~Phone()
	{
		cout << "�ֻ���������������" << endl;
	}

	string m_phonename;
};

class Game
{
public:
	Game()
	{
		cout << "game�Ĺ��캯������" << endl;
	}

	Game(string name)
	{
		cout << "game���вι������" << endl;
		m_gamename = name;
	}

	~Game()
	{
		cout << "game��������������" << endl;
	}

	string m_gamename;
};


class Person
{
public:
	Person()
	{
		cout << "Person�Ĺ������" << endl;
	}

	//ʹ�ó�ʼ���б� ��ʼ��
	Person(string name, string phonename, string gamename) :m_name(name), m_phone(phonename), m_game(gamename)
	{
		cout << "Person���вι������" << endl;
		//m_name = name;
	}

	void playGame()
	{
		cout << m_name << "���š�" << m_phone.m_phonename << "�����ֻ������š�" << m_game.m_gamename << "����Ϸ" << endl;
	}

	//����
	~Person()
	{
		cout << "Person����������" << endl;
	}

	string m_name; //����
	Phone  m_phone;//�ֻ����ֻ��ࣩ
	Game   m_game; //��Ϸ ����Ϸ�ࣩ
};

//�������Ϊ���Ա����ʱ������˳���Ƚ�����һһ���죬Ȼ�����Լ���������˳�����෴
void test01()
{
	Person  p("����"," ƻ�� ","��ˮ��");
	p.playGame();
}

int main()
{

	test01();
	system("pause");
	return 0;
}