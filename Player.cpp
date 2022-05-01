#include "Player.hpp"

namespace coup{
    void Player::foreign_aid(){
        // if(this->game->turn() != this->getName()){
        //     return throw std::runtime_error("not your turn");
        // }
        this->my_coins += 2;
    }
    int Player::coins(){
        return this->my_coins;
    }
    std::string Player::role(){
        return this->the_role;
    }
    void Player::coup(Player player){
        
    }
}