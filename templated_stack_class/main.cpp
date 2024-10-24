#include "stack.hpp"
#include <string>
#include <iostream>

int main()
{
  MyStack<int> stack;

  stack.push(8);
  stack.displayStorage();
  stack.push(9);
  stack.displayStorage();
  stack.push(3);
  stack.displayStorage();
  stack.pop();
  stack.displayStorage();

  std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

  MyStack<std::string> stringStack;

  stringStack.push("hello");
  stringStack.push("world");
  stringStack.displayStorage();
  stringStack.pop();
  stringStack.displayStorage();
}