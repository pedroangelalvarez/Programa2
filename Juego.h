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
    sf::RenderWindow* window;
    PantallaPrincipal* pantallInit;
    PantallaJuego* pantallaJuego;
    PantallaFinal* pantallaFinal;
public:
    Juego(int dposx, int dposy, int dalto, int ancho, PantallaPrincipal *dpantallaInit, PantallaJuego *dpantallaJuego, PantallaFinal *dpantallaFinal):
    pantallInit{dpantallaInit},pantallaJuego{dpantallaJuego},pantallaFinal{dpantallaFinal}{}
    void ejecutar();
    void reiniciar();
    void inicializar();

};


#endif //PROGRAMA2_JUEGO_H
