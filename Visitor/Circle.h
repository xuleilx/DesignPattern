#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
 public:
  Circle(double radius);
  void accept(Visitor& visitor) override;
  double getRadius() const;

 private:
  double radius_;
};

#endif  // CIRCLE_H