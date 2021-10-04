void countWords(std::string input)
{
  size_t wordCount = 0;                 // int to hold word count

                                        // it over all chars
  for (std::string::iterator it = input.begin();
       it != input.end(); ++it)
  {
    if (isspace(*it))                   // check if chr is space/newline 
      wordCount += 1;                   // increase word count
  }

                                        // return wordcount to std output
  std::cout << "Number of words: " << wordCount << '\n';
}
