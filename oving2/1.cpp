#include <iostream>

int main()
{
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  std::cout << "1a)"
            << &i << "\n"
            << &j << "\n"
            << p << "\n"
            << q << "\n"
            << *&i << "\n"
            << *&j << "\n"
            << *p << "\n"
            << *q << "\n";
  // verdien til p = 7
  *p = 7;
  // verdien til *q = j, så 5 + 4 = 9
  *q += 4;
  // 9 = 7 + 1
  *q = *p + 1;
  // addressen til p = q, som da setter verdiene like
  p = q;
  std::cout << "1b)"
            << "\n"
            << *p << " " << *q << std::endl;
  // Her ser man de er like, så alle operasjoner videre på p eller q påvirker den andre.
  std::cout << p << "\n"
            << q;
  return 0;
}