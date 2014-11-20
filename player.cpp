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

bool Player::hasWin(){
    return ruby>=5;
}

 bool Player::operator==(Player p){
     return (p.getName().compare(name)==0) && (p.getFood() == food) && (p.getGold()==gold);
 }

  int Player::getFood(){
      return food;
  }
  int Player::getGold(){
      return gold;
  }
