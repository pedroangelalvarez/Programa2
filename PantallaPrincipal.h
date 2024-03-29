//
// Created by pedro on 30/08/19.
//

#ifndef PROGRAMA2_PANTALLAPRINCIPAL_H
#define PROGRAMA2_PANTALLAPRINCIPAL_H


#include <SFML/Graphics/RenderWindow.hpp>

class PantallaPrincipal {
private:
    int posx;
    int posy;
    int alto;
    int ancho;
    sf::RenderWindow *window;

public:
    PantallaPrincipal(int dposx, int dposy, int dalto, int dancho):
    posx{dposx},posy{dposy},alto{dalto},ancho{dancho},window{new sf::RenderWindow (sf::VideoMode(800, 600), "Atari")}
    {
    }

    ~PantallaPrincipal()= default;
    int getPosX();
    int getPosY();
    int getAlto();
    int getAncho();
    void dibujar();
    void eventos();

};


#endif //PROGRAMA2_PANTALLAPRINCIPAL_H
