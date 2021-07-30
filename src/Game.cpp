#include "Game.h"


//private functions

void Game::InitVariables()
{
    this->window = nullptr;
}
void Game::InitWindow()
{   
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow(this->videoMode,"Game 1", sf::Style::Titlebar | sf::Style::Close);
}

//constructor/deconstructor

Game::Game()
{
    this->InitVariables();
    this->InitWindow();
    
}

Game::~Game()
{ 
    delete this->window;
}

//accessors
const bool Game::running() const
{
    return this->window->isOpen();
}
//functions
void Game::pollEvents()
{
    while(this->window->pollEvent(this->ev))
    {
        switch(this->ev.type)
        {
        case sf::Event::Closed:
            this->window->close();
            break;
        case sf::Event::KeyPressed:
        if(this->ev.key.code == sf::Keyboard::Escape)
            this->window->close();
        break;
        }
    }
}
void Game::update()
{
    this->pollEvents();
}

void Game::render()
{
    /*
    @return void
    -clear old frame
    -render objects
    -display frame in window

    Renders the game objects. 
     */
    this->window->clear(sf::Color(255,0,0,255));

    this->window->display();
}

