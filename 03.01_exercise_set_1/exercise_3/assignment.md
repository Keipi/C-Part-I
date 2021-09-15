Purpose of this exercise: learn to recognize some standard C++ elements.

Of the following examples, indicate which are valid C++ code snippets, and if not how they can be fixed (or at least indicate why the snippet isn't considered valid C++).

Note: valid in this context not only means that the snippet is accepted by the compiler, but also that it's considered standard or good C++ practice. Some snippets are presented as programs, some as expressions. In the latter case you may assume that the expression is embedded in a valid C++ program: the question then pertains to the expression.

    is this a valid C++ program?


    int main()
    {}
            

    Is this a valid C++ program?


    int main(int argc, char *argv[], char *envp[])
    {}
            

    Is this a valid C++ program?


    int main(int argc, char *argv[])
    {
        return;
    }
            

    Is this a valid C++ expression, and is it true?

    sizeof('c') == 1

    In main(int argc, char *argv[]) it is true that argv[argc] == 0.

    To immediately end a program from deep inside its code exit(0) should be used.

    When defining an enum called Name start with enum Name, instead of using typedef enum Name.

    When writing argv[2][3] the resulting code evaluates index [2] before index [3]. 
