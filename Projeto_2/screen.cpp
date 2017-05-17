#include "screen.h"
#include <vector>
#include <iostream>

using namespace std;

Screen::Screen(){
}

Screen::Screen(int _nlin, int _ncol){
    nlin = _nlin;
    ncol = _ncol;
    mat.resize(nlin);
    for(int i=0;i<nlin;i++)
    {
        mat[i].resize(ncol, ' ');
    }
}

vector< vector<char> > Screen::getMat(){
    return mat;
}
void Screen::setPixel(int x, int y){
    mat[x][y] = brush;
}

void Screen::clear(){
    for(int i = 0; i<nlin;i++){
        for(int j = 0; j<ncol;j++){
                mat[i][j]=' ';
            }
        }
}

void Screen::setBrush(char _brush){
    brush = _brush;
}

// envia a tela para um stream de saida
ostream& operator<<(ostream &os, Screen &t){
    for(int j=0; j< t.nlin; j++){
        for(int i=0; i< t.ncol; i++){
            os << t.mat[i][j];
        }
        os << endl;
    }
    return os;
}
