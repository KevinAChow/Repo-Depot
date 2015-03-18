#include <iostream>

#include "Rectangle.hpp"

int main(void)
{
  Rectangle my_rect(3, 4);
  std::cout << my_rect.getVertices() << std::endl;
  for (int i = 10; i > 0; i--)
	{
	  std::cout << i << std::endl;
	}
  return 0;
}
