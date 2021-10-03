#include <iostream>

struct Val                             // Bit field with default values 
{
	size_t b0: 1 = 0,
		   b1: 3 = 7,
		   b2: 4 = 15,
		   b3: 5 = 10,
		   b4: 4 = 6,
		   b5: 4 = 7,
		   b6: 4 = 15,
		   b7: 4 = 15,
		   b8: 4 = 7,
		   b9: 5 = 0,
		   b10: 2 = 3;
};
                                                             
union Data                             // union with value and bit field 
{                                                           
	size_t value;
	Val bitRep{};
};

int main()
{
    Data intRep;                       // Init with default values

	                                   // Print int representation as hex
	std::cout << std::hex << intRep.value;                 
}
