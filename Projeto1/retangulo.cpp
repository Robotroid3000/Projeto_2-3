#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(float x, float y, float altura, float largura){

    this->vertice(x, y);

    this->vertice(x + largura, y);

    this->vertice(x + largura, y + altura);

    this->vertice(x, y + altura);
}
