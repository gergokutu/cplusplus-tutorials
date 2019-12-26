#include <iostream>

void print_array(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << "\t";
  }
  
  std::cout << std::endl;
}

int main()
{
  // if just declare but not initialize the array
  // you get undifined instead of 0s
  // undefined results in crazy values...
  // int guesses[100];
  // to get 100 pcs of 0 >> initialize a empty array
  // int guesses[100] = {};
  // int guesses[100] = {12, 43, 23, 43, 23};

  // with statically sized arrays
  // use bigger size than needed (e.g 10 vs 100)
  // it has effect on the for loop!!!
  // because you want to stop giving inputs before 100 iteration
  // solve this with an if statement inside of the for-loop
  const int SIZE = 100;
  int guesses[SIZE];
  // int size = sizeof(guesses) / sizeof(int);

  int count = 0;
  
  for (int i = 0; i < SIZE; i++)
  {
    if (std::cin >> guesses[i]) // return cin >> evaluates true if input is OK
    {
      // input worked
      count++;
    }
    else
    {
      // invalid character >> e.g. q
      // enter, space, tab... is not ok for this...
      break;
    }
  }

  // this way it prints out the total array
  // we need a seperate array above >> int count = 0;
  // increase when the input OK (true)
  // use count instead of SIZE in the function call
  // print_array(guesses, SIZE);
  print_array(guesses, count);
  // cin keeps the wrong input >> breaks...
  // correct it manually
  std::cin.clear();
  // ignore the next 10000 input of new line
  // clear out the junk from input...
  // try also without the next line of code!!
  // std::cin.ignore(10000, '\n');
  // remove the maximum number of characters
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::string test;
  std::cin >> test;
  std::cout << test << std::endl;

  return 0;
}