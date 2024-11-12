#include "Context.hpp"

#include "State.hpp"
Context::Context() {}
Context::Context(State* state) { this->_state = state; }
Context::~Context() { delete _state; }
void Context::OprationInterface() {
  _state->Handle();
  _state->OperationChangeState(this);
}
bool Context::ChangeState(State* state) {
  this->_state = state;
  return true;
}
