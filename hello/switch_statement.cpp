// switch statement and enum
#include <iostream>
#include <string>

int main()
{
  int age;
  std::cout << "Your age: ";
  std::cin >> age;
  
  switch(age)
  {
    case 12:
      std::cout << "Mommy's little boy" << std::endl;
      // done with this case, without >> falls through
      // works with return 0; as well
      break;
    case 18:
      std::cout << "Do not forget your driving licence!" << std::endl;
      break;
    case 35:
      std::cout << "Welcome junior developer\n";
      break;
    default:
      std::cout << "No match with this age\n";
      break;
  }

  // enum used in a switch statement
  // enum stores possible values as integral types
  enum season{summer, spring, fall, winter};
  season now = winter;

  switch (now)
  {
    case summer:
      break;
    case spring:
      break;
    case fall:
      break;
    case winter:
      std::cout << "winter is cold in Enumerania...\n";
      break;
    // default not necessary
    // because enum we can have only 4 possible values...
    // default:
    //   break;
  }
  return 0;
}