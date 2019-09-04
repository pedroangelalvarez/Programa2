#include <iostream>
#include <SFML/Graphics.hpp>
#include "PantallaPrincipal.h"
#include "PantallaJuego.h"
#include "PantallaFinal.h"

int main()
{
    /*sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }*/
    sf::RenderWindow window(sf::VideoMode(800, 600), "Atari");
    //PantallaPrincipal p1(10,10,600,800,&window);
    //p1.dibujar();
    //Pelota pelota((800/2)-2,(600/2)-2,10,1,1);
    //PantallaJuego p2(10,10,600,800,&window,&pelota);
    //p2.dibujar();
    PantallaFinal p3(10,10,600,800,&window);
    p3.dibujar();
    //PantallaJuego();

    return 0;
}