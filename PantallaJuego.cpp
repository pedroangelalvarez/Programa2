//
// Created by pedro on 30/08/19.
//

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <thread>
#include <SFML/Window/Event.hpp>
#include "PantallaJuego.h"

int PantallaJuego::getPosX() {
    return this->posx;
}

int PantallaJuego::getPosY() {
    return this->posy;
}

int PantallaJuego::getAlto() {
    return this->alto;
}

int PantallaJuego::getAncho() {
    return this->ancho;
}

void PantallaJuego::dibujar() {
    //Pelota p = Pelota(398,298,10,'a',10,10,1,1);
    sf::CircleShape ballon(this->pelota->get_radio());
    ballon.setFillColor(sf::Color::Yellow);
    ballon.setPosition(this->pelota->get_x(),this->pelota->get_y());

    Jugador* jugador1 = this->jugadores[0];//(10,250,50,10);
    sf::RectangleShape player1 (sf::Vector2f(jugador1->get_ancho(),jugador1->get_largo()));
    player1.setFillColor(sf::Color(0, 255,  255));
    player1.setPosition(jugador1->get_x(),jugador1->get_y());

    Jugador* jugador2 = this->jugadores[1];//(780,250,50,10);
    sf::RectangleShape player2 (sf::Vector2f(jugador2->get_ancho(),jugador2->get_largo()));
    player2.setFillColor(sf::Color(0, 255,  255));
    player2.setPosition(jugador2->get_x(),jugador2->get_y());

    pelota->direccionarX(this->definirDireccionX());
    pelota->direccionarY(this->definirDireccionY());
    while (window->isOpen())
    {   std::this_thread::sleep_for (std::chrono::milliseconds(100));
        this->pelota->moverse();
        ballon.setPosition(this->pelota->get_x(),this->pelota->get_y());
        if (this->pelota->get_x()<1) {
            this->pelota->moverX((this->ancho/2)-2);
            this->pelota->moverY((this->alto/2)-2);
            this->pelota->direccionarX(definirDireccionX());
            this->pelota->direccionarY(definirDireccionY());
            jugador2->aumentarPuntaje();
        }
        else if( this->pelota->get_x() >= this->ancho-2){
            this->pelota->moverX((this->ancho/2)-2);
            this->pelota->moverY((this->alto/2)-2);
            this->pelota->direccionarX(definirDireccionX());
            this->pelota->direccionarY(definirDireccionY());
            jugador1->aumentarPuntaje();
        }

        this->colision();
        if (ballon.getGlobalBounds().intersects(player1.getGlobalBounds())){
            this->pelota->rebotar();
        }
        if (ballon.getGlobalBounds().intersects(player2.getGlobalBounds())){
            this->pelota->rebotar();
        }
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::EventType::KeyPressed){
                if (event.key.code == sf::Keyboard::Up){
                    jugador1->mover(1);
                }
                if (event.key.code == sf::Keyboard::Down){
                    jugador1->mover(0);
                }
                if (event.key.code == sf::Keyboard::W){
                    jugador2->mover(1);
                }
                if (event.key.code == sf::Keyboard::S){
                    jugador2->mover(0);
                }
                player1.setPosition(jugador1->get_x(),jugador1->get_y());
                player2.setPosition(jugador2->get_x(),jugador2->get_y());
            }
            if (event.type == sf::Event::Closed)
                window->close();

        }

        window->clear();
        window->draw(ballon);
        window->draw(player1);
        window->draw(player2);
        window->display();
    }
}


void PantallaJuego::actualizar_puntaje() {

}

void PantallaJuego::colision() {
    if (this->pelota->get_y()<1) {
        this->pelota->direccionarY(1);

    }
    else if( this->pelota->get_y() >= this->alto-5){
        this->pelota->direccionarY(0);
    }
}

int PantallaJuego::definirDireccionX(){
    int initialX = rand() % 10 + 1;

    if (initialX%2==0){
        return 0;
    }
    else{
        return 1;
    }
    return 0;
}

int PantallaJuego::definirDireccionY(){
    int initialY = rand() % 10 + 1;
    if (initialY%2==0){
        return 0;
    }
    else{
        return 1;
    }
    return 0;
}

