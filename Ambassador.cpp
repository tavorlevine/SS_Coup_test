#include "Player.hpp"
#include "Ambassador.hpp"

namespace coup{
    void Ambassador::block(Player player){

    }
    void Ambassador::transfer(Player& from, Player& to){
        from.setCoins(1);
        to.setCoins(-1);
    }
};