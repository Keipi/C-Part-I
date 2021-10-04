std::string readLines()
{
  std::string result;                   // Declare input text
  std::string line;                     // Single input line
  
  while ( std::getline(std::cin, line) )// Get input till Ctrl+D is called
    result += line + '\n';              // Append new line to string

  return result;                        // Return string
}
