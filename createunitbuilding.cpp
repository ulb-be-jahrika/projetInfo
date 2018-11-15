#include "createunitbuilding.h"

CreateUnitBuilding::CreateUnitBuilding(TypeOfBuilding t, int x, int y, QImage img, Team tm) : Terrain (Building, x, y, img), typeOfBuilding(t), team(tm)
{

}
