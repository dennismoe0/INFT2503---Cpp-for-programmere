#include <iostream>

int main()
{
  // array with 5 slots
  char text[5];
  // pointer to the array
  char *pointer = text;
  char search_for = 'e';
  // No check for input,
  std::cin >> text;
  while (*pointer != search_for)
  {
    *pointer = search_for;
    pointer++;
  }

  // no checks for size of input, but text has max size of 4 characters + \0.
  // Overwrites on line 14, just sets the first character to 'e'.
  // If there is no ee it just overwrites everything
}