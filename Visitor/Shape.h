#ifndef SHAPE_H
#define SHAPE_H

#include <memory>

// 前向声明
class Visitor;

// 抽象图形类
class Shape {
 public:
  virtual ~Shape() = default;
  virtual void accept(Visitor& visitor) = 0;  // 接受访问者
};

#endif  // SHAPE_H