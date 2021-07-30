#pragma once


#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


#ifndef GAME_H
#define GAME_H

/*



*/



class Game
{
    private:
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videoMode;
    void InitVariables();
    void InitWindow();

    public:


    //constructors /destructors
    Game();
    virtual ~Game();

    //accessors
    const bool running() const;

    //functions
    void pollEvents();
    void update();
    void render();
};

#endif