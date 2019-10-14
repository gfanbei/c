#define _CRT_SECURE_NO_WARNINGS
#define pragma once
#include<iostream>
#include<string>
using namespace std;

class Mystring
{
	friend ostream& operator<<(ostream& cout, Mystring& str);
	friend istream& operator>>(istream& cout, Mystring& str);
public:
	Mystring(const char* str);
	Mystring(const Mystring& str);

	~Mystring();

	//重载=运算符
	Mystring& operator=(const char *str);
	Mystring& operator=(const Mystring& str);

	//重载[]运算符
	char& operator[](int index);

	//+运算符重载
	Mystring operator+(const char *str); //str2 +"dsfcsdf"
	Mystring operator+(const Mystring& str);

	//==运算符重载
	bool operator==(const char *str);
	bool operator==(const Mystring& str);

private:
	char* pstring;//指向堆区的指针
	int m_size;//字符串大小
};
