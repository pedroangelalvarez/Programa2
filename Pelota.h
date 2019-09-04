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
    int direccionX;
    int direccionY;

public:
    Pelota(int px, int py, int pradio, int pdx, int pdy):
    x{px},y{py},radio{pradio},direccionX{pdx},direccionY{pdy}  {}
    void moverse();
    void rebotar();
    void direccionarX(int dx);
    void direccionarY(int dy);
    void moverX( int x);
    void moverY( int y);
    int get_x();
    int get_y();
    int get_radio();
    int get_vx();
    int get_vy();
    int get_direccionX();
    int get_direccionY();
};


#endif //PROGRAMA1_PELOTA_H
