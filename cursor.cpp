#include "cursor.h"


Cursor::Cursor(int xM, int yM) : posX(5), posY(5), image(":/Img/Images/Cursor.PNG"), xMax(xM), yMax(yM)
{
}

void Cursor::move(int dx, int dy)
{
    if (!((posX == 0 && dx < 0) ||
          (posY == 0 && dy < 0) ||
          (posX == xMax && dx == 1) ||
          (posY == yMax && dy == 1))){

        posX += dx;
        posY += dy;
    }
}

int Cursor::getPosX() const
{
    return posX;
}

int Cursor::getPosY() const
{
    return posY;
}

QImage Cursor::getImage() const
{
    return image;
}
