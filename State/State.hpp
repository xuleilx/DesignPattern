#ifndef _STATE_H_
#define _STATE_H_
class Context;  // 前置声明
class State {
 public:
  ~State() {};
  virtual void OperationChangeState(Context*) = 0;
  virtual void Handle() = 0;
};
class ConcreteStateA : public State {
 public:
  ConcreteStateA() = default;
  virtual ~ConcreteStateA();
  virtual void OperationChangeState(Context*) override;
  virtual void Handle() override;
};
class ConcreteStateB : public State {
 public:
  ConcreteStateB() = default;
  virtual ~ConcreteStateB();
  virtual void OperationChangeState(Context*) override;
  virtual void Handle() override;
};
#endif  //~_STATE_H_