#ifndef CURSOR_H
#define CURSOR_H
#include <QImage>

class Cursor {
private:
    int posX;
    int posY;
    int xMax;
    int yMax;
    QImage image;

public:
    Cursor(int xM, int yM);
    void move(int dx, int dy);
    int getPosX() const;
    int getPosY() const;
    QImage getImage() const;

};

#endif // CURSOR_H
