
#ifndef MACOS_FACTORY_H
#define MACOS_FACTORY_H

#include "GUIFactory.h"
#include "MacOSButton.h"
#include "MacOSTextBox.h"

class MacOSFactory : public GUIFactory {
 public:
  std::unique_ptr<Button> createButton() override { return std::make_unique<MacOSButton>(); }
  std::unique_ptr<TextBox> createTextBox() override { return std::make_unique<MacOSTextBox>(); }
};

#endif  // MACOS_FACTORY_H