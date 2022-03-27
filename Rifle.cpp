#include <iostream>
#include "Rifle.h"

bool TRifle::GetSight()
{
	return sight;
}

void TRifle::SetSight(bool _sight)
{
	sight = _sight;
}

TRifle::TRifle() : TWeapon()
{
	sight = 0;
}

TRifle::TRifle(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _sight) : TWeapon(_allBullet, _length, _width, _weigth, _ammoMagazine)
{
	this->sight = _sight;
}

TRifle::TRifle(const TRifle& name) : TWeapon(name)
{
	sight = name.sight;
}

void TRifle::Shoot()
{
	std::cout << "rifle fire\n";
}

void TRifle::Reload()
{
	std::cout << "rifle reload\n";
}

void TRifle::Sight(bool _sight)
{
	if (_sight)
	{
		std::cout << "rifle have sight\n";
	}
	else
	{
		std::cout << "rifle dont have sight\n";
	}
}

void TRifle::LookWeapon()
{
	std::cout << "you look on rifle\n";
}
