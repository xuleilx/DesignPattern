
#ifndef MACOS_BUTTON_H
#define MACOS_BUTTON_H

#include "Button.h"

class MacOSButton : public Button {
 public:
  void render() override { std::cout << "Rendering MacOS Button\n"; }
};

#endif  // MACOS_BUTTON_H