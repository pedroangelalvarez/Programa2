//
// Created by pedro on 23/08/19.
//

#ifndef PROGRAMA1_PELOTA_H
#define PROGRAMA1_PELOTA_H


class Pelota {
private:
    int x;
    int y;
    int radio;
    char color;
    int vx;
    int vy;
    int direccionX;
    int direccionY;

public:
    Pelota(int px, int py, int pradio, char pcolor, int pvx, int pvy, int pdx, int pdy):
    x{px},y{py},radio{pradio},color{pcolor},vx{pvx},vy{pvy},direccionX{pdx},direccionY{pdy}  {}
    void moverse();
    void colision();
    void direccionarX(int dx);
    void direccionarY(int dy);
    void moverX( int x);
    void moverY( int y);
    int get_x();
    int get_y();
    int get_radio();
    char get_color();
    int get_vx();
    int get_vy();
    int get_direccionX();
    int get_direccionY();
};


#endif //PROGRAMA1_PELOTA_H
