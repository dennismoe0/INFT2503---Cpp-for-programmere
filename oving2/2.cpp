#include <iostream>

int main()
{
  char *line = nullptr;
  strcpy(line, "Dette er en tekst");
  // SEGMENTATION FAULT
  // Bc youre trying to write and copy a nullptr
  // 0 is forbidden as an address = crash.

  return 0;
}