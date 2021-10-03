C and C++, in contrast to e.g. Python, use fixed-width integer arithmetic.

For unsigned integers, C++ uses power-of-two representation. The rightmost bit has value 2 ^ 0 = 1, the next 2 ^ 1 = 2, then 2 ^ 2 = 4, etc. Shifting all bits to the right (which puts a 0 in the leftmost position) has the same effect as division by 2. Arithmetic on unsigned integers is modulo-2^N, so it does not overflow.

For signed integers, two's complement notation is used. Almost all bits have the same values as in unsigned integers, but the leftmost bit is special. It has a negative value: - 2 ^ (N - 1), where N is the number of bits.

Here, shifting right is not the same as dividing by two. In fact, the result of a shift of a signed integer type is implementation-defined - to be avoided if you can.

So be careful what types you pick when you write a program called 'complement', that shows the bits of a (signed) integer, and their values, like this:

./complement 300 300 = 00000000000000000000000100101100 = 256 + 32 + 8 + 4 ./complement -300 -300 = 11111111111111111111111011010100 = -2147483648 + 1073741824 + 536870912 + 268435456 + 134217728 + 67108864 + 33554432 + 16777216 + 8388608 + 4194304 + 2097152 + 1048576 + 524288 + 262144 + 131072 + 65536 + 32768 + 16384 + 8192 + 4096 + 2048 + 1024 + 512 + 128 + 64 + 16 + 4

For now, use int for the value. But at some point we may want to make that long long int. So don't depend on wider types than int.

Hints:

Integer numbers in C++ code are of type int unless you specify otherwise.
When you give a bitwise operator a signed and an unsigned operand of the same width, it converts the signed one to unsigned before it operates, and it returns unsigned too.
You can use static_cast, but too many of them makes the program hard to read.
You may be tempted to read a short int (or even a char) from the command line, instead of an int, just because fewer bits means less reading. Be warned that that actually makes this exercise harder, because you get to deal with more conversions in integer expressions in C++.
