#include <iostream>
#include <stdexcept>
#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    class Duke : public Player{
    private:
        std::string name;
    
    public:
        Duke(Game& game, std::string name): Player(game, name){
            this->the_role = "Duke";
        }
        void block(Player player);
        void tax();
    
        ~Duke(){}
    };
};
