#pragma once 
#include <iostream>
#include "Weapon.h"
#include <string>
using namespace std;

class DragonSword :public Weapon
{
public:
	DragonSword();

	//��ȡ�����˺�
	virtual int getBaseDamage();

	//��ȡ��Ѫ
	virtual int getSuckBlood();

	//��ȡ�Ƿ���
	virtual bool getHold();

	//��ȡ�Ƿ񱩻�
	virtual bool getCrit();

	//  ��Ѫ��  ������ ������ 
	int suckRate;
	int holdRate;
	int critRate;

	//������� �ж��Ƿ񴥷�
	bool isTrigger(int rate);


};
