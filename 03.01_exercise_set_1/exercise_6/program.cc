#include <iostream>

using namespace std;

int main()
{
	size_t value;                                           // Declare type of input value

	cout << "Enter a number:\n";
	cin >> value;						                    // Take input from user

	cout << (value % 2 != 0 ? "odd" : "even") << '\n';      // If mod number is zero -> even
	cout << ((value & 1) == 1 ? "odd" : "even") << '\n';    // If last bit is 1, number is odd
	cout << ((value/2 * 2) != value ? "odd" : "even") << '\n'; // Integers divided by 2 are rounded if odd
	cout << ((value>>1)<<1 != value ? "odd" : "even") << '\n'; // Basically checking if last bit is 0 (Even)
	cout << ((value | 1) == value ? "odd" : "even") << '\n';
	cout << ((value ^ 1) == (value - 1) ? "odd" : "even") << '\n';
}
