#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);   // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);         // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;   // new nibble (= 0 .. 15)  

	size_t mask = (value >> (4 * nibble)) % 16; // Find 4 relevant bits
	mask <<= (4 * nibble); // Add padding to get the right position

	size_t padded_replacement = (replacement) % 16 << (4 * nibble); // Set replacement to the right position

	value ^= mask; // Set bits to replace to 0
	value |= padded_replacement; // Use OR to replace values

    cout << hex << value << '\n';
}
