
#include "Mystring.h"

//有参构造
Mystring::Mystring(const char * str)
{

	//cout << "有参函数调用" << endl;

	this->pstring = new  char[strlen(str) + 1];//申请内存
	strcpy(this->pstring,str);//将str的数据拷贝到this->pstring
	this->m_size = strlen(str);//字符大小
}

//拷贝构造
Mystring::Mystring(const Mystring & str)
{
	//cout << "拷贝函数调用" << endl;
	this->pstring = new char[strlen(str.pstring) + 1];
	strcpy(this->pstring, str.pstring);
	this->m_size = str.m_size;

}

//<<左移运算符重载
ostream& operator<<(ostream& cout, Mystring& str)
{
	cout << str.pstring << endl ;
	return cout;
}

//右移运算符重载
istream& operator>>(istream& cout, Mystring& str)
{
	//判断 原始是否 有数据   若有先将原有数据释放掉（以免内存泄漏）
	if (str.pstring != NULL)
	{
		delete[] str.pstring;
		str.pstring = NULL;
	}

	//开辟临时字符数组，保存临时输入值
	char buf[1024];
	cin >> buf;

	//将临时数据给str.pstring
	str.pstring = new char[strlen(buf) + 1];
	strcpy(str.pstring, buf);
	str.m_size = strlen(buf);//更新大小
	return cin;
}

//析构
Mystring::~Mystring()
{
	//cout << "析构函数调用" << endl;
	if (this->pstring != NULL)
	{
		delete[] this->pstring;
		this->pstring = NULL;
	}
}

//= 运算符重载 
Mystring& Mystring::operator=(const char * str)
{
	if (this->pstring != NULL)//干掉原有数据
	{
		delete[]this->pstring;
		this->pstring = NULL;
	}

	this->pstring = new char[strlen(str) + 1];
	strcpy(this->pstring, str);

	return *this;

}

Mystring& Mystring::operator=(const Mystring & str)
{
	if (this->pstring != NULL)
	{
		delete[]this->pstring;
		this->pstring = NULL;
	}

	this->pstring = new char[strlen(str.pstring) + 1];
	strcpy(this->pstring, str.pstring);

	return *this;
}

//[]运算符重载
char& Mystring::operator[](int index)
{
	return this->pstring[index];
}


//+运算符重载
Mystring Mystring::operator+(const char * str)
{
	//计算返回字符串字符大小
	int new_size = this->m_size + strlen(str) + 1;
	char* tmp  = new char[new_size]; //开辟临时变量
	memset(tmp,0,new_size);//临时变量初始为0
	strcat(tmp,this->pstring);//strcat拼接字符串
	strcat(tmp, str);


	Mystring newstring(tmp);//创建一个新类 调用构造
	delete[] tmp;//释放临时

	return newstring;


}

Mystring Mystring::operator+(const Mystring & str)
{
	int new_size = this->m_size + strlen(str.pstring) + 1;
	char* tmp = new char[new_size];
	memset(tmp, 0, new_size);
	strcat(tmp, this->pstring);
	strcat(tmp, str.pstring);


	Mystring newstring(tmp);
	delete[] tmp;

	return newstring;
}


//==运算符重载
bool Mystring::operator==(const char * str)  //str3= "aaa"
{
	if (strcmp(this->pstring, str)== 0  && this->m_size == strlen(str))
	{
		return true;

	}
		return false;

}

bool Mystring::operator==(const Mystring & str)
{
	if (strcmp(this->pstring, str.pstring) == 0 && this->m_size == str.m_size)
	{
		return true;

	}

	return false;
}

