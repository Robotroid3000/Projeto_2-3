#include "screen.h"
#include "figurageometrica.h"
#include "retangulo.h"
#include <iostream>

using namespace std;


Retangulo::Retangulo(int _x0, int _y0, int _largura, int _altura){
    x0 = _x0;
    y0 = _y0;
    largura = _largura;
    altura = _altura;
}

void Retangulo::draw(Screen &t){

    //Preenchendo as larguras
    for(int i=x0; i<x0+largura; i++){
        t.setPixel(i, y0);
        //cout << "("<<i<<", "<<y0<<") and ("<< i<< ", "<< y0+altura <<") "<<endl;
        t.setPixel(i, y0+altura);
    }

    //Preenchendo as alturas
    for(int j=y0; j<y0+altura; j++){
        t.setPixel(x0, j);
        t.setPixel(x0+largura-1, j);
        //cout << "("<<x0<<", "<<j<<") and ("<< x0+largura-1<< ", "<< j<<") "<<endl;
    }
}
