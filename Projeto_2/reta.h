#ifndef RETA_H
#define RETA_H

#include "screen.h"
#include "figurageometrica.h"


class Reta : public FiguraGeometrica
{
private:
    //int x0; int y0; int x1; int y1;
    float x0; float y0; float x1; float y1;
public:
   // Reta(int _x0, int _y0, int _x1, int _y1);
    Reta(float _x0, float _y0, float _x1, float _y1);
    void draw(Screen &t);
};

#endif // RETA_H
