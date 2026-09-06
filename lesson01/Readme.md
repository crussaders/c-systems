gcc -Wall -Wextra -O0 -g hello.c -o hello
gcc -E hello.c > hello.i
gcc -S hello.c -o hello.s
gcc -c hello.c -o hello.o