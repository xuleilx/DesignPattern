
#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <iostream>

class TextBox {
 public:
  virtual void render() = 0;
  virtual ~TextBox() = default;
};

#endif  // TEXTBOX_H