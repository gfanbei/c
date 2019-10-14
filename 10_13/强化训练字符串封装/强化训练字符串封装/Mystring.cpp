
#include "Mystring.h"

//�вι���
Mystring::Mystring(const char * str)
{

	//cout << "�вκ�������" << endl;

	this->pstring = new  char[strlen(str) + 1];//�����ڴ�
	strcpy(this->pstring,str);//��str�����ݿ�����this->pstring
	this->m_size = strlen(str);//�ַ���С
}

//��������
Mystring::Mystring(const Mystring & str)
{
	//cout << "������������" << endl;
	this->pstring = new char[strlen(str.pstring) + 1];
	strcpy(this->pstring, str.pstring);
	this->m_size = str.m_size;

}

//<<�������������
ostream& operator<<(ostream& cout, Mystring& str)
{
	cout << str.pstring << endl ;
	return cout;
}

//�������������
istream& operator>>(istream& cout, Mystring& str)
{
	//�ж� ԭʼ�Ƿ� ������   �����Ƚ�ԭ�������ͷŵ��������ڴ�й©��
	if (str.pstring != NULL)
	{
		delete[] str.pstring;
		str.pstring = NULL;
	}

	//������ʱ�ַ����飬������ʱ����ֵ
	char buf[1024];
	cin >> buf;

	//����ʱ���ݸ�str.pstring
	str.pstring = new char[strlen(buf) + 1];
	strcpy(str.pstring, buf);
	str.m_size = strlen(buf);//���´�С
	return cin;
}

//����
Mystring::~Mystring()
{
	//cout << "������������" << endl;
	if (this->pstring != NULL)
	{
		delete[] this->pstring;
		this->pstring = NULL;
	}
}

//= ��������� 
Mystring& Mystring::operator=(const char * str)
{
	if (this->pstring != NULL)//�ɵ�ԭ������
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

//[]���������
char& Mystring::operator[](int index)
{
	return this->pstring[index];
}


//+���������
Mystring Mystring::operator+(const char * str)
{
	//���㷵���ַ����ַ���С
	int new_size = this->m_size + strlen(str) + 1;
	char* tmp  = new char[new_size]; //������ʱ����
	memset(tmp,0,new_size);//��ʱ������ʼΪ0
	strcat(tmp,this->pstring);//strcatƴ���ַ���
	strcat(tmp, str);


	Mystring newstring(tmp);//����һ������ ���ù���
	delete[] tmp;//�ͷ���ʱ

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


//==���������
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

