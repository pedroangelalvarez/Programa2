//
// Created by usuario on 23/8/19.
//

#ifndef PROGRAMA1_JUGADOR_H
#define PROGRAMA1_JUGADOR_H


class Jugador {
private:
    int x;
    int y;
    int largo;
    int ancho;
    int puntaje;
public:
    Jugador(int px,int py,int plargo, int pancho):x{px},y{py},largo{plargo},ancho{pancho},puntaje{0}{}
    int get_x();
    int get_y();
    int get_largo();
    int get_ancho();
    void aumentarPuntaje();
    void mover(int v);
};


#endif //PROGRAMA1_JUGADOR_H
