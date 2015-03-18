#include "Rectangle.hpp"

Rectangle::Rectangle(float _height, float _width)
{
  this->height = _height;
  this->width = _width;
}

int Rectangle::getVertices()
{
  return 4;
}

float Rectangle::getArea()
{
  return height*width;
}
