#include "player.h"

Player::Player(std::string n){

name = n;
gold=5;
ruby=0;
spice=1;
fabric=1;
jewel=1;
cart=9;
food=10;


}

bool Player::canAct() const{

    if(food==0){
        return true;
    }else{return false;}
}

bool Player::pay(Player& player){

    if(gold>0){

        gold--;
        player.receive(1);

        return true;
    }
    else{return false;}

}

void Player::receive(int amount){
    gold += amount;
}



void Player::eat(){
    if(food>0){
        food--;
    }
    else{}
}

std::string Player::getName() const{

return name;
}
