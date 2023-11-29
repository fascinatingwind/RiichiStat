#include <cstdlib>
#include <iostream>
#include <vector>

enum nameTile { man, pin, sou, winds, dragon };

struct  Tile
{
    //id = 0 означает, что тайл не известен
    // 0 < id < 35 означает, индитификатор тайла
    int id;
};

class Gamer
{
private:
    std::vector<Tile> hand;
    std::vector<Tile> declared_tiles;
public:
    //инициализация известных тайлов 
    void defineHand();
    void setHand();
    void setDeclaredTiles();
};

class Mahjong
{
private:
    Gamer east_gamer, soutn_gamer, west_gamer, north_gamer;
    std::vector<Tile> wall;
public:
    //выдает вероятность вытянуть из стены заданный тайл  
    double getStatistics(int id);
    //задать состояние игры в конкретный момент времени, без учета предыдущих действий
    void setCondition();
    //void changeGamer();
    void runGame();
};
