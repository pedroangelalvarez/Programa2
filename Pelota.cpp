//
// Created by pedro on 23/08/19.
//

#include "Pelota.h"

void Pelota::colision() {
    if(this->direccionX==1)
        direccionX=0;
    else
        direccionX=1;

    if(this->direccionY==1)
        direccionY=0;
    else
        direccionY=1;
}

void Pelota::moverse() {
    if(this->direccionX==1){
        this->x = this->x+this->vx;
    }
    if(this->direccionX==0){
        this->x = this->x-this->vx;
    }
    if(this->direccionY==1){
        this->y = this->y+this->vy;
    }
    if(this->direccionY==0){
        this->y = this->y-this->vy;
    }

}

int Pelota::get_x() {
    return this->x;
}

int Pelota::get_y() {
    return this->y;
}

char Pelota::get_color() {
    return this->color;
}

int Pelota::get_radio() {
    return this->radio;
}

int Pelota::get_vx() {
    return this->vx;
}

int Pelota::get_vy() {
    return this->vy;
}

int Pelota::get_direccionX() {
    return direccionX;
}

int Pelota::get_direccionY() {
    return direccionY;
}

void Pelota::direccionarX(int d) {
    this->direccionX=d;
}

void Pelota::direccionarY(int d) {
    this->direccionY=d;
}

void Pelota::moverX(int dx) {
    this->x = dx;
}

void Pelota::moverY(int dy) {
    this->y = dy;
}
