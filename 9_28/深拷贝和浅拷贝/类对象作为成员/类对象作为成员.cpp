#include<iostream>
#include<string>

using namespace std;

class Phone
{
public:
	Phone()
	{
		cout << "手机的构造函数调用" << endl;
	}

	Phone(string name)
	{
		cout << "phone的有参构造调用" << endl;
		m_phonename = name;
	}

	~Phone()
	{
		cout << "手机的析构函数调用" << endl;
	}

	string m_phonename;
};

class Game
{
public:
	Game()
	{
		cout << "game的构造函数调用" << endl;
	}

	Game(string name)
	{
		cout << "game的有参构造调用" << endl;
		m_gamename = name;
	}

	~Game()
	{
		cout << "game的析构函数调用" << endl;
	}

	string m_gamename;
};


class Person
{
public:
	Person()
	{
		cout << "Person的构造调用" << endl;
	}

	//使用初始化列表 初始化
	Person(string name, string phonename, string gamename) :m_name(name), m_phone(phonename), m_game(gamename)
	{
		cout << "Person的有参构造调用" << endl;
		//m_name = name;
	}

	void playGame()
	{
		cout << m_name << "拿着《" << m_phone.m_phonename << "》牌手机，玩着《" << m_game.m_gamename << "》游戏" << endl;
	}

	//析构
	~Person()
	{
		cout << "Person的析构调用" << endl;
	}

	string m_name; //人名
	Phone  m_phone;//手机（手机类）
	Game   m_game; //游戏 （游戏类）
};

//类对象作为类成员对象时，构造顺序先将对象一一构造，然后构造自己，析构的顺序则相反
void test01()
{
	Person  p("狗蛋"," 苹果 ","切水果");
	p.playGame();
}

int main()
{

	test01();
	system("pause");
	return 0;
}