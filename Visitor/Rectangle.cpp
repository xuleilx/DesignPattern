#include "Rectangle.h"

#include "Visitor.h"

Rectangle::Rectangle(double width, double height) : width_(width), height_(height) {}

void Rectangle::accept(Visitor& visitor) {
  visitor.visit(*this);  // 允许访问者访问
}

double Rectangle::getWidth() const { return width_; }

double Rectangle::getHeight() const { return height_; }