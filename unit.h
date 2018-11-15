#ifndef UNIT_H
#define UNIT_H
#include <map>
#include <QImage>

enum Team {OrangeStar, BlueMoon, Neutral};
enum MoveType {F, B, T, W, A};
enum TypeOfUnit {AntiAir, BCopter, Bomber, Fighter, Infantry, MdTank, Mech, MegaTank, Neotank, Recon, Tank};



class Unit
{
private :
    int posX;
    int posY;
    int lifePoints;
    int price;
    int mobilityPoints;
    bool selectable;
    MoveType moveType;
    TypeOfUnit type;
    Team team;
    static std::map<TypeOfUnit, std::map<TypeOfUnit,int>> damagePoints;
    QImage image;

public :
    Unit(TypeOfUnit t, int x, int y, Team team);
    int getLifePoints() const;
    int getDamagePoints(TypeOfUnit t) const;
    int getPosX() const;
    int getPosY() const;
    void setPosX(const int &x);
    void setPosY(const int &y);
    void setLifePoints(const int &damage);
    bool isSelectable() const;
};


#endif // UNIT_H
