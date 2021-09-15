#include <iostream>

namespace {

char const regex[] = R"delim(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delim";	
}                                       // Anonymous namespace

int main()
{
	std::cout << regex;
}
