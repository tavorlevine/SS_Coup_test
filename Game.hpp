#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>


namespace coup{
    class Game{
    private:
        std::string win;
        size_t numOfPlayers;
    public:
        std::vector <std::string> all_players;
        size_t whoTor; // who play now
        Game();//{
        //     this->number = 0;
        //     this->win = "!";
        // }
        ~Game();
        std::string turn();
        std::string winner();
        std::vector<std::string> players();
    };
    
};