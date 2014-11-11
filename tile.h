#ifndef TILE_H
#define TILE_H
#include "player.h"

class Tile{

private:
    int col;
    int row;

public:
    Tile(int _col, int _row);
    bool operator==(const Tile &t);
    virtual bool action (Player& player);
    virtual Tile* clone();
    //Take ostream as parameters ? see class notes
    friend std::ostream& operator<<(std::ostream& gauche, const Tile& tile);
    int getCol() const;
    int getRow() const;
    std::string toString() const;


};

#endif // TILE_H
