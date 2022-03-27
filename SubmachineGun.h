#pragma once
#include "Pistol.h"

class TSubmachineGun : public TPistol
{
	public:
		
		bool GetButt();
		void SetButt(bool _butt);

		TSubmachineGun();
		TSubmachineGun(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _modeAutomaticFiring, bool _butt);
		TSubmachineGun(const TSubmachineGun& name);

		void Shoot() override;
		void Reload() override;
		void ModeFiring(bool _modeAutomaticFiring) override;
		void Butt(bool _butt);
		void LookWeapon();

	private:

		bool butt;

};