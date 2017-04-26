#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class Retangulo: public Poligono{
    private:
        float x, y, largura, altura;
    public:
        Retangulo(float x, float y, float largura, float altura);
};

#endif
