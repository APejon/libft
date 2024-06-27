# Libft - Creating a library of functions #
- **Libft** is considered the first project I tackled as a 42 student, it includes creating a folder that contains a list of preset custom functions that could help in coding future projects when called.
This provides programmers a first glance on coding in C while creating a useful toolbox, though the project tasks programmers to code specific functions for submission, **Libft** can be later provided with different and more efficient functions.

### Makefile ###
- Along with the required functions to code, a **Makefile** is also required to help with the compilation of the project (this is a typical requirement for all projects regardless, but considering that **Libft** is the first project, it will be explained here).
- The **Makefile** is usually divided into two sections:
  - Macros
  - Commands
- **Macros** will asign a value to a certain variable to be called later within the **Commands** section, similiar to how its done in typical coding, this will help you execute a command along with its flags effectively without wasting time typing in the entire line.
  For example:<br><br>
  ``GCC = gcc -Wall -Werror -Wextra``<br><br>
  - In order to call out the variable and gets its value, you'll have to do it as the following:<br><br>
  ````
  compile: 
    $(GCC) test.c -o test.o
  ````
  This will be read as: "gcc -Wall -Werror -Wextra test.c -o test.o", which will therefore compile the file "test.c" using a very short indicator
- Notice that one of the macros has the following used:<br><br>
``OBJS = $(SRCS:.c=.o)``<br><br>
And what that will do is take all values from "SRCS" and converts them into object files, **Makefile** will have a default setting that would help it understand this context and perform the necessary steps to make it happen, but should a custom compilation method
be necessary, this command can be used:<br><br>
  ````
  %.o : %.c
    <compilation line, along with the flags and files to compiled>
  ````
