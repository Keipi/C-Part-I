#include <iostream>
#include <string>

int main()
{
  std::string input;

  while (std::cout << "? ", std::getline(std::cin, input)) 
    {
    if (input.empty())
      return(0);
    for (std::string::reverse_iterator revIt=input.rbegin(); 
                             revIt != input.rend(); ++revIt)
    {
      std::cout << *revIt;
    }
    std::cout << '\n';
  }
}
