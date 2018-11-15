#include "game.h"
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iostream>

using namespace std;

void Game::mapDesign(const string str)
{

    std::map <int, QImage> correspondanceNbImg = {{1, QImage(":/Img/Images/Plain.gif")},
                                                  {2, QImage(":/Img/Images/Mountain.gif")},
                                                  {3, QImage(":/Img/Images/Wood.gif")},
                                                  {4, QImage(":/Img/Images/HRiver.gif")},
                                                  {5, QImage(":/Img/Images/VRiver.gif")},
                                                  {6, QImage(":/Img/Images/CRiver.gif")},
                                                  {7, QImage(":/Img/Images/ESRiver.gif")},
                                                  {8, QImage(":/Img/Images/SWRiver.gif")},
                                                  {9, QImage(":/Img/Images/WNRiver.gif")},
                                                  {10, QImage(":/Img/Images/NERiver.gif")},
                                                  {11, QImage(":/Img/Images/ESWRiver.gif")},
                                                  {12, QImage(":/Img/Images/SWNRiver.gif")},
                                                  {13, QImage(":/Img/Images/WNERiver.gif")},
                                                  {14, QImage(":/Img/Images/NESRiver.gif")},
                                                  {15, QImage(":/Img/Images/HRoad.gif")},
                                                  {16, QImage(":/Img/Images/VRoad.gif")},
                                                  {17, QImage(":/Img/Images/CRoad.gif")},
                                                  {18, QImage(":/Img/Images/ESRoad.gif")},
                                                  {19, QImage(":/Img/Images/SWRoad.gif")},
                                                  {20, QImage(":/Img/Images/WNRoad.gif")},
                                                  {21, QImage(":/Img/Images/NERoad.gif")},
                                                  {22, QImage(":/Img/Images/ESWRoad.gif")},
                                                  {23, QImage(":/Img/Images/SWNRoad.gif")},
                                                  {24, QImage(":/Img/Images/WNERoad.gif")},
                                                  {25, QImage(":/Img/Images/NESRoad.gif")},
                                                  {26, QImage(":/Img/Images/HBridge.gif")},
                                                  {27, QImage(":/Img/Images/VBridge.gif")},
                                                  {28, QImage(":/Img/Images/Sea.gif")},
                                                  {29, QImage(":/Img/Images/HShoal.gif")},
                                                  {30, QImage(":/Img/Images/HShoalN.gif")},
                                                  {31, QImage(":/Img/Images/VShoal.gif")},
                                                  {32, QImage(":/Img/Images/VShoalE.gif")},
                                                  {33, QImage(":/Img/Images/Reef.gif")},
                                                  {34, QImage(":/Img/Images/Neutral City.gif")},
                                                  {35, QImage(":/Img/Images/Neutral Base.gif")},
                                                  {36, QImage(":/Img/Images/Neutral Airport.gif")},
                                                  {37, QImage(":/Img/Images/Neutral City.gif")},
                                                  {38, QImage(":/Img/Images/Orange Star City.gif")},
                                                  {39, QImage(":/Img/Images/Orange Star Base.gif")},
                                                  {40, QImage(":/Img/Images/Orange Star Airport.gif")},
                                                  {41, QImage(":/Img/Images/Orange Star City.gif")},
                                                  {42, QImage(":/Img/Images/Orange Star City.gif")},
                                                  {43, QImage(":/Img/Images/Blue Moon City.gif")},
                                                  {44, QImage(":/Img/Images/Blue Moon Base.gif")},
                                                  {45, QImage(":/Img/Images/Blue Moon Airport.gif")},
                                                  {46, QImage(":/Img/Images/Blue Moon City.gif")},
                                                  {47, QImage(":/Img/Images/Blue Moon City.gif")},
                                                  {101, QImage(":/Img/Images/VPipe.gif")},
                                                  {102, QImage(":/Img/Images/HPipe.gif")},
                                                  {103, QImage(":/Img/Images/NEPipe.gif")},
                                                  {104, QImage(":/Img/Images/ESPipe.gif")},
                                                  {105, QImage(":/Img/Images/SWPipe.gif")},
                                                  {106, QImage(":/Img/Images/WNPipe.gif")},
                                                  {107, QImage(":/Img/Images/NPipe End.gif")},
                                                  {108, QImage(":/Img/Images/EPipe End.gif")},
                                                  {109, QImage(":/Img/Images/SPipe End.gif")},
                                                  {110, QImage(":/Img/Images/WPipe End.gif")},
                                                  {113, QImage(":/Img/Images/HPipe SeamEnd.gif")},
                                                  {114, QImage(":/Img/Images/VPipe Seam.gif")},
                                                  {115, QImage(":/Img/Images/HPipe RubbleEnd.gif")},
                                                  {116, QImage(":/Img/Images/VPipe Rubble.gif")},
                                                 };

    //***********************************************************************************
    string line;
    int symbolTerrain;
    int y(0);
    ifstream file(str.c_str());
    if(file)
    {
        while (getline( file, line ))
        {
            istringstream iss(line);
            vector <Terrain*> myVector;
            int x(0);
            while (iss >> symbolTerrain)
            {
                switch(symbolTerrain){
                    case 1:
                        myVector.push_back(new Terrain(Plain, x, y, correspondanceNbImg[symbolTerrain]));
                    break;
                    case 2 :
                        myVector.push_back(new Terrain(Mountain, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 3:
                        myVector.push_back(new Terrain(Wood, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                        myVector.push_back(new Terrain(River, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                        myVector.push_back(new Terrain(Road, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 26:
                    case 27:
                        myVector.push_back(new Terrain(Bridge, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 28:
                        myVector.push_back(new Terrain(Sea, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                        myVector.push_back(new Terrain(Shoal, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 33:
                        myVector.push_back(new Terrain(Reef, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 101:
                    case 102:
                    case 103:
                    case 104:
                    case 105:
                    case 106:
                    case 107:
                    case 108:
                    case 109:
                    case 110:
                        myVector.push_back(new Terrain(Pipe, x, y, correspondanceNbImg[symbolTerrain]));
                        break;
                    case 34:
                    case 37:
                        myVector.push_back(new City(x, y, correspondanceNbImg[symbolTerrain], Neutral));
                        break;
                    case 35:
                        myVector.push_back(new Base(x, y, correspondanceNbImg[symbolTerrain], Neutral));
                        break;
                    case 36:
                        myVector.push_back(new Airport(x, y, correspondanceNbImg[symbolTerrain], Neutral));
                        break;
                    case 38:
                    case 41:
                    case 42:
                        myVector.push_back(new City(x, y, correspondanceNbImg[symbolTerrain], OrangeStar));
                        break;
                    case 39:
                        myVector.push_back(new Base(x, y, correspondanceNbImg[symbolTerrain], OrangeStar));
                        break;
                    case 40:
                        myVector.push_back(new Airport(x, y, correspondanceNbImg[symbolTerrain], OrangeStar));
                        break;
                    case 43:
                    case 46:
                    case 47:
                        myVector.push_back(new City(x, y, correspondanceNbImg[symbolTerrain], BlueMoon));
                        break;
                    case 44:
                        myVector.push_back(new Base(x, y, correspondanceNbImg[symbolTerrain], BlueMoon));
                        break;
                    case 45:
                        myVector.push_back(new Airport(x, y, correspondanceNbImg[symbolTerrain], BlueMoon));
                        break;








                    /*

                        case City:
                            defense = 3;
                            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}, {S, -1}, {L, -1}, {P, -1}};
                            break;
                        case Base:
                            defense =3;
                            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}, {S, -1}, {L, -1}, {P, 1}};
                            break;
                        case Airport:
                            defense = 3;
                            mobilityCost = {{F, 1}, {B, 1}, {T, 1}, {W, 1}, {A, 1}, {S, -1}, {L, -1}, {P, -1}};
                            break;
                            */
                }
                ++x;
            }
            ++y;
            mapMatrix.push_back(myVector);
        }
    }
    else{
           //afficher un message d erreur car le fichier n est pas lu
    }
}

Game::Game(const string str)
{
    mapDesign(str);
    cursor = new Cursor(mapMatrix[0].size() - 1, mapMatrix.size() - 1);
}

std::vector<std::vector<Terrain *> > Game::getMapMatrix() const
{
    return mapMatrix;
}

Cursor *Game::getCursor() const
{
    return cursor;
}
