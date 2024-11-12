#include <iostream>

#include "Component.h"
#include "Composite.h"
#include "Leaf.h"
using namespace std;
int main(int argc, char* argv[]) {
  // 创建组件
  auto leaf1 = std::make_shared<Leaf>("Leaf A");
  auto leaf2 = std::make_shared<Leaf>("Leaf B");
  auto composite1 = std::make_shared<Composite>("Composite X");
  auto composite2 = std::make_shared<Composite>("Composite Y");

  // 构建树
  composite1->Add(leaf1);
  composite1->Add(leaf2);
  composite2->Add(composite1);

  // 执行操作
  composite2->Operation();

  return 0;
}