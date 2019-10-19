
#include "DragonSword.h"

DragonSword::DragonSword()
{
	this->m_BaseDamage = 20;
	this->m_WeaponName = "������";
	this->suckRate = 20;
	this->holdRate = 30;
	this->critRate = 35;

}

//�����˺�
int DragonSword::getBaseDamage()
{
	return this->m_BaseDamage;
}

//��Ѫ
int DragonSword::getSuckBlood()
{
	if (isTrigger(suckRate))
	{
		return this->m_BaseDamage * 0.5;  //�������������˺�һ����Ѫ
	}
	return 0;
}

//����
bool DragonSword::getHold()
{
	if (isTrigger(holdRate))
	{
		return true;
	}
	return false;
}

//����
bool DragonSword::getCrit()
{
	if (isTrigger(critRate))
	{
		return true;
	}
	return false;
}

//ͨ��isTrigger�ж��Ƿ񴥷���Ч
//��� 1~100������
//�����紫����һ��30��Ȼ�����һ����������������������1-30֮�䣬�򴥷���Ч��
bool DragonSword::isTrigger(int rate)
{


	int num = rand() % 100 + 1;//���������1-100
	if (num < rate)
	{
		return true;
	}
	return false;
}
