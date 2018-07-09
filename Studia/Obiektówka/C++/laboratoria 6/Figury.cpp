#include<iostream>

using namespace std;

constexpr float PI = 3.14;

class Figure
{
public:
  virtual float surface() = 0;
};

class Triangle : public Figure
{
public:
  float b,h;
  Triangle(float x, float y) { b=x; h=y; }
  float surface() { return b*h/2;}
};

class Rectangle : public Figure
{
public:
  float a,b;
  Rectangle(float x, float y) { a=x; b=y; }
  float surface() { return a*b;}
};

class Circle : public Figure
{
public:
  float r;
  Circle(float x) { r=x; }
  float surface() { return PI*r*r;}
};   

int main()
{

  Figure* tab[3];
  tab[0] = new Triangle(4,3);
  tab[1] = new Rectangle(4,3);
  tab[2] = new Circle(3);
  
  ////////////////////////////////////////////////////////////////

  for(int i=0; i<=2; ++i)
    cout << tab[i]->surface() << endl;

}

