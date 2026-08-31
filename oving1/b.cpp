#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

void read_temperatures(double temperatures[], int length);

int main()
{
  const int length = 20;
  double temperatures[length];

  std::vector<double> tempsUnder;
  std::vector<double> tempsBetween;
  std::vector<double> tempsOver;

  read_temperatures(temperatures, length);

  int i = 0;
  while (i < length)
  {
    if (temperatures[i] < 10)
    {
      tempsUnder.push_back(temperatures[i]);
    }
    if (temperatures[i] > 20)
    {
      tempsOver.push_back(temperatures[i]);
    }
    if (temperatures[i] >= 10 && temperatures[i] <= 20)
    {
      tempsBetween.push_back(temperatures[i]);
    }
    i++;
  }
  std::cout << "Temps under 10: " << tempsUnder.size() << std::endl;
  std::cout << "Temps between 10 and 20: " << tempsBetween.size() << std::endl;
  std::cout << "Temps over 20: " << tempsOver.size() << std::endl;

  return 0;
}
void read_temperatures(double temperatures[], int length)
{
  std::ifstream file("../temps.txt");

  if (!file.is_open())
  {
    std::cout << "Could not open line." << std::endl;
    return;
  }

  std::string line;
  // Reads through each line and adds it to the table
  for (int i = 0; i < length; i++)
  {
    std::getline(file, line);
    temperatures[i] = std::stod(line);
  }
  file.close();
}
