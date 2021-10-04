void countChars(std::string input)
{
  size_t charCount = 0;                 // Int to contain char count

                                        // it over all chars
  for (std::string::iterator it = input.begin();
       it != input.end(); ++it)
  {
    if (isgraph(*it))                   // check if char has graphical reprsnt.
      charCount += 1;                   // increase charCount
  }

                                        // Output chr count
  std::cout << "Number of chars: " << charCount << '\n';
}
