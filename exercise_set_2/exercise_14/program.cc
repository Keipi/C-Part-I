#include <iostream>
#include <bitset>

int main(int argc, char *argv[])
{
  ++argv;                              // Set 0th argument to first argument
                                       // instead of executable call

  size_t possibilities = (1<<(argc-1));// possibilities is 2^n

                                       // Go over every possible combination
  for (size_t it = 0; it < possibilities; it++)
  {
    std::cout << it+1 << ": ";         // Print out combination number

                                       // For every bit in possibilities
                                       // shift and check if bit is 1 or 0
    for (int bitIt = 0; bitIt < (argc-1); bitIt++)
    {
      if ((it>>bitIt) % 2 != 0)        // If bit is 1, print out that argv
        std::cout << argv[bitIt] << " ";
    }

    std::cout << '\n';
  }
  
}
