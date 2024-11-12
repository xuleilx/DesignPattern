#include <iostream>

#include "Context.hpp"
#include "State.hpp"
using namespace std;
int main(int argc, char* argv[]) {
  State* init_state = new ConcreteStateA();
  Context* con = new Context(init_state);
  con->OprationInterface();
  con->OprationInterface();
  con->OprationInterface();
  if (con != NULL) delete con;
  if (init_state != NULL) init_state = NULL;
  return 0;
}