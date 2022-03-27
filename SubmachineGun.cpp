#include <iostream>
#include "SubmachineGun.h"

bool TSubmachineGun::GetButt()
{
	return butt;
}

void TSubmachineGun::SetButt(bool _butt)
{
	butt = _butt;
}

TSubmachineGun::TSubmachineGun() : TPistol()
{
	butt = 0;
}

TSubmachineGun::TSubmachineGun(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _modeAutomaticFiring, bool _butt) : TPistol(_allBullet, _length, _width, _weigth, _ammoMagazine, _modeAutomaticFiring)
{
	this->butt = _butt;
}

TSubmachineGun::TSubmachineGun(const TSubmachineGun& name) : TPistol(name)
{
	butt = name.butt;
}

void TSubmachineGun::Shoot()
{
	std::cout << "submachine gun fire\n";
}

void TSubmachineGun::Reload()
{
	std::cout << "submachine gun reload\n";
}

void TSubmachineGun::ModeFiring(bool _modeAutomaticFiring)
{
	if (_modeAutomaticFiring)
	{
		std::cout << "submachine gun mode firing automatic\n";
	}
	else
	{
		std::cout << "submachine gun mode firing not automatic\n";
	}
}

void TSubmachineGun::Butt(bool _butt)
{
	if (_butt)
	{
		std::cout << "submachine gun have butt\n";
	}
	else
	{
		std::cout << "submachine gun dont have butt\n";
	}
}

void TSubmachineGun::LookWeapon()
{
	std::cout << "you look on submachine gun\n";
}