#include "main.ih"

int main(int argc, char *argv[])
{
  std::string input = readLines();

  switch (argv[1])
  {
    case "-w":
      countWords(input);
      break;
    case "-c":
      countChars(input);
      break;
    case "-l":
      countLines(input);
      break;
  }
}
