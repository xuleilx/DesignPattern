#ifndef VISITOR_H
#define VISITOR_H

#include "Shape.h"

// 访问者类的抽象基类
class Visitor {
 public:
  virtual ~Visitor() = default;
  virtual void visit(class Circle& circle) = 0;
  virtual void visit(class Rectangle& rectangle) = 0;
};

#endif  // VISITOR_H