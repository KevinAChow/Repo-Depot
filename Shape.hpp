enum Colour{RED,
			GREEN,
			BLUE,
			YELLOW,
			PURPLE,
			CYAN};

class Shape {

  Colour colour;
  std::string favourite_food;

public:
  virtual int getVertices()=0;
  virtual float getArea()=0;

};
