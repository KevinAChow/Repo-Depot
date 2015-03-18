#include "Shape.hpp"

class Rectangle: public Shape {
  float height;
  float width;

public:
  Rectangle(float _height, float _width);
  float getArea();
  int getVertices();
};
