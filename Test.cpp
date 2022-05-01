#include<iostream>
#include<stdexcept>
#include<string>
#include"doctest.h"

 //* AUTHORS: <Tavor Levine>

#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;

Game game{};
Player p1(game, "Tavor");
Player p2(game, "Elon");
Duke p3(game, "Ilit");
Captain p4(game, "Shilo");
Ambassador p5(game, "Dvir");




TEST_CASE("coins and income function"){
    for(int i=0; i<25; i++){
        CHECK_EQ(p1.coins(),i);
        p1.income();
    }
}
TEST_CASE("throw exp"){
    CHECK_THROWS(game.winner()); // no winner yet
    CHECK_THROWS(p2.coup(p3)); // not his turn
    CHECK_THROWS(p1.coup(p3)); // not enough coins 
    CHECK_THROWS(p4.block(p3)); // p3 not in the game anymore
}
TEST_CASE("main"){
    CHECK(game.turn() == "Tavor");
    CHECK_NOTHROW(p1.foreign_aid());
    CHECK_THROWS(p3.income());
    CHECK_THROWS(p2.coup(p5));
    

}
