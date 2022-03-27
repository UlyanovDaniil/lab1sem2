#include <iostream>
#include "SniperRifle.h"

TSniperRifle::TSniperRifle() : TRifle()
{
}

TSniperRifle::TSniperRifle(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _sight) : TRifle(_allBullet, _length, _width, _weigth, _ammoMagazine, _sight)
{
}

TSniperRifle::TSniperRifle(const TSniperRifle& name)
{
}

void TSniperRifle::Shoot()
{
	std::cout << "sniper rifle fire\n";
}

void TSniperRifle::Reload()
{
	std::cout << "sniper rifle reload\n";
}

void TSniperRifle::Sight(bool _sight)
{
	if (_sight)
	{
		std::cout << "sniper rifle have sight\n";
	}
	else
	{
		std::cout << "sniper rifle dont have sight\n";
	}
}

void TSniperRifle::LookWeapon()
{
	std::cout << "you look on sniper rifle\n";
}
