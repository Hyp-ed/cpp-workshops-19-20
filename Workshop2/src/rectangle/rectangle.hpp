
#ifndef HYPED_RECTANGLE_RECTANGE_H      // guards necessary for header files
#define HYPED_RECTANGLE_RECTANGE_H

namespace hyped {
namespace rectangle {                   // namespaces are all lower case

class Rectangle {
  // FILL HERE

 public:
  Rectangle(int height, int width);

  int getArea();

  void setHeight(int height);

  void setWidth(int width);

 private:
  int height_;
  int width_;
};

}}  // namespace hyped::rectangle

#endif  // HYPED_RECTANGLE_RECTANGE_H
