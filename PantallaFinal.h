//
// Created by pedro on 30/08/19.
//

#ifndef PROGRAMA2_PANTALLAFINAL_H
#define PROGRAMA2_PANTALLAFINAL_H


#include <SFML/Graphics/RenderWindow.hpp>

class PantallaFinal {
private:
    int posx;
    int posy;
    int alto;
    int ancho;
    sf::RenderWindow* window;

public:
    PantallaFinal(int dposx, int dposy, int dalto, int dancho, sf::RenderWindow* dwindow):
    posx{dposx},posy{dposy},alto{dalto},ancho{dancho},window{dwindow}{}
    void dibujar();
    void eventos();
    void ActualizarMensaje();
};


#endif //PROGRAMA2_PANTALLAFINAL_H
