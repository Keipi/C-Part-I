#include "partition.cc"

std::string* quicksort(std::string stringArr[], size_t left, size_t right)
{
  if (left < right)
    {
    size_t pivot = partition(stringArr, left, right); // partition array

    quicksort(stringArr, pivot + 1, right);
    quicksort(stringArr, left, pivot - 1);
    }
}
