#include <cstdlib>
#include <iostream>
#include <vector>

enum nameTile { man, pin, sou, winds, dragon };

struct  Tile
{
    //id = 0 ��������, ��� ���� �� ��������
    // 0 < id < 35 ��������, ������������� �����
    int id;
};

class Gamer
{
private:
    std::vector<Tile> hand;
    std::vector<Tile> declared_tiles;
public:
    //������������� ��������� ������ 
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
    //������ ����������� �������� �� ����� �������� ����  
    double getStatistics(int id);
    //������ ��������� ���� � ���������� ������ �������, ��� ����� ���������� ��������
    void setCondition();
    //void changeGamer();
    void runGame();
};
