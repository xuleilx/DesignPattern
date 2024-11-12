#include "Leaf.h"

#include <iostream>

Leaf::Leaf(const std::string& name) : name(name) {}

// 实现Component的Operation接口
void Leaf::Operation(int depth) const {
  for (int i = 0; i < depth; ++i) {
    std::cout << "--";
  }
  std::cout << "Leaf: " << name << std::endl;
}

// Leaf不应该有子组件，因此这些操作是空的或抛出异常
void Leaf::Add(const std::shared_ptr<Component>&) {
  throw std::runtime_error("Cannot add to a Leaf.");
}

void Leaf::Remove(const Component*) { throw std::runtime_error("Cannot remove from a Leaf."); }

const std::vector<std::shared_ptr<Component>>& Leaf::GetChildren() const {
  static const std::vector<std::shared_ptr<Component>> empty;
  return empty;
}