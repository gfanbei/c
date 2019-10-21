#if 0
#include"Person.h"


template<class T1, class T2>

 Person<T1, T2>::Person(T1 name, T2 age)
{
	 this->m_name = name;
	 this->m_age = age;
}



 template<class T1, class T2>

 void Person<T1, T2>::Showperson()
 {
	 cout << "Person的姓名 " << m_name << endl;
	 cout << "Person的年龄 " << m_age << endl;
 }

#endif