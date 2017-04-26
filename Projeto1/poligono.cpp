#include "poligono.h"
#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;


void Poligono::vertice(float x, float y){
    pol[in].setXY(x,y);
    in++;
}
int Poligono::contador(){
    return in;
}
Point Poligono::getOrg(){
    return pol[0];
}
float Poligono::area(){
    float a = 0.0;
        int tamanho = in;
        int j = tamanho - 1;
        for (int i = 0; i < tamanho; i++)
        {
            a += (pol[j].getX() + pol[i].getX()) * (pol[j].getY() - pol[i].getY());
            j = i;
        }

        return abs(a / 2.0);
}

void Poligono::translada(float a, float b){
    int n = in;
    for(int i = 0; i < n; i++){
        pol[i].setX(pol[i].getX() + a);
        pol[i].setY(pol[i].getY() + b);
    }
}

void Poligono::rotacao(float angulo, Point p){
    float seno, cosseno, xNew, yNew;
    int tam = in;
    for(int i = 0; i < tam; i++){
        seno = sin(angulo);
        cosseno = cos(angulo);

        pol[i].setX(pol[i].getX() - p.getX());
        pol[i].setY(pol[i].getY() - p.getY());

        xNew = pol[i].getX() * cosseno - pol[i].getY() * seno;
        yNew = pol[i].getX() * seno + pol[i].getY() * cosseno;

        pol[i].setX(xNew + p.getX());
        pol[i].setY(yNew + p.getY());

    }
}

void Poligono::imprime(){
        int n = in;
            for(int i = 0; i < n; i++){
                    cout << "(" << pol[i].getX() << ", " << pol[i].getY() << ")";
                if(i < n-1){
                   cout << " -> ";
                }
            }

        cout << endl;
}
