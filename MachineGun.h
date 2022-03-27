#pragma once
#include "Weapon.h"

class TMachineGun : public TWeapon
{
	public:
		
		TMachineGun();
		TMachineGun(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine);
		TMachineGun(const TMachineGun& name);

		void Shoot() override;
		void Reload() override;
		void LookWeapon();

	private:

};