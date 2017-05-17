#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include <cmath>
#include <iostream>

Reta::Reta(float _x0, float _y0, float _x1, float _y1){
    x0 = _x0;
    y0 = _y0;
    x1 = _x1;
    y1 = _y1;
}

void Reta::draw(Screen &t){
    // Usando a equação y = ax+b
    float a, b;
    if(x0 == x1){
        for(int i=y0; i<=y1; i++)
        {
            t.setPixel(x0, i);
        }
    }else{
        a = (y1-y0)/(x1-x0);
        b = y1-a*x1;

        //cout << "a = "<< a<<" b= "<<b << endl;

        for(int i=x0; i<=x1; i++)
        {
            //cout << "i and y "<< i<<", "<<  a*i+b<< " round "<< round(a*i+b)<< endl;
            t.setPixel(i, round(a*i+b));
        }
    }
}
