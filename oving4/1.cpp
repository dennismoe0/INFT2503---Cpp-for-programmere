#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<double> test = {1, 2, 3, 4, 5};

  std::cout << "Front: " << test.front() << std::endl;
  std::cout << "Back: " << test.back() << "\n"
            << std::endl;
  std::cout << "\n"
            << std::endl;

  for (const auto &element : test)
  {
    std::cout << element << std::endl;
  }
  std::cout << "\n"
            << std::endl;

  for (int i = 0; i < 3; i++)
  {
    auto it = test.emplace(test.begin() + 5, 6);
  }

  for (const auto &element : test)
  {
    std::cout << element << std::endl;
  }
  std::cout << "\n"
            << std::endl;

  // Find number in entire list
  auto a = find(test.begin(), test.end(), 6);
  // place 666 in front of first occurance of 6
  test.emplace(a, 666);
  for (const auto &element : test)
  {
    std::cout << element << std::endl;
  }
  std::cout << "\n"
            << std::endl;
  auto b = find(test.begin(), test.end(), 3);

  // If find didnt find anything, it'll return the "past" the last element
  // so no check needed for last element = first occurance
  if (b != test.end())
  {
    std::cout << "Found value: " << *b << "\n";
  }

  return 0;
}