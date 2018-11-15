#include "base.h"

using namespace std;

vector<TypeOfUnit> Base::ableToBuild = {Fighter, Infantry, MdTank, Mech, MegaTank, Neotank, Recon, Tank};

Base::Base(int x, int y, QImage img, Team tm) : Terrain (Building, x, y, img), typeOfBuilding(BaseBuilding), team(tm)
{

}
