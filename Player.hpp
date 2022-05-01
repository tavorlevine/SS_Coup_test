#pragma once
#include <iostream>
#include <stdexcept>
#include "Game.hpp"

namespace coup{
    class Player{
    protected:
        Game *game;
        std::string name;
        std::string the_role;
        int my_coins;
        bool flag_foreign_aid;
        std::string privius_turn;
    public:
        Player(Game& game, std::string name){
            this->game = &game;
            this->name = name;
            this->my_coins = 0;
            this->flag_foreign_aid = false;
            this->game->all_players.push_back(name);
            this->privius_turn = "this is the start";
        }
        ~Player(){}
        void setCoins(int num){
            this->my_coins += num;
        }
        std::string getName(){
            return this->name;
        }
        void income(){
            this->my_coins++;
        }
        int coins();
        std::string role();
        void coup(Player player);
        void foreign_aid();//{
        //     flag_foreign_aid = true;
        // }
        // void coup(Player other){
        //     for(int i=0; i<Game::game.all_players.size(); i++){
        //         if(game.all_players.at(i).getName() == other.getName()){
        //             game.all_players.erase(i);
        //         }
        //     }
        //     this->coins = this->coins -7;
        //     // for (Player player : Game::players){
        //     //     if (player->getName() == other.getName()){
        //     //         players.at
        //     //     }
        //     // }
        // }

    };
};