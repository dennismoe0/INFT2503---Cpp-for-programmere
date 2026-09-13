#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
  // Declare new circle with radius 5
  Circle circle(5);
  // declare variable type double
  double area = circle.get_area();
  // Missing area
  cout << "Arealet er lik " << area << endl;

  double circumference = circle.get_circumference();
  cout << "Omkretsen er lik " << circumference << endl;
}