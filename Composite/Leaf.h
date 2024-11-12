#ifndef _LEAF_H_
#define _LEAF_H_
#include <string>

#include "Component.h"
// 叶节点类
class Leaf : public Component {
 private:
  std::string name;

 public:
  Leaf(const std::string& name);
  virtual ~Leaf() = default;

  // 实现Component的Operation接口
  virtual void Operation(int depth = 0) const override;

  // Leaf不应该有子组件，因此这些操作是空的或抛出异常
  virtual void Add(const std::shared_ptr<Component>&) override;

  virtual void Remove(const Component*) override;
  virtual const std::vector<std::shared_ptr<Component>>& GetChildren() const override;
};

#endif  //~_LEAF_H_