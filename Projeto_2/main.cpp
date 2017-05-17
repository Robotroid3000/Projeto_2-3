#include <iostream>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    Screen *t;

    ifstream input;
    string codigo;
    string file = "entrada.txt";

    int nlinhas, ncolunas;
    char brush;

    input.open(file);

    if(input.is_open()){

        string line;
        while(getline(input, line)){
            stringstream sstream(line);

            sstream >> codigo;

            if(codigo == "dim"){
                sstream >> nlinhas;
                sstream >> ncolunas;
                t = new Screen(nlinhas, ncolunas);

            }else if(codigo == "brush"){
                sstream >> brush;

                if(!ss.good()){
                    brush = ' ';
                }
                t->setBrush(brush);

            }else if(codigo == "line"){

            }else if(codigo == "rectangle"){

            }else if(codigo == "circle"){

            }

            codigo.clear();
        }
    }



    /*
    cout << "Hello World!" << endl;
    Screen s = Screen(20, 20);
    s.setBrush('*');
    Retangulo r = Retangulo(1, 1, 16, 8);
    r.draw(s);
    //Reta r = Reta(3.0,1.0,3.0,18.0);
    //r.draw(s);
    //Circulo c = Circulo(10, 10,8 ,false);
    //c.draw(s);
    vector< vector<char> > matriz = s.getMat();
    for(int j=0; j< 20; j++){
        for(int i=0; i< 20; i++){
            cout << matriz[i][j];
        }
        cout << endl;
    }
        */
    return 0;
}
