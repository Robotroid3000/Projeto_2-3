#include <iostream>
#include "point.h"
#include "retangulo.h"
#include "poligono.h"

using namespace std;

int main(){

    Retangulo ret(0, 0, 3, 4);
    ret.imprime();

    cout << "Area do retangulo: "<< ret.area() << endl;

    cout << endl << "Translacao" << endl;
    ret.translada(-3, 4);
    cout << "Pontos apos translacao com (-3, 4) sao: ";
    ret.imprime();
    cout << "A area apos translacao eh "<< ret.area() << endl;

    cout << endl << "Rotacao "<< endl;

    Point org = ret.getOrg();
    float xCM = org.getX() + (4/2);
    float yCM = org.getY() + (3/2);

    Point pCM(xCM, yCM);
    ret.rotacao(30, pCM);
    cout << "Pontos apos de +30gr em relacao ao seu centro de massa : ";
        ret.imprime();
        cout << "A area apos translacao: "<< ret.area() << endl;

    return 0;
}
