#include "ShapeDrawer.h"

#include <cmath>
#include <iostream>
#include <vector>

void ShapeDrawer::visit(Circle& circle) {
  std::cout << "Area of Circle: " << std::endl;
  drawCircle(circle.getRadius());
}

void ShapeDrawer::visit(Rectangle& rectangle) {
  std::cout << "Area of Rectangle: " << std::endl;
  drawRectangle(rectangle.getWidth(), rectangle.getHeight());
}

// 绘制一个近似的圆形
void ShapeDrawer::drawCircle(int radius) {
  for (int y = -radius; y <= radius; y++) {
    for (int x = -radius; x <= radius; x++) {
      if (std::round(std::sqrt(x * x + y * y)) == radius) {
        std::cout << "*";  // 画出圆的边界
      } else {
        std::cout << " ";  // 空白区域
      }
    }
    std::cout << std::endl;
  }
}

// 绘制一个长方形
void ShapeDrawer::drawRectangle(int width, int height) {
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
        std::cout << "*";  // 长方形的边框
      } else {
        std::cout << " ";  // 空白区域
      }
    }
    std::cout << std::endl;
  }
}