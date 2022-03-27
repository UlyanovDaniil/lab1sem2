#pragma once

class TWeapon
{
	public:

		long GetAllBullet();
		void SetAllBullet(long _allBullet);
		short GetLength();
		void SetLength(short _length);
		short GetWidth();
		void SetWidth(short _width);
		short GetWeigth();
		void SetWeigth(short _weigth);
		short GetAmmoMagazine();
		void SetAmmoMagazine(short _ammoMagazine);

		TWeapon();
		TWeapon(long _allBullet, short _length, short _width, short _weigth, short _ammoMagazine);
		TWeapon(const TWeapon& name);

		virtual void Shoot() = 0;
		virtual void Reload() = 0;
		virtual void LookWeapon();

	private:

		long allBullet;
		short length;
		short width;
		short weigth;
		short ammoMagazine;

};