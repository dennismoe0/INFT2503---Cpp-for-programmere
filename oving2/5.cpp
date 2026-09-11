#include <iostream>

int main()
{
  double number = 4;
  // pointer to address at the variable
  double *pointer = &number;
  // value at address
  double &reference = number;

  // Dereference pointer, print the address of reference
  std::cout << *pointer << "\n"
            << reference << "\n";

  number = 5; // Direct set
  std::cout << number << "\n";
  *pointer = 6; // dereference and set value of number
  std::cout << number << "\n";
  reference = 7; // reference = number, so set it means setting number
  std::cout << number << "\n";
}