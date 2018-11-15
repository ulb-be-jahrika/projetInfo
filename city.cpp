#include "city.h"

City::City(int x, int y, QImage img, Team tm) : Terrain (Building, x, y, img), typeOfBuilding(CityBuilding), team(tm), capturePoints(20)
{
}
