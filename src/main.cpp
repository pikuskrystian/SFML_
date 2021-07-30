#include <iostream>
#include "Game.h"



int main()
{
    Game game();

  

    //game loop
    while(game.running())
    {
        game.update();
        game.render();
    } 
    return 0;
}