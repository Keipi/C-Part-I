## In C++, what's the difference between a declaration and a definition?

A declaration simply states the name and type of an object.

The definition adds a value or code to this object.

So for example, a function declaration would be the function name, return type
and possible default arguments.

```cpp
int func(a = 3);
```

A function definition would be the code of the function. 

```cpp
int func(a)
{
	return a;
}
```

## What are the header files used for?

To declare functions, variables and classes that are used in several separate
implementation files. This ensures that every file uses the same definition
for the relevant objects.

## When a compiler creates a program, in what part of the construction process
## does it use header files and in what part libraries?

Header files are loaded during preprocess of each separate file that is being
compiled. This happens at the beginning.

After compilation, all separate files are linked to eachother and libraries.

## Is a library an object module?

Yes, a library is simply a collection of object modules neatly put together to
make it easier to use and distribute.

## Why is an object file obtained after compiling a source containing `int main`
## not an executable program?

I assume because it does not contain any executable code, only declarations.
