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

    PantallaJuego(int dposx, int dposy, int dalto, int dancho, sf::RenderWindow* dwindow,Pelota* dpelota):
            posx{dposx},posy{dposy},alto{dalto},ancho{dancho},window{dwindow},pelota{dpelota}
    {jugadores.push_back(new Jugador(10,250,50,10));
    jugadores.push_back(new Jugador(780,250,50,10));}
    ~PantallaJuego()= default;
    int getPosX();
    int getPosY();
    int getAlto();
    int getAncho();
};


#endif //PROGRAMA2_PANTALLAJUEGO_H
