#include <iostream>
#include "Pistol.h"

bool TPistol::GetModeAutomaticFiring()
{
	return modeAutomaticFiring;
}

void TPistol::SetModeAutomaticFiring(bool _modeAutomaticFiring)
{
	modeAutomaticFiring = _modeAutomaticFiring;
}

TPistol::TPistol() : TWeapon()
{
	modeAutomaticFiring = 0;
}

TPistol::TPistol(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _modeAutomaticFiring) : TWeapon(_allBullet, _length, _width, _weigth, _ammoMagazine)
{
	this->modeAutomaticFiring = _modeAutomaticFiring;
}

TPistol::TPistol(const TPistol& name) : TWeapon(name)
{
	modeAutomaticFiring = name.modeAutomaticFiring;
}

void TPistol::Shoot()
{
	std::cout << "pistol fire\n";
}

void TPistol::Reload()
{
	std::cout << "pistol reload\n";
}

void TPistol::ModeFiring(bool _modeAutomaticFiring)
{
	if (_modeAutomaticFiring)
	{
		std::cout << "pistol mode firing automatic\n";
	}
	else
	{
		std::cout << "pistol mode firing not automatic\n";
	}
}

void TPistol::LookWeapon()
{
	std::cout << "you look on pistol\n";
}