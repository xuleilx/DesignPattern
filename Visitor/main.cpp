#include <iostream>
#include <memory>
#include <vector>

#include "AreaCalculator.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeDrawer.h"

int main() {
  // 创建一些图形对象
  std::vector<std::shared_ptr<Shape>> shapes;
  shapes.push_back(std::make_shared<Circle>(7.0));          // 半径为 5 的圆
  shapes.push_back(std::make_shared<Rectangle>(4.0, 6.0));  // 宽为 4，高为 6 的矩形

  // 创建一个访问者：计算面积
  AreaCalculator areaCalculator;
  ShapeDrawer shapeDrawer;

  // 遍历所有图形并计算面积
  for (auto& shape : shapes) {
    shape->accept(areaCalculator);
    shape->accept(shapeDrawer);
  }

  return 0;
}