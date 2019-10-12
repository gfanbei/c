#include<iostream>
#include<string>
using namespace std;


//��д������ ���ӻ��п����͹ػ�״̬������������Ƶ�����ṩ��Ƶ�����ķ�����
//���ڵ��ӻ�ֻ����һ����Ƶ��������ָ��Ƶ��������ң���࣬ң�������ӵ�е��ӻ����еĹ��ܣ������Ӹ���
//�����̨����

class Remote;

class Television
{
	friend class Remote;//��Ԫ�ࣨTelevision�ĺ����ѣ� ������ͨ��Remote����Television��

public:
	enum {on ,off};//����״̬
	enum {minvol = 0,maxvol = 100};//������0��100
	enum {minchannel = 1,maxchannel = 255};//Ƶ����1��255
	
	Television()//���� ����ʼ��
	{
		mstate = off;//��
		mvolum = minvol;//��С����
		mchannel = minchannel;//��СƵ��
	}


	//�򿪵��ӻ�
	void Onoroff()
	{
	
		this->mstate = (this->mstate == on ? off : on);//��������ʼʱ�ػ�  ���this->mstate =  on
	}

	//��������
	void Upvolum()
	{
		if (this->mvolum >= maxvol)
		{
			return;
		}
		this->mvolum++;
	}

	//��������
	void Downvolum()
	{
		if (this->mvolum <= minvol)
		{
			return;
		}
		this->mvolum--;
	}

	//��������Ƶ��
	void UpChannel()//��
	{
		if (this->mchannel >= maxchannel)
		{
			return;
		}
		this->mchannel++;
	}

	void Downchannel()//��
	{
		if (this->mchannel <= minchannel)
		{
			return;
		}
		this->mchannel--;
	
	}

	//չʾ��ǰ����״̬��Ϣ
	void Showtelstate()
	{
		cout<<"����״̬ " << (mstate == on ?"�ѿ���":"�ѹػ�")<< endl;
		if (mstate == on)
		{
			cout << "��ǰ���� " << mvolum << endl;
			cout << "��ǰƵ�� " << mchannel << endl;
		}
		    cout<<"------------------"<<endl;
	}

private:
	int mstate;//����״̬�� ���� �ػ�
	int mvolum;//���ӻ�����
	int mchannel;//����Ƶ��
};

//���ӻ���ֻ̨��һ��һ���ĵ���ң�ؿ���ָ��Ƶ��
//����ң����

class Remote
{
public:
	Remote(Television* television) //���캯��
	{
		ptlevision = television;
	}

public:
	void Onoroff()
	{
		ptlevision->Onoroff();

	}
	//��������
	void Upvolum()
	{
		ptlevision->Upvolum();

	}

	//��������
	void Downvolum()
	{
		ptlevision->Downvolum();

	}

	//��������Ƶ��

	void Upchannel()
	{
		ptlevision->UpChannel();
	}

	void Downchannel()
	{
		ptlevision->Downchannel();
	}
	

	//����Ƶ�� ң����������
	void  Setchannel(int channel)
	{
		if (channel < Television::minchannel || channel > Television::maxchannel)
		{
			return;
		}
		ptlevision->mchannel = channel;//Ҫͨ����Ԫ���ܷ���

	}

	//��ʾ���ӵ�ǰ��Ϣ
	void Showtelstate()
	{
		ptlevision->Showtelstate();
	}

private:
	Television* ptlevision; //ά��һ��ָ�����ڷ��ʸ��ࣨTelevision��
};

//ֱ�Ӳ�������

void test01()
{
	//��������
	Television television;
	television.Showtelstate();//����״̬
	television.Onoroff();//����
	television.Upvolum();//��������+1
	television.Upvolum();//��������+1
	television.Upvolum();//��������+1
	television.Upvolum();//��������+1

	television.UpChannel();//Ƶ��+1
	television.UpChannel();//Ƶ��+1
	television.Showtelstate();//���ӻ�״̬

}

//ͨ��ң�ز�������
void test02()
{
	//����������
	Television television;
	//����ң��
	Remote remote( &television );
	remote.Onoroff();//����
	remote.Upchannel();//Ƶ��+1
	remote.Upchannel();//Ƶ��+1
	remote.Upchannel();//Ƶ��+1
	remote.Upchannel();//Ƶ��+1
	remote.Upchannel();//Ƶ��+1

	remote.Upvolum();//��������+1
	remote.Upvolum();//��������+1
	remote.Upvolum();//��������+1

	//remote.Setchannel(20);���õ�ǰƵ��
	remote.Showtelstate();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}