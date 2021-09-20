Purpose of this exercise: learn to simplify bit-field operations

Write a program initializing a size_t value field of a union as follows:

    it holds an even value;
    bits 1 through 3 (bit counting starts at 0) hold the value 7
    the next 4 bits hold the value 15
    the next 5 bits hold the value 10
    the next 4 bits hold the value 6
    the next 4 bits hold the value 7
    the next 4 bits hold the value 15
    the next 4 bits hold the value 15
    the next 4 bits hold the value 7
    the next 5 bits hold the value 0
    the next 2 bits hold the value 3
    the remaining bits are not set 

Display the variable as a hexadecimal value (use cout << hex << ... for that).

Your main function may only contain one cout statement, and your program may not define global variables.

Hint: use bit-fields

Submit your program and its output.

Note:

This exercise assumes that you're working on a little-endian computer. Most computers are, but maybe some computers use big endian multi-byte representations. If you don't know and want to verify what your computer uses, run the following little program:

    #include <arpa/inet.h>

    #include <iostream>

    using namespace std;

    int main()
    {
        uint32_t value = 0x10203040;

        cout << hex << value << ' ' << htonl(value) << '\n';
    }

If the two values that are displayed when you execute the program are equal then you're using a big-endian computer, otherwise a little-endian computer.

So if the values are equal, then you can still do the exercise as-is, in which case the first bitfield should be read as: bit 0 should be 0, in which case the bits refer to the bit-indices from the byte at the lowest address to the byte at the highest address.

If this is all going a bit too fast for you: never mind, and simple do the exercise as described.

The correct output is a readable word (using 0 (number) for o (letter). Explain why the first three characters of the displayed value are what they are.


