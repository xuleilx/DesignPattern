#include "AreaCalculator.h"

#include <iostream>

void AreaCalculator::visit(Circle& circle) {
  double area = 3.14159 * circle.getRadius() * circle.getRadius();
  std::cout << "Area of Circle: " << area << std::endl;
}

void AreaCalculator::visit(Rectangle& rectangle) {
  double area = rectangle.getWidth() * rectangle.getHeight();
  std::cout << "Area of Rectangle: " << area << std::endl;
}