#include <iostream>

int main(int argc, char *argv[])
{
    for (size_t toMult = std::stoul(argv[1]),
				multiply = 10,
				idx = 1; idx != multiply + 1; ++idx) // Loop from 1 to 10
    {
        std::cout << idx << " * " << toMult << " = " << idx * toMult << '\n';
    }
}
