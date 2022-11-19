
#include <iostream>


unsigned long long int getFactorial(unsigned long long int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * getFactorial(n - 1);
}

int main()
{
  std::cout << getFactorial(25);
 return 0;
   
}