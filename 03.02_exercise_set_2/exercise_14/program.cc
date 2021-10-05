#include <iostream>
#include <bitset>

int main(int argc, char *argv[])
{
  ++argv;                              // Set 0th argument to first argument
                                       // instead of executable call

  size_t combNo = (1<< argc - 1);      // number of arrangements is 2^n


  for (size_t comb = 0; comb != combNo; ++comb)
  {
    std::cout << comb + 1 << ": ";       // Print out combination number

                                       // For every bit in combNo
                                       // shift and check if bit is 1 or 0
    for (size_t argIdx = 0; argIdx != argc-1; argIdx++)
    {
      if (comb >> argIdx & comb)        // If bit is 1, print out that argv
        std::cout << argv[argIdx] << " ";
    }

    std::cout << '\n';
  }
  
}
