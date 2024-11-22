#include <iostream>

#include "GUIFactory.h"
#include "MacOSFactory.h"
#include "WindowsFactory.h"

// 客户端代码
void renderUI(GUIFactory& factory) {
  auto button = factory.createButton();
  auto textBox = factory.createTextBox();

  button->render();
  textBox->render();
}

int main() {
  // 使用Windows风格的工厂
  WindowsFactory windowsFactory;
  std::cout << "Windows UI:\n";
  renderUI(windowsFactory);

  // 使用MacOS风格的工厂
  MacOSFactory macFactory;
  std::cout << "MacOS UI:\n";
  renderUI(macFactory);

  return 0;
}