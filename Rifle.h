#pragma once
#include "Weapon.h"

class TRifle : public TWeapon
{
public:

	bool GetSight();
	void SetSight(bool _sight);

	TRifle();
	TRifle(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine, bool _sight);
	TRifle(const TRifle& name);

	void Shoot() override;
	void Reload() override;
	virtual void Sight(bool _sight);
	void LookWeapon();

private:

	bool sight;

};