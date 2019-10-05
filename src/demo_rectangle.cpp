#include <iostream>
#include "rectangle.hpp"
#include "utils/logger.hpp"

using namespace std;
using namespace hyped::Rectangle;
using hyped::utils::Logger;

int main() {

  Logger log_(true, 3);
  int height = 0;
  int width = 0;
  log_.INFO("MAIN", "Input height of your rectangle type int: ");
  cin >> height;
  log_.INFO("MAIN", "Input width of your rectangle type int: ");
  cin >> width;

  Rectangle rec1(height,width);
  log_.INFO("MAIN", "Area of your rectangle: %d", rec1.getArea());
  log_.INFO("MAIN", "Expected area: %d", height*width);

  log_.INFO("MAIN", "Input new height of your rectangle type int: ");
  cin >> height;
  log_.INFO("MAIN", "Input width of your rectangle type int: ");
  cin >> width;

  rec1.setHeight(height);
  rec1.setWidth(width);
  log_.INFO("MAIN", "Area of your new rectangle: %d", rec1.getArea());
  log_.INFO("MAIN", "Expected area: %d", height*width);
  
  return 0;
}