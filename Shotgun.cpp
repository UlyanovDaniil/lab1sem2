#include <iostream>
#include "Shotgun.h"

short TShotgun::GetBulletsPerShot()
{
	return bulletsPerShot;
}

void TShotgun::SetBulletsPerShot(short _bulletsPerShot)
{
	if (_bulletsPerShot > 0)
	{
		bulletsPerShot = _bulletsPerShot;
	}
}

TShotgun::TShotgun() : TWeapon()
{
	bulletsPerShot = 0;
}

TShotgun::TShotgun(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, short _bulletPerShot) : TWeapon(_allBullet, _length,_width, _weigth, _ammoMagazine)
{
	this->bulletsPerShot = _bulletPerShot;
}

TShotgun::TShotgun(const TShotgun& name) : TWeapon(name)
{
	bulletsPerShot = name.bulletsPerShot;
}

void TShotgun::Shoot()
{
	std::cout << "shotgun fire\n";
}

void TShotgun::Reload()
{
	std::cout << "shotgun reload\n";
}

void TShotgun::LookWeapon()
{
	std::cout << "you look on shotgun\n";
}
