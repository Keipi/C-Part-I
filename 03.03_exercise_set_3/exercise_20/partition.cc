size_t partition(std::string stringArr[], size_t left, size_t right)
{
  size_t pivot = stringArr[left];
  size_t nextElem = left + 1;
  
  for (size_t idx = left; idx != right; ++idx)
  {
    if (stringArr[idx] > pivot)
    {
      ++idx;
      std::swap(stringArr[idx], stringArr[right]);
    }
  }
  
  std::swap(stringArr[nextElem + 1], stringArr[left]);
  return (nextElem + 1);
}
