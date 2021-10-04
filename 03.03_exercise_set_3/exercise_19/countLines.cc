void countLines(std::string input)
{
  size_t lineCount = 0;                     // Int to store line count 

  for (std::string::iterator it = input.begin();
       it != input.end(); ++it)
  {
    if (*it == '\n')
      lineCount += 1;
  }

  std::cout << "Number of lines: " << lineCount << '\n';
} 
