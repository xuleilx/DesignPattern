#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>

class Button {
 public:
  virtual void render() = 0;
  virtual ~Button() = default;
};

#endif  // BUTTON_H