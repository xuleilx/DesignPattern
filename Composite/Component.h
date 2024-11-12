#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <memory>
#include <vector>
// 抽象组件类
class Component {
 public:
  virtual ~Component() = default;

  // 声明一个接口，用于访问组件的操作
  virtual void Operation(int depth = 0) const = 0;

  // 允许添加一个子组件到该组件中（仅对Composite有效）
  virtual void Add(const std::shared_ptr<Component>& component) = 0;

  // 允许移除一个子组件（仅对Composite有效）
  virtual void Remove(const Component* component) = 0;

  // 允许获取子组件（仅对Composite有效）
  virtual const std::vector<std::shared_ptr<Component>>& GetChildren() const = 0;
};
#endif  //~_COMPONENT_H_