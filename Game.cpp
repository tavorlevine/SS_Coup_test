#include "Game.hpp"

namespace coup{
    Game::Game(){
        std::vector <std::string> names;
        this->all_players = names;
        this->win = "!";
        this->whoTor = 0;
        this->numOfPlayers = 0;
    }
    Game::~Game(){}
    std::string Game::winner(){
        if (win == "!"){
            throw std::runtime_error("The game doesnt end yet");
        }
        return win;        
    }
    std::vector<std::string> Game::players(){
        return this->all_players;
    }
    std::string Game::turn(){
        return this->all_players.at(whoTor);
    }
}