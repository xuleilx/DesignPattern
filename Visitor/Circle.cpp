#include "Circle.h"

#include "Visitor.h"

Circle::Circle(double radius) : radius_(radius) {}

void Circle::accept(Visitor& visitor) {
  visitor.visit(*this);  // 允许访问者访问
}

double Circle::getRadius() const { return radius_; }