//
// Created by pedro on 30/08/19.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include "PantallaFinal.h"

void PantallaFinal::dibujar() {
    sf::RectangleShape rectangle(sf::Vector2f(5, 5));
    rectangle.setFillColor(sf::Color(10, 50, 255));
    rectangle.setSize(sf::Vector2f(this->ancho-10, this->alto-10));

    sf::Font font;
    if (!font.loadFromFile("/usr/share/fonts/droid/DroidSansMono.ttf"))
        //find this file in the "pong" example in the SFML examples folder
    {
        std::printf("Error loading font\n");
    }
    sf::Text mensaje;
    // set the string to display
    mensaje.setFont(font);
    mensaje.setPosition(this->posx+(this->ancho)/4,this->alto-50);
    mensaje.setString("PRESIONE ENTER PARA INICIAR");
    mensaje.setCharacterSize(24);
    mensaje.setFillColor(sf::Color::White);
    mensaje.setStyle(sf::Text::Bold );


    sf::Text titulo;
    titulo.setFont(font);
    titulo.setPosition(10,100);
    titulo.setString("PELOTA");
    titulo.setCharacterSize(200);
    titulo.setFillColor(sf::Color::White);
    titulo.setStyle(sf::Text::Bold );
    while (this->window->isOpen())
    {
        eventos();

        this->window->clear();
        this->window->draw(rectangle);
        this->window->draw(mensaje);
        this->window->draw(titulo);

        this->window->display();
    }
}

void PantallaFinal::eventos() {

}

void PantallaFinal::ActualizarMensaje() {

}
