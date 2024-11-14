#include <iostream>
#include <vector>

#include "Expression.hpp"

int main() {
  // 假设这是你的产品列表
  std::vector<Product> products = {
      {"Apple", 1.5, "Fruit"}, {"Banana", 9.9, "Fruit"}, {"Car", 99999, "Vehicle"}};

  // 创建查询表达式
  Expression* query =
      new AndExpression(new CategoryExpression("Fruit"), new PriceExpression(1.0, '>'));

  // 执行查询
  for (const auto& product : products) {
    if (query->evaluate(product)) {
      std::cout << "Matched: " << product.name << std::endl;
    }
  }

  // 清理
  delete query;

  return 0;
}