#include <string>
#include <vector>

struct Product {
  std::string name;
  double price;
  std::string category;

  Product(std::string n, double p, std::string c) : name(n), price(p), category(c) {}
};