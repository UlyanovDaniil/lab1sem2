#pragma once
#include "Rifle.h"

class TSniperRifle : public TRifle
{
	public:

		TSniperRifle();
		TSniperRifle(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _sight);
		TSniperRifle(const TSniperRifle& name);

		void Shoot() override;
		void Reload() override;
		void Sight(bool _sight) override;
		void LookWeapon();

	private:

};