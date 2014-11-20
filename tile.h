#ifndef TILE_H
#define TILE_H
#include "player.h"

template<class J>
class Tile{

private:
    int col;
    int row;
    std::list<J> j();

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
    void addPlayer(J play);
    void rmPlayer(J play);


};

#endif // TILE_H
