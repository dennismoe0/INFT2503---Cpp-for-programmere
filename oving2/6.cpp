#include <iostream>

int find_sum(const int *table, int length);

int main()
{
  int array[20];
  for (int i = 1; i <= 10; i++)
  {
    array[i - 1] = i;
  }
  for (int i = 11; i <= 15 && i > 10; i++)
  {
    array[i - 1] = i;
  }
  for (int i = 16; i <= 20 && i > 15; i++)
  {
    array[i - 1] = i;
  }

  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
  {
    std::cout << array[i] << "\n";
  }

  std::cout << "Sum av 10 første tall: " << find_sum(array, 10) << "\n";
  std::cout << "Sum av 5 neste tall: " << find_sum(&array[10], 5) << "\n";
  std::cout << "Sum av 5 siste tall: " << find_sum(&array[15], 5) << "\n";
}

int find_sum_old(const int *table, int length)
{
  int sum1 = 0;
  int sum2 = 0;
  int sum3 = 0;

  for (int i = 0; i < 10; i++)
  {
    sum1 += table[i];
  }
  for (int i = 10; i < 15; i++)
  {
    sum2 += table[i];
  }
  for (int i = 15; i < 20; i++)
  {
    sum3 += table[i];
  }

  std::cout << "Sum av de 10 første tallene: " << sum1 << "\n"
            << "Sum av de neste 5: " << sum2 << "\n"
            << "Sum av de siste 5: " << sum3 << "\n";
  return 0;
}

int find_sum(const int *table, int length)
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += table[i];
  }
  return sum;
}
