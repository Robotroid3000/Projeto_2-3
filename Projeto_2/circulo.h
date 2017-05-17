#ifndef CIRCULO_H
#define CIRCULO_H

#include "screen.h"
#include "figurageometrica.h"

class Circulo : public FiguraGeometrica{
private:
    int x_centro; int y_centro; int raio; bool filled;
public:
    Circulo(int _x_centro, int _y_centro, int _raio, bool _filled);
    void draw(Screen &t);
};

#endif // CIRCULO_H
