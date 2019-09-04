#include <iostream>
#include <SFML/Graphics.hpp>
#include "PantallaPrincipal.h"
#include "PantallaJuego.h"
#include "PantallaFinal.h"
#include "Juego.h"

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

    Juego juego(10,10,600,800,new PantallaPrincipal(10,10,600,800), new PantallaJuego(10,10,600,800),new PantallaFinal(10,10,600,800));
    juego.inicializar();
    //PantallaPrincipal p1(10,10,600,800,&window);
    //p1.dibujar();
    //
    //PantallaJuego p2(10,10,600,800,&window,&pelota);
    //p2.dibujar();
    //PantallaFinal p3;
    //p3.dibujar();
    //PantallaJuego();

    return 0;
}