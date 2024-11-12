#include "State.hpp"

#include <iostream>

#include "Context.hpp"
using namespace std;

ConcreteStateA::~ConcreteStateA() {}
void ConcreteStateA::Handle() {
  cout << "ConcreteStateA::Handle...... " << endl;
}

void ConcreteStateA::OperationChangeState(Context* con) {
  con->ChangeState(new ConcreteStateB());
}

ConcreteStateB::~ConcreteStateB() {}
void ConcreteStateB::Handle() {
  cout << "ConcreteStateB::Handle...... " << endl;
}
void ConcreteStateB::OperationChangeState(Context* con) {
  con->ChangeState(new ConcreteStateA());
}