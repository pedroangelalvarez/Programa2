//
// Created by pedro on 30/08/19.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Window/Event.hpp>
#include "PantallaFinal.h"
#include <thread>


void PantallaFinal::dibujar() {
    sf::RectangleShape rectangle(sf::Vector2f(5, 5));
    rectangle.setFillColor(sf::Color(10, 50, 255));
    rectangle.setSize(sf::Vector2f(this->ancho-10, this->alto-10));

    sf::Font font;
    if (!font.loadFromFile("../DroidSansMono.ttf"))
        //find this file in the "pong" example in the SFML examples folder
    {
        std::printf("Error loading font\n");
    }
    sf::Text mensaje;
    mensaje.setFont(font);
    mensaje.setPosition(this->posx+(this->ancho)/4,this->alto-50);
    mensaje.setString("PRESIONE ENTER PARA SALIR");
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
        this->eventos();
        this->actualizarMensaje();
        this->window->clear();
        this->window->draw(rectangle);
        this->window->draw(mensaje);
        this->window->draw(titulo);

        this->window->display();
    }
}

void PantallaFinal::eventos() {
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::EventType::KeyPressed){
            if (event.key.code == sf::Keyboard::Enter) {
                this->window->close();
            }
        }
        if (event.type == sf::Event::Closed)
            this->window->close();
    }
}

void PantallaFinal::actualizarMensaje() {

    std::this_thread::sleep_for (std::chrono::seconds(5));
    sf::RectangleShape rectangle(sf::Vector2f(5, 5));
    rectangle.setFillColor(sf::Color(10, 50, 255));
    rectangle.setSize(sf::Vector2f(this->ancho-10, this->alto-10));

    sf::Font font;

    if (!font.loadFromFile("../DroidSansMono.ttf"))
        //find this file in the "pong" example in the SFML examples folder
    {
        std::printf("Error loading font\n");
    }
    sf::Text mensaje;
    // set the string to display
    mensaje.setFont(font);
    mensaje.setPosition(this->posx+(this->ancho)/4,this->alto-50);
    mensaje.setString("GRACIAS POR JUGAR");
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
    this->window->clear();
    this->window->draw(rectangle);
    this->window->draw(mensaje);
    this->window->draw(titulo);

    this->window->display();
}
