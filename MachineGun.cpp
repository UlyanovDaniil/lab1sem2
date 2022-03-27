#include <iostream>
#include "MachineGun.h"

TMachineGun::TMachineGun() : TWeapon()
{
}

TMachineGun::TMachineGun(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine) : TWeapon(_allBullet, _length, _width, _weigth, _ammoMagazine)
{
}

TMachineGun::TMachineGun(const TMachineGun& name) : TWeapon(name)
{
}

void TMachineGun::Shoot()
{
	std::cout << "machine gun fire\n";
}

void TMachineGun::Reload()
{
	std::cout << "machine gun reload\n";
}

void TMachineGun::LookWeapon()
{
	std::cout << "you look on machine gun\n";
}
