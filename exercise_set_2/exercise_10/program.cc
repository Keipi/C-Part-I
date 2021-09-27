#include <iostream>
#include <string>
#include <ctype.h>

int main()
{
  std::string curChar;                 // string to hold chars

                                       // loop over all ascii chars
  for (size_t idx = 0; idx != 255; ++idx)
  {                                    // check if lower or upper letter 
    if ( islower(idx) )              
      curChar.append(std::string (1,idx)); 
    else if ( isupper(idx) )
      curChar.append(std::string (1,idx));
  }

  std::cout << curChar << '\n'; 
}

