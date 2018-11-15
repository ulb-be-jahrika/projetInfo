#include "terrain.h"

Terrain::Terrain(TypeOfTerrain t, int x, int y, QImage img) : type(t), posX(x), posY(y), image(img), unitOnTerrain(nullptr)
{
    switch (type)
    {
        case Plain :
            defense = 1;
            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 2}, {A, 1}};
            break;
        case Mountain :
            defense = 4;
            mobilityCost = {{F, 2}, {B, 1}, {T, -1}, {W, -1}, {A, 1}};
            break;
        case Wood:
            defense = 2;
            mobilityCost = {{F, 1}, {B, 1}, {T, 2}, {W, 3}, {A, 1}};
            break;
        case River:
            defense = 0;
            mobilityCost = {{F, 2}, {B, 1}, {T, -1}, {W, -1}, {A, 1}};
            break;
        case Road:
            defense = 0;
            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}};
            break;
        case Bridge:
            defense = 0;
            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}};
            break;
        case Sea:
            defense = 0;
            mobilityCost = {{F, -1}, {B, -1}, {T, -1}, {W, -1}};
            break;
        case Shoal:
            defense = 0;
            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}};
            break;
        case Reef:
            defense = 1;
            mobilityCost = {{F, -1}, {B, -1}, {T, -1}, {W, -1}, {A, 1}};
            break;
        case Pipe:
            defense = 0;
            mobilityCost = {{F, -1}, {B, -1}, {T, -1}, {W, -1}, {A, -1}};
            break;
        //******************************************************
        default:
            defense = 3;
            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}};
            break;
    }
}

int Terrain::getPosX() const
{
    return posX;
}

int Terrain::getPosY() const
{
    return posY;
}

QImage Terrain::getImage() const
{
    return image;
}
