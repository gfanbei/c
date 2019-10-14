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

	//����=�����
	Mystring& operator=(const char *str);
	Mystring& operator=(const Mystring& str);

	//����[]�����
	char& operator[](int index);

	//+���������
	Mystring operator+(const char *str); //str2 +"dsfcsdf"
	Mystring operator+(const Mystring& str);

	//==���������
	bool operator==(const char *str);
	bool operator==(const Mystring& str);

private:
	char* pstring;//ָ�������ָ��
	int m_size;//�ַ�����С
};
