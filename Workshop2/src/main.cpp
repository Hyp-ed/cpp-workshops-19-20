#include <iostream>
#include "utils/logger.hpp"
#include "rectangle/rectangle.hpp"

using std::cin;
using hyped::utils::Logger;
using hyped::rectangle::Rectangle;

int main() {
  Logger log(true, 3);

  int height  = 0;
  int width   = 0;
  log.INFO("MAIN", "Input height of your rectangle type int: ");
  cin >> height;
  log.INFO("MAIN", "Input width of your rectangle type int: ");
  cin >> width;

  Rectangle rec1(height, width);
  log.INFO("MAIN", "Area of your rectangle: %d", rec1.getArea());
  log.INFO("MAIN", "Expected area: %d", height*width);

  log.INFO("MAIN", "Input new height of your rectangle type int: ");
  cin >> height;
  log.INFO("MAIN", "Input width of your rectangle type int: ");
  cin >> width;

  rec1.setHeight(height);
  rec1.setWidth(width);
  log.INFO("MAIN", "Area of your new rectangle: %d", rec1.getArea());
  log.INFO("MAIN", "Expected area: %d", height*width);

  return 0;
}
