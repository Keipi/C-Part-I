#include <iostream>
#include "quicksort.cc"

extern char **environ;

int main()
{
  size_t nVariables = sizeof(environ);  // Store amount of variables
  std::string variables[nVariables];    // Initialize string array

                                        // Assign each environ *char
                                        // to array of string
  for (size_t idx = 0; idx != nVariables; ++idx)
    variables[idx] = environ[idx];

  quicksort(nVariables, variables); 
}
