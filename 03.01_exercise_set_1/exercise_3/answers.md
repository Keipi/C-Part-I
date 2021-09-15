# Answers

1. Is this a valid program?
```
		int main()
		{}
```
	> Yes, however it does nothing.

2. Is this valid?
```
		int main(int argc, char *argv[], char *envp[])
		{}
```
	> No, while it does compile, it takes arguments that are unused.
	> Could be fixed by doing something with the arguments.

3. Is this valid?
	> No, same as above.

4. Is this a valid expression, and is it true?
```
		sizeof('c') == 1
```
	> Yes, and yes. As per reference, the size of a character always evaluates to 1.


5. In `main(int argc, char *argv[])`, it is true that `argv[argc] == 0`.

	> Yes, this is by definition; http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1905.pdf
	> See chp 3.6.1, nr. @.

6. To immediately end a program from deep inside its code `exit(0)` should be used.

	> `exit(0)` implies succesfull termination of the program. It is unlikely that
	> that would happen deep in code.

7. When defining an enum called Name, do not use typedef.

	> Correct, in Cpp typedef is not necessary anymore.

8. When writing `argv[2][3]` the resulting code evaluates 2 before 3.

	> The wording is a bit weird. The above code evaluates to the 3rd character
	> of the second commandline argument passed to the function.
