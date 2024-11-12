#include "Composite.h"

#include <algorithm>
#include <iostream>

Composite::Composite(const std::string& name) : name_(name) {}

// 实现Component的Operation接口，递归调用子组件的Operation
void Composite::Operation(int depth) const {
  for (int i = 0; i < depth; ++i) {
    std::cout << "--";
  }
  std::cout << "Composite: " << name_ << std::endl;

  for (const auto& child : children) {
    child->Operation(depth + 2);  // 增加缩进表示层级
  }
}

// 允许添加一个子组件
void Composite::Add(const std::shared_ptr<Component>& component) { children.push_back(component); }

// 允许移除一个子组件（通过引用比较，这里简单处理，不实际删除内存中的对象）
void Composite::Remove(const Component* component) {
  auto it = std::remove_if(
      children.begin(), children.end(),
      [&](const std::shared_ptr<Component>& child) { return child.get() == component; });
  children.erase(it, children.end());
}

// 获取子组件列表
const std::vector<std::shared_ptr<Component>>& Composite::GetChildren() const { return children; }
