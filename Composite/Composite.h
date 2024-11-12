#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include <string>
#include <vector>

#include "Component.h"
using namespace std;
// 组合类
class Composite : public Component {
 private:
  std::string name_;
  std::vector<std::shared_ptr<Component>> children;

 public:
  Composite(const std::string& name);
  virtual ~Composite() = default;

  // 实现Component的Operation接口，递归调用子组件的Operation
  virtual void Operation(int depth = 0) const override;

  // 允许添加一个子组件
  virtual void Add(const std::shared_ptr<Component>& component) override;

  // 允许移除一个子组件（通过引用比较，这里简单处理，不实际删除内存中的对象）
  virtual void Remove(const Component* component) override;

  // 获取子组件列表
  virtual const std::vector<std::shared_ptr<Component>>& GetChildren() const override;
};
#endif  //~_COMPOSITE_H_