#include <iostream>
#include <bitset>

int main(int agrc, char* argv[])
{
  const int value = std::stoi(argv[1]);// Convert input to signed int

                                       // Print value and binary representation
  std::cout << value << " = " << std::bitset<8*sizeof(value)>(value) << " = ";  

                                       // If value is neg, print negative value
  if (value < 0)
    std::cout << (1<<31);

                                       // Loop over remaining bits and print
									   // value if its a 1.
  for (int i = 1<<30; i != 0; i >>= 1)
  {
    if (value & i)
      std::cout << i << " + ";
  }
}
