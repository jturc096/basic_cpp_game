#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{

private:
    int gold, ruby, spice,fabric,jewel,cart,food;
    std::string name;
public:
    Player(std::string n);
    bool canAct() const; // retourne vrai si food > 0
    bool pay(Player& player); // donne une piece d'or a un autre joueur
    void eat(); // reduit le nombre de nourritures de 1 si food > 0
    void receive(int amount); // recoit un montant de piece d'or
    std::string getName() const; //retourne le nom du joueur

};

#endif // PLAYER_H
