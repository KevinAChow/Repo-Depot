enum ShapeColour{RED,
			GREEN,
			BLUE,
			YELLOW,
			PURPLE,
			CYAN};

class Shape {

  ShapeColour colour;
  std::string favourite_food;

public:
  virtual int getVertices()=0;
  virtual float getArea()=0;

};
