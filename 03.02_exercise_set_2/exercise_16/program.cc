#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned int base = stoul(argv[1]);     // First argument is base
    unsigned int number = stoul(argv[2]);   // Second arg is num to convert
    string numInBase;                       // Init string to hold output

	cout << number;
       
    while (true)
    {
        ((number % base > 9) ? numInBase.insert(0, 1, static_cast<char>('a' + number % base - 10)) 
		                     : numInBase.insert(0, to_string(number % base)));
		number /= base;                     // Divide by base to print
		                                    // remaining integers in next loop

		if (number == 0)                    // End loop  
          break;

    }

    cout << ", displayed using radix " << base << " is: " << numInBase << '\n';
}
