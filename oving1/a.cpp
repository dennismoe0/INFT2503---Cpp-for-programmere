#include <iostream>
#include <vector>

int main()
{
  const int length = 5;

  std::vector<double> temps;
  std::vector<double> tempsUnder;
  std::vector<double> tempsBetween;
  std::vector<double> tempsOver;

  double input;

  std::cout << "Skriv inn " << length << " temperaturer.\n";

  while (temps.size() < length && std::cin >> input)
  {
    temps.push_back(input);
    if (input < 10)
    {
      tempsUnder.push_back(input);
    }
    if (input > 20)
    {
      tempsOver.push_back(input);
    }
    if (input >= 10 && input <= 20)
    {
      tempsBetween.push_back(input);
    }
  }
  std::cout << "Temps under 10: " << tempsUnder.size() << std::endl;
  std::cout << "Temps between 10 and 20: " << tempsBetween.size() << std::endl;
  std::cout << "Temps over 20: " << tempsOver.size() << std::endl;

  return 0;
}