#include <string>

#include "Product.hpp"

class Expression {
 public:
  virtual bool evaluate(const Product& product) const = 0;
  virtual ~Expression() {}
};

// 名称匹配
class NameExpression : public Expression {
 private:
  std::string name;

 public:
  NameExpression(std::string n) : name(n) {}
  bool evaluate(const Product& product) const override { return product.name == name; }
};

// 价格比较
class PriceExpression : public Expression {
 private:
  double price;
  char op;  // '>' or '<'
 public:
  PriceExpression(double p, char o) : price(p), op(o) {}
  bool evaluate(const Product& product) const override {
    if (op == '>')
      return product.price > price;
    else if (op == '<')
      return product.price < price;
    return false;  // 不应该发生
  }
};

// 类别匹配
class CategoryExpression : public Expression {
 private:
  std::string category;

 public:
  CategoryExpression(std::string c) : category(c) {}
  bool evaluate(const Product& product) const override { return product.category == category; }
};

// AND表达式
class AndExpression : public Expression {
 private:
  const Expression *left, *right;

 public:
  AndExpression(const Expression* l, const Expression* r) : left(l), right(r) {}
  bool evaluate(const Product& product) const override {
    return left->evaluate(product) && right->evaluate(product);
  }
  ~AndExpression() {
    delete left;
    delete right;
  }
};

// OR表达式
class OrExpression : public Expression {
 private:
  const Expression *left, *right;

 public:
  OrExpression(const Expression* l, const Expression* r) : left(l), right(r) {}
  bool evaluate(const Product& product) const override {
    return left->evaluate(product) || right->evaluate(product);
  }
  ~OrExpression() {
    delete left;
    delete right;
  }
};