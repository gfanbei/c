#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

#if 0

string //构造函数
string(); //创建一个空的字符串 例如：string str
string(const string& str);//使用一个string对象初始化另一个string对象
string(const char * s);//使用字符串s初始化
string(int n, char c);//使用n个字符c初始化


string //基本赋值操作
string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
string& operator=(const string& s);//白字符串s赋给当前的字符串
string& operator=(const char c);//字符赋值给当前的字符串
string& assign(const char* s);//白字符串s赋值给当前字符串
string& assign(const char* s, int n);//把字符串s的前n个字符赋给当前字符串
string& assign(const string& s);//把字符串s赋给当前字符串
string& assign(int n, char c);//用n个字符串c赋给当前字符串
string& assign(const string&s, int start, int n);//将s从start开始n个字符值赋给字符串

#endif


void test01()
{
	string str;//默认构造
	string str2(str);//拷贝构造
	string str3 = str;

	string str4 = "abcdef";//使用字符串s初始化
	cout << str4 << endl;

	string str5(10 ,'g');//使用n个字符c初始化
	cout << str5 << endl;

	//基本赋值
	str = "hellow";//char*类型字符串 赋值给当前的字符串
	str2 = str4;//string& operator=(const string& s);//白字符串s赋给当前的字符串

	//string& assign(const char* s, int n);//把字符串s的前n个字符赋给当前字符串
	str3.assign("asdfff", 3);
	cout << str3 << endl;


	//string& assign(const string&s, int start, int n);//将s从start开始n个字符值赋给字符串
	string str6;
	str6.assign("asdfghjk", 1, 4); //从0 开始索引
	cout << str6 << endl;

}

#if 0
string//存取字符操作
char& operator[](int n);//通过[]方式取字符
char& at(int n);//通过at方法获取字符
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
	//[]与at区别？[]访问越界 直接挂掉 at抛出异常
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
		cout << "越界异常" << endl;
	}

}

#if 0

string //拼接操作
string& operator+=(const string& str);//重载+=操作符
string& operator+=(const char* str);//重载+=操作符
string& append(const char* s);//重载+=操作符
string& append(const char* s, int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);//同operator+=（）
string& append(const string &s, int n);//把字符串s中从pos开始的n个字符串连接到当前字符串接为
string& append(int n, char c);//在当前字符串结尾添加n个字符


string//查找和替换
int find(const string& str, int pos = 0) const;//查找str第一次出现位置，从pos开始查找
int find(const char* s, int pos = 0) const;//查找str第一次出现位置，从pos开始查找
int find(const char* s, int pos, int n) const;//从pos位置开始查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;//查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;//查找str最后一次位置，从pos位置开始
int rfind(const char * s, int pos = npos) const;//查找s最后一次出现位置，从pos位置开始
int rfind(const char * s, int pos = npos, int n) const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const;//查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str);//替换从pos开始n个字符为字符串str

#endif

void test03()
{
	//拼接
	string s1;
	s1 = "我";
	string s2 = "爱北京";
	s1 += s2;
	cout << s1 <<endl;
	s1.append("天安门");
	cout << s1 << endl;

	//查找
	string s = "abcdef";
	int pos = s.find("bcdf");//（从左往右）没找到  ，返回值为-1
	cout << "pos = " <<pos<< endl;//1

	int pos2 = s.rfind("bc");//从最右边开始查找
	cout << "pos2 = " << pos2 << endl;//1  rfind与find结果一样  内部查找顺序相反


	//替换
	string s3 = "hello";
	s3.replace(1,2,"223");//替换从pos开始n个字符替换为字符串str
	cout << s3 << endl;//h223lo
}



#if 0
//string //比较操作
//compare函数在 > 时返回 1， < 时返回 - 1，等于返回0
	//比较区分大小写  比较时参考字典顺序，排越前的越小

//int compare(const string &s) const;
//int compare(const char *s)const;

#endif

void test04()
{
	string s1 = "abc";
	string s2 = "abc";

	if (s1.compare(s2) == 0)
	{
		cout << "s1等于s2" << endl;

	}
	else if (s1.compare(s2) == 1)
	{
		cout << "s1大于s2" << endl;
	}
	else 
	{
		cout << "s1小于s2" << endl;
	}
}



/*
string//子串
string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
*/

void test05()
{
	string s1 = "abcdefg";
	string s2 = s1.substr(1, 4);
	cout << s2 << endl;

	//查找一个邮件的用户名
	string emil = "zhangsan@sina.com";
	int pos = emil.find("@");//从0开始查找（从左往右）
	cout << "pos = " << pos << endl;

	string username = emil.substr(0, pos);
	cout << "username =  " << username << endl;
}

#if 0
string //插入和删除操作
string& insert(int pos, const char *s);//插入字符串
string& insert(int pos, const string& str); // 插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
string& erase(int pos, int n = npose);//删除从pos开始的n个字符

#endif

void test06()
{
	string s1 = "hellow";
	s1.insert(1,"333");// 插入字符串 h333ellow
	//s1.insert(2,2,'0');//he00llow   在指定位置插入n个字符c
	cout << s1 << endl;

	s1.erase(1, 3);//删除从pos开始的n个字符 hellow
	cout << s1 << endl;
}

/*
string和c - style字符串转换
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
	const char * p = s.c_str();//string类型转为 const char*
	//cout << p << endl;

	func(s);//const char * 可隐式转换为 string


	//const char * -> string
	string  s2(p);//const char* 转为 string 利用构造的方式
	//cout << s2 << endl;

	//func2(s2); //string 不可以隐式转换为const char*


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

	s = "kkkkkkkkkkkkkkkkkkkk";//重新分配内存
	//a = '2';//地址已经改变
	//b = '3';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

}


//将一含有 大小写的字符串 全部转为 大写或小写(验证码 不论大小写)
void test09()
{
	string s = "jnkDGSDHsdc";

	for (int i = 0; i < s.size(); ++i)
	{
		//s[i] = toupper(s[i]);

		//全变为小写
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