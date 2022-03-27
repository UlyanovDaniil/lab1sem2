#pragma once
#include "Weapon.h"

class TShotgun : public TWeapon
{
	public:

		short GetBulletsPerShot();
		void SetBulletsPerShot(short _bulletsPerShot);

		TShotgun();
		TShotgun(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, short _bulletPerShot);
		TShotgun(const TShotgun& name);

		void Shoot() override;
		void Reload() override;
		void LookWeapon();

	private:

		short bulletsPerShot;

};