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
    bool hasWin(); //retourne vrai si le joueur a recolte 5 rubis
    bool operator==(Player p); //retourne vrai si le joueur p est la meme instance de la classe Player
    int getFood(); //retourne le nombre de 'food' du joueur
    int getGold(); //retourne le nombre de piece d'or du joueur
};

#endif // PLAYER_H
