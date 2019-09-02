//
// Created by pedro on 30/08/19.
//

#ifndef PROGRAMA2_JUEGO_H
#define PROGRAMA2_JUEGO_H


#include "PantallaPrincipal.h"
#include "PantallaJuego.h"
#include "PantallaFinal.h"


class Juego {
private:
    int posx;
    int posy;
    int alto;
    int ancho;
    bool jugar;
    sf::RenderWindow window;
    PantallaPrincipal pantallinit;
    PantallaJuego pantallaJuego;
    PantallaFinal pantallFinal;



};


#endif //PROGRAMA2_JUEGO_H
