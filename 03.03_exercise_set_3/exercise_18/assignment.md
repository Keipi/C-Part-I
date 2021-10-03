Purpose of this exercise: learn to return multiple values from a function

In this exercise we're designing a combine function defining two parameters: the number of command-line arguments, and the array of command line arguments.

The function returns, in a struct ReturnValues (declared in main.ih):

    a bool ok, which is true if the requested argument number exists and false otherwise;
    a size_t nr, holding the number of the requested argument;
    a string value, containing the requested argument if the requested argument exists and an empty string otherwise. 

The program calls the functions structCall and boundCall. The program can be called without arguments and with arguments. If called without arguments then prodvide usage information and end the program.

Otherwise, the first argument must specify the number of the argument that is requested. E.g., if the program is called as a.out 3 hello world the requested argument is hello. If called as a.out 2 hello world the requested argument is 2.

The function bool structCall receives main's argc and argv, storing combine's return value in a locally defined struct ReturnValues. It should display a short usage message and return false if the requested argument does not exist. If the requested argument does exists display its argument number and value. In main this function is called first, ending the program (normally) if the function returns false.

Also define a function void boundCall which also receives main's argc and argv, and also calls combine, but itself does not define a struct ReturnValues. This function also displays the requested argument number and value. In main it is called after calling structCall.

Hint: be careful not to duplicate code, but factorize identical code in additional functions.

You may assume that, if an intial argument is provided, it is an unsigned integral value.

Implement the program and functions you defined for this exercise.
