#include <iostream>
#include <sstream>

int main()
{ 
  // create an array with 5 integer
  int numbers[] = {1, 2, 3, 4, 5};
  std::cout << numbers << std::endl; // 0x7ffee86bea30 >> why?
  std::cout << numbers[0] << std::endl; // 1

  numbers[0] = 100;
  std::cout << numbers[0] << std::endl; // 100

  std::cout << "Type a number: " << std::endl;
  std::cin >> numbers[1];
  std::cout << numbers[1] << std::endl;

  // create a C type array with 20 storage space
  int array_of_20[20];
  // keep track of the array size
  // usually with another variable
  int num_elements = 0;

  // use the for loop to iterate over collections
  int guesses[] = {12, 43, 23, 43, 23};
  // with C style arrays
  // you have to create a separate variable for the size
  // sizeof() gives back the size in bytes
  // this 5 number >> 20 bites
  // so we have to divide it by the size of 1 element
  int size = sizeof(guesses) / sizeof(guesses[0]);
  std::cout << "Size of the array is: " + std::to_string(size) + "." << std::endl;

  for (int i = 0; i < size; i++)
  {
    std::cout << guesses[i] << "\t";
  }

  std::cout << std::endl;

  // in the next case the sizeof() does not work
  int other_array[10] = {11, 22, 33, 12, 13};
  int other_size = sizeof(other_array) / sizeof(other_array[0]);
  std::cout << "Other not correct size: " + std::to_string(other_size) << std::endl;
  // you need to do it manually
  num_elements = 5;
  std::cout << "Other correct size: " + std::to_string(num_elements) << std::endl;
  // the five '0' means that there is 5 empty places in the other_array
  for (int i = 0; i < other_size; i++)
  {
    std::cout << other_array[i] << "\t";
  }
  std::cout << std::endl;
  // use the num_elements variable instead
  for (int i = 0; i < num_elements; i++)
  {
    std::cout << other_array[i] << "\t";
  }

  std::cout << std::endl;
  
  return 0;
}