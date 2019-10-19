
#include "DragonSword.h"

DragonSword::DragonSword()
{
	this->m_BaseDamage = 20;
	this->m_WeaponName = "屠龙刀";
	this->suckRate = 20;
	this->holdRate = 30;
	this->critRate = 35;

}

//基础伤害
int DragonSword::getBaseDamage()
{
	return this->m_BaseDamage;
}

//吸血
int DragonSword::getSuckBlood()
{
	if (isTrigger(suckRate))
	{
		return this->m_BaseDamage * 0.5;  //按照武器基础伤害一半吸血
	}
	return 0;
}

//定身
bool DragonSword::getHold()
{
	if (isTrigger(holdRate))
	{
		return true;
	}
	return false;
}

//暴击
bool DragonSword::getCrit()
{
	if (isTrigger(critRate))
	{
		return true;
	}
	return false;
}

//通过isTrigger判断是否触发特效
//随机 1~100的数字
//（例如传进来一个30，然后产生一个随机数，如果这个随机数在1-30之间，则触发特效）
bool DragonSword::isTrigger(int rate)
{


	int num = rand() % 100 + 1;//产生随机数1-100
	if (num < rate)
	{
		return true;
	}
	return false;
}
