#ifndef RETANGULO_H
#define RETANGULO_H

#include "screen.h"
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
    int x0; int y0; int largura; int altura;
public:
    Retangulo(int _x0, int _y0, int _largura, int _altura);
    void draw(Screen &t);
};

#endif // RETANGULO_H
