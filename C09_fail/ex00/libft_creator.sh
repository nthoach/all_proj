#!/bin/bash

# Compile the source files and create the library
rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c  {} \;
ar rc libft.a *.o
ranlib libft.a

# Clean up the object files
rm -f *.o