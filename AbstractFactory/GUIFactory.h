#ifndef GUIFACTORY_H
#define GUIFACTORY_H

#include <memory>

#include "Button.h"
#include "TextBox.h"

class GUIFactory {
 public:
  virtual std::unique_ptr<Button> createButton() = 0;
  virtual std::unique_ptr<TextBox> createTextBox() = 0;
  virtual ~GUIFactory() = default;
};

#endif  // GUIFACTORY_H