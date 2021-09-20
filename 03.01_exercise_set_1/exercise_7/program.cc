#include <iostream>

struct Val                                                  // Struct with bit fields in order
{
	size_t b0: 1,
		   b1: 3,
		   b2: 4,
		   b3: 5,
		   b4: 4,
		   b5: 4,
		   b6: 4,
		   b7: 4,
		   b8: 4,
		   b9: 5,
		   b10: 2;
};
                                                             
union Data                                                  // Union with bit representation and 
{                                                           // integer representation
	size_t value;
	Val bit_rep;
};

int main()
{
	Data int_rep;
	int_rep.bit_rep = {0, 7, 15, 10, 6, 7, 15, 15, 7, 0, 3};// Values in order of definition

	std::cout << std::hex << int_rep.value;                 // Use hex to print hex representation
	                                                        // of int representation
}
