#include "Shape.hpp"

class Rectangle: public Shape {
  float height;
  float width;

public:
  float getArea();
  int getVertices();
};
