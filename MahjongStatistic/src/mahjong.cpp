#include "mahjong.h"

void Mahjong::setCondition(std::vector<std::vector<Tile>> hands
                            , std::vector<std::vector<Tile>> declared_tiles
                            , std::vector<Tile> center_
                            , int wall_size_)  {
    east_gamer.setHand(hands[0]);
    east_gamer.setDeclaredTiles(declared_tiles[0]);
    north_gamer.setHand(hands[1]);
    north_gamer.setDeclaredTiles(declared_tiles[1]);
    soutn_gamer.setHand(hands[2]);
    soutn_gamer.setDeclaredTiles(declared_tiles[2]);
    west_gamer.setHand(hands[3]);
    west_gamer.setDeclaredTiles(declared_tiles[3]);

    center = center_;
    wall_size = wall_size_;
}

void Gamer::setHand(std::vector<Tile> hand_) {
    hand = hand_;
}
void Gamer::setDeclaredTiles(std::vector<Tile> declared_tiles_) {
    declared_tiles = declared_tiles_;
}