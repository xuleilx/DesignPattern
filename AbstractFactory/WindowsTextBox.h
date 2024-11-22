
#ifndef WINDOWS_TEXTBOX_H
#define WINDOWS_TEXTBOX_H

#include "TextBox.h"

class WindowsTextBox : public TextBox {
 public:
  void render() override { std::cout << "Rendering Windows TextBox\n"; }
};

#endif  // WINDOWS_TEXTBOX_H