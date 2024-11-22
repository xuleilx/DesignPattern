
#ifndef WINDOWS_FACTORY_H
#define WINDOWS_FACTORY_H

#include "GUIFactory.h"
#include "WindowsButton.h"
#include "WindowsTextBox.h"

class WindowsFactory : public GUIFactory {
 public:
  std::unique_ptr<Button> createButton() override { return std::make_unique<WindowsButton>(); }
  std::unique_ptr<TextBox> createTextBox() override { return std::make_unique<WindowsTextBox>(); }
};

#endif  // WINDOWS_FACTORY_H