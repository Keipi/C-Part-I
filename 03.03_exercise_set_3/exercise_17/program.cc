#include "program.ih"

int main(int argc, char *argv[])
{
  double isDbl = 0;                     // Define third variable
                                        // to check if val is dbl
  for (int argIdx = 1; argIdx < argc; ++argIdx)
  {
                                        // Inspect all chars in CLI argument
    for (size_t chrIdx = 0; chrIdx < std::strlen(argv[argIdx]); ++chrIdx)
    {
      if (ispunct(argv[argIdx][chrIdx]))// Check if chr is punctuation chr
   		{
          isDbl = 1;                    // If chr=punct. digit = dbl
		  break;
		}
    }
	if (isDbl == 1)                     // Also break first loop if dbl is found
      break;
  }
                                        // Decide which fun is used based on
										// third arg
  std::cout << (isDbl == 1 ? sum(argc, argv, isDbl) : sum(argc, argv));
}
