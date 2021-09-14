Purpose of this exercise: construct a famous program illustrating that you can use the compiler.

This is an exeercise to get you 'up and running'. Its main purpose is to show (also to yourself) that you have an operational compiler and that you're able to write the most famous of all C/C++ programs:

Construct a program printing the text

```
    Hello World
```         

to the screen. The line must properly be terminated (use \n).

Name your source file

``` 
    hello.cc
```     

Compile and link the program.

Construct the separate object file hello.o, and the executable program hello.exe (Windows) or hello (Unix). Provide short, informative descriptions of what these two files are.

Submit:

    The listing (of course, see the introductory text above this exercise) of your program;
    The commands you entered to compile and link the program;
    The short descriptions of object file and executable;
    The program's output;
    The size in bytes (not kBytes!) of:
        the source file;
        the object file;
        the executable program (strip it first, using the -s switch when creating the executable);
        the file iostream 

Note that the size of the files depends on the used operating system and compiler.

For the file iostream it's important to find its location. Even the way to find files like iostream depends on operating system and compiler.

On my Linux system the standard C headers are found in directory /usr/include, while the standard C++ headers are below /usr/include/c++. In there the file iostream is found.

Alternatively, the locate program can be used: the command

```
    locate iostream
```     

will tell you where the iostream files are. I count about 200 hits.... However,

```
    locate iostream | grep '\biostream$'
```     

reduces this to four, among which /usr/include/c++/4.1.3/iostream: bingo!

Under Windows


    Find -> Files or Folders
        

allows you to find a certain file. Alternatively (and preferably), use

```
    find / -name iostream
```     

when you're using Linux.
