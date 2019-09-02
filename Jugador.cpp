//
// Created by usuario on 23/8/19.
//

#include "Jugador.h"

int Jugador::get_x() {
    return this->x;
}

int Jugador::get_y() {
    return this->y;
}

int Jugador::get_largo() {
    return this->largo;
}

int Jugador::get_ancho() {
    return this->ancho;
}

void Jugador::mover(int v) {
    if (v==0){
        this->y+=7;
    }
    else{
        this->y-=7;
    }

}


