#include "main.ih"

int main(int argc, char *argv[])
{
  std::string input = readLines();      // Read all input lines

  char option = argv[1][1];             // Retrieve last char from CL arg

  switch (option)                       // switch to decide case
  {
    case 'w':
      countWords(input);                // count words in input
      break;
    case 'c':
      countChars(input);                // count chrs in input
      break;
    case 'l':
      countLines(input);                // count lines in input
      break;
  }
}
