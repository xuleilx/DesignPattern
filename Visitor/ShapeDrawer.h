#ifndef SHAPEDRAWER_H
#define SHAPEDRAWER_H

#include "Circle.h"
#include "Rectangle.h"
#include "Visitor.h"

class ShapeDrawer : public Visitor {
 public:
  void visit(Circle& circle) override;
  void visit(Rectangle& rectangle) override;

 private:
  void drawCircle(int radius);
  void drawRectangle(int width, int height);
};

#endif /* SHAPEDRAWER_H */
