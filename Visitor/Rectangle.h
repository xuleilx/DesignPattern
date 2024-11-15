#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
 public:
  Rectangle(double width, double height);
  void accept(Visitor& visitor) override;
  double getWidth() const;
  double getHeight() const;

 private:
  double width_, height_;
};

#endif  // RECTANGLE_H