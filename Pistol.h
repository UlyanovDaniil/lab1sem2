#pragma once
#include "Weapon.h"

class TPistol : public TWeapon
{
	public:
		
		bool GetModeAutomaticFiring();
		void SetModeAutomaticFiring(bool _modeAutomaticFiring);

		TPistol();
		TPistol(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _modeAutomaticFiring);
		TPistol(const TPistol& name);

		void Shoot() override;
		void Reload() override;
		virtual void ModeFiring(bool _modeAutomaticFiring);
		void LookWeapon();

	private:

		bool modeAutomaticFiring;

};