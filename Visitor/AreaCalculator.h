#ifndef AREACALCULATOR_H
#define AREACALCULATOR_H

#include "Circle.h"
#include "Rectangle.h"
#include "Visitor.h"

class AreaCalculator : public Visitor {
 public:
  void visit(Circle& circle) override;
  void visit(Rectangle& rectangle) override;
};

#endif  // AREACALCULATOR_H