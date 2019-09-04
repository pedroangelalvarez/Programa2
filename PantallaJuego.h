//
// Created by pedro on 30/08/19.
//

#ifndef PROGRAMA2_PANTALLAJUEGO_H
#define PROGRAMA2_PANTALLAJUEGO_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <vector>
#include "Jugador.h"
#include "Pelota.h"

class PantallaJuego {
private:
    int posx;
    int posy;
    int alto;
    int ancho;
    std::vector<Jugador*> jugadores;
    Pelota* pelota;
    sf::RenderWindow* window;

public:

    PantallaJuego(int dposx, int dposy, int dalto, int dancho):
            posx{dposx},posy{dposy},alto{dalto},ancho{dancho},window{new sf::RenderWindow (sf::VideoMode(800, 600), "Atari")}
    { pelota = new Pelota((dancho/2)-2,(dalto/2)-2,10,1,1);
        jugadores.push_back(new Jugador(10,50,50,10));
    jugadores.push_back(new Jugador(dancho-20,dalto-50,50,10));}
    ~PantallaJuego()= default;
    int getPosX();
    int getPosY();
    int getAlto();
    int getAncho();
    void dibujar();
    void actualizar_puntaje();
    void colision();
    int definirDireccionX();
    int definirDireccionY();
};


#endif //PROGRAMA2_PANTALLAJUEGO_H
