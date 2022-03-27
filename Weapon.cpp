#include <iostream>
#include "Weapon.h"

long TWeapon::GetAllBullet()
{
	return allBullet;
}

void TWeapon::SetAllBullet(long _allBullet)
{
	if (_allBullet > 0)
	{
		allBullet = _allBullet;
	}
}

short TWeapon::GetLength()
{
	return length;
}

void TWeapon::SetLength(short _length)
{
	if (_length > 0)
	{
		length = _length;
	}
}

short TWeapon::GetWidth()
{
	return width;
}

void TWeapon::SetWidth(short _width)
{
	if (_width > 0)
	{
		width = _width;
	}
}

short TWeapon::GetWeigth()
{
	return weigth;
}

void TWeapon::SetWeigth(short _weigth)
{
	if (_weigth > 0)
	{
		weigth = _weigth;
	}
}

short TWeapon::GetAmmoMagazine()
{
	return ammoMagazine;
}

void TWeapon::SetAmmoMagazine(short _ammoMagazine)
{
	if (_ammoMagazine > 0)
	{
		ammoMagazine = _ammoMagazine;
	}
}

TWeapon::TWeapon()
{
	allBullet = 10;
	length = 10;
	width = 10;
	weigth = 5;
	ammoMagazine = 1;
}

TWeapon::TWeapon(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine)
{
	this->allBullet = _allBullet;
	this->length = _length;
	this->width = _width;
	this->weigth = _weigth;
	this->ammoMagazine = _ammoMagazine;
}

TWeapon::TWeapon(const TWeapon& name)
{
	allBullet = name.allBullet;
	length = name.length;
	width = name.width;
	weigth = name.weigth;
	ammoMagazine = name.ammoMagazine;
}

void TWeapon::Shoot()
{
	std::cout << "weapon fire\n";
}

void TWeapon::Reload()
{
	std::cout << "weapon reload\n";
}

void TWeapon::LookWeapon()
{
	std::cout << "you look on weapon\n";
}