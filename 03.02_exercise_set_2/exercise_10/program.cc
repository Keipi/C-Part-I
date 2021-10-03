#include <iostream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{
        // Stores the string of letters
    string letters = "";

        // Loop through all ASCII characters
    for (size_t charASCII = 0; charASCII != 256; ++charASCII) 
    {
        // Append each ASCII character that is a letter
        if (isalpha(charASCII))
            letters += charASCII;
    }

    cout << letters << '\n';
}
