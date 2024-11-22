
#ifndef WINDOWS_BUTTON_H
#define WINDOWS_BUTTON_H

#include "Button.h"

class WindowsButton : public Button {
 public:
  void render() override { std::cout << "Rendering Windows Button\n"; }
};

#endif  // WINDOWS_BUTTON_H