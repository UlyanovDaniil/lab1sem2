#include <iostream>
#include "Weapon.h"
#include "MachineGun.h"
#include "Pistol.h"
#include "Rifle.h"
#include "Shotgun.h"
#include "SniperRifle.h"
#include "SubmachineGun.h"

int main()
{
    TMachineGun M249;

    M249.SetAllBullet(400);
    M249.SetAmmoMagazine(100);
    M249.SetLength(90);
    M249.SetWeigth(40);
    M249.SetWidth(25);

    std::cout << M249.GetAllBullet() << " " << M249.GetAmmoMagazine() << " " << "\n\n";

    TPistol USP(50, 35, 15, 1, 12, 0);
    
    USP.Shoot();
    USP.Reload();

    std::cout << "\n";

    TRifle AK_47(100, 90, 30, 12, 30, 0);
    TRifle AK_74 = AK_47;

    AK_74.Shoot();
    AK_74.Reload();

    AK_47.Sight(AK_47.GetSight());

    std::cout << "\n";

    TSniperRifle AWP(20, 130, 25, 20, 5, 1);
    
    AWP.Sight(AWP.GetSight());

    std::cout << "\n";

    TWeapon* mp7 = new TSubmachineGun();
    TWeapon* glock = new TPistol();
    TWeapon* m4 = new TRifle();
    TWeapon* ssg = new TSniperRifle();

    mp7->LookWeapon();
    glock->LookWeapon();
    m4->LookWeapon();
    ssg->LookWeapon();

    return 0;
}