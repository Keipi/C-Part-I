#include <iostream>

int main(int argc, char *argv[])
{
    size_t multiply = 10;               // Highest number to multiply with
    size_t to_mult = std::stoul(argv[1]);

    for (size_t idx = 1; idx != multiply + 1; ++idx)
        std::cout << idx << " * " << to_mult << " = " << idx * to_mult << '\n';
}
