void usage(std::string const &programName)
{
  char const usageInfo[] = 
  R"delim(combine

Usage: combine arg-to-use arg...
Where:
  arg-to-use - number of the arg that should be used.
               Should always be a positive integer
  arg        - any number of arguments, separated by a space
)delim";
  
  std::cout << usageInfo;

  exit(0);  
}
