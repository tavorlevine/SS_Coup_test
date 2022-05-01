#include "Duke.hpp"

namespace coup{
    void Duke::block(Player player){
        // if(player.privius_turn != "foreign_aid"){
        //     throw std::runtime_error("Duke can block foreign_aid action");
        // }
        player.setCoins(-2);
    }
    void Duke::tax(){
        //this->my_coins += 3;
        this->setCoins(3);
    }
};