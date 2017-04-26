#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
#define N 100

class Poligono
{
private:
Point pol[N];
int in = 0;
public:
    void vertice(float x, float y);
    int contador();
    Point getOrg();
    float area();
    void translada(float a, float b);
    void rotacao(float angulo, Point p);
    void imprime();
};

#endif // POLIGONO_H
