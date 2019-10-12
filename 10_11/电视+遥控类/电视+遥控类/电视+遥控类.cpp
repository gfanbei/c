#include<iostream>
#include<string>
using namespace std;


//编写电视类 电视机有开机和关机状态，有音量，有频道，提供音频操作的方法，
//由于电视机只能逐一调整频道，不能指定频道，增加遥控类，遥控类除了拥有电视机已有的功能，在增加根据
//输入调台功能

class Remote;

class Television
{
	friend class Remote;//友元类（Television的好朋友） ，即可通过Remote访问Television类

public:
	enum {on ,off};//电视状态
	enum {minvol = 0,maxvol = 100};//音量从0到100
	enum {minchannel = 1,maxchannel = 255};//频道从1到255
	
	Television()//构造 ，初始化
	{
		mstate = off;//关
		mvolum = minvol;//最小音量
		mchannel = minchannel;//最小频道
	}


	//打开电视机
	void Onoroff()
	{
	
		this->mstate = (this->mstate == on ? off : on);//开机，初始时关机  结果this->mstate =  on
	}

	//调高音量
	void Upvolum()
	{
		if (this->mvolum >= maxvol)
		{
			return;
		}
		this->mvolum++;
	}

	//调低音量
	void Downvolum()
	{
		if (this->mvolum <= minvol)
		{
			return;
		}
		this->mvolum--;
	}

	//更换电视频道
	void UpChannel()//加
	{
		if (this->mchannel >= maxchannel)
		{
			return;
		}
		this->mchannel++;
	}

	void Downchannel()//减
	{
		if (this->mchannel <= minchannel)
		{
			return;
		}
		this->mchannel--;
	
	}

	//展示当前电视状态信息
	void Showtelstate()
	{
		cout<<"开机状态 " << (mstate == on ?"已开机":"已关机")<< endl;
		if (mstate == on)
		{
			cout << "当前音量 " << mvolum << endl;
			cout << "当前频道 " << mchannel << endl;
		}
		    cout<<"------------------"<<endl;
	}

private:
	int mstate;//电视状态， 开机 关机
	int mvolum;//电视机音量
	int mchannel;//电视频道
};

//电视机调台只能一个一个的调，遥控可以指定频道
//电视遥控器

class Remote
{
public:
	Remote(Television* television) //构造函数
	{
		ptlevision = television;
	}

public:
	void Onoroff()
	{
		ptlevision->Onoroff();

	}
	//调高音量
	void Upvolum()
	{
		ptlevision->Upvolum();

	}

	//调低音量
	void Downvolum()
	{
		ptlevision->Downvolum();

	}

	//更换电视频道

	void Upchannel()
	{
		ptlevision->UpChannel();
	}

	void Downchannel()
	{
		ptlevision->Downchannel();
	}
	

	//设置频道 遥控新增功能
	void  Setchannel(int channel)
	{
		if (channel < Television::minchannel || channel > Television::maxchannel)
		{
			return;
		}
		ptlevision->mchannel = channel;//要通过友元才能访问

	}

	//显示电视当前信息
	void Showtelstate()
	{
		ptlevision->Showtelstate();
	}

private:
	Television* ptlevision; //维护一个指针用于访问该类（Television）
};

//直接操作电视

void test01()
{
	//创建电视
	Television television;
	television.Showtelstate();//电视状态
	television.Onoroff();//开机
	television.Upvolum();//增加音量+1
	television.Upvolum();//增加音量+1
	television.Upvolum();//增加音量+1
	television.Upvolum();//增加音量+1

	television.UpChannel();//频道+1
	television.UpChannel();//频道+1
	television.Showtelstate();//电视机状态

}

//通过遥控操作电视
void test02()
{
	//创建电视类
	Television television;
	//创建遥控
	Remote remote( &television );
	remote.Onoroff();//开机
	remote.Upchannel();//频道+1
	remote.Upchannel();//频道+1
	remote.Upchannel();//频道+1
	remote.Upchannel();//频道+1
	remote.Upchannel();//频道+1

	remote.Upvolum();//增加音量+1
	remote.Upvolum();//增加音量+1
	remote.Upvolum();//增加音量+1

	//remote.Setchannel(20);设置当前频道
	remote.Showtelstate();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}