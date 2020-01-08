// default arguments sometimes called
// default parameter values
// default parameters
// it helps to make parameters optional
// use overloading when >>
// everytime when you can put a default value
// !!! you should minimize overloading (more complex, repeation...)
// use default arguments when >> 
// use when you can, better than overloading
#include <iostream>

// double pow(double base, int pow)
// {
//   int total = 1;

//   for (int i = 0; i < pow; i++)
//   {
//     // total = total * base;
//     total *= base;
//   }
//   return total;
// }

// use the overloading the make the pow argument optional
// double pow(double base)
// {
//   return base * base;
// }

// better solution to make the pow argument optional
// default argument >> int pow = 2
double pow(double base, int pow = 2)
{
  int total = 1;

  for (int i = 0; i < pow; i++)
  {
    // total = total * base;
    total *= base;
  }
  return total;
}

int main()
{
  std::cout << pow(3, 3) << std::endl;
  std::cout << pow(3) << std::endl;

  return 0;
}