#include "tile.h"
#include <sstream>


Tile::Tile(int _col, int _row){

    col = _col;
    row = _row;
}
    bool Tile::operator==(const Tile &t){

        return(col == t.getCol() && row == t.getRow());

    }
    bool Tile::action (Player& player){
        return this->action(player);
    }
    Tile* Tile::clone(){
        return this->clone();
    }

    std::ostream& operator<<(std::ostream& gauche, const Tile& tile){
        gauche << tile.toString();
        return gauche;
    }

    int Tile::getCol() const{
        return col;
    }
    int Tile::getRow() const{
        return row;
    }

    std::string Tile::toString() const{
        std::stringstream ss;

        ss << "Tuile () - col = "<<col<<", row = "<<row;
        return ss.str();

    }

    void Tile::addPlayer(J play){
        j.push_back(play);

    }
    void Tile::rmPlayer(J play){}


