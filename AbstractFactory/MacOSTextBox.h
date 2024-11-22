
#ifndef MACOS_TEXTBOX_H
#define MACOS_TEXTBOX_H

#include "TextBox.h"

class MacOSTextBox : public TextBox {
 public:
  void render() override { std::cout << "Rendering MacOS TextBox\n"; }
};

#endif  // MACOS_TEXTBOX_H