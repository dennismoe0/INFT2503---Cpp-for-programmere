#include <iostream>

int main()
{
  int a = 5;
  // Not initialized
  // &b means reference, so cant be it's own thing.
  // int &b = a;
  int &b = a;
  int *c;
  c = &b; // Funker kun om &b fikses.
  // *b is invalid bc there is nothing to dereference.
  // Same for a, both a and b are values, which are = 5.
  a = b + *c;
  // &b is reference, not value, must change to b.
  // or *&b ...
  *&b = 2;
}