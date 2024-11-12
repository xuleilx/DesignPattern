#ifndef _CONTEXT_H_
#define _CONTEXT_H_
class State;
class Context {
 public:
  Context();
  Context(State* state);
  ~Context();
  void OprationInterface();
  bool ChangeState(State* state);

 private:
  State* _state;
};
#endif  //~_CONTEXT_H_