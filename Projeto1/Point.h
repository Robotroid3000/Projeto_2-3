#ifndef POINT_H
#define POINT_H


class Point
{
private:
   float x;
   float y;
public:
    Point(float mx = 0,float my = 0);
    void setX(float mx);
    void setY(float my);
    void setXY(float mx, float my);
    float getX(void);
    float getY(void);
    Point add(Point p1);
    Point sub(Point p1);
    float norma(Point p1);
    Point translada(float a, float b);
    void imprime(void);
};

#endif // PONTO_H
