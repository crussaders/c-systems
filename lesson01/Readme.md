gcc -Wall -Wextra -O0 -g hello.c -o hello

gcc -E hello.c > hello.i

gcc -S hello.c -o hello.s

gcc -c hello.c -o hello.o


This is a GCC compilation command, and understanding every flag is important if you’re learning C deeply for driver/system programming.

Your command:

gcc -Wall -Wextra -O0 -g hello.c -o hello

You wrote -00, but it is almost certainly -O0 (capital O + zero), not two zeros.

Let’s break it down.

⸻

1. gcc

gcc

This is the GNU C Compiler.

It takes your C source code:

hello.c

and ultimately produces an executable:

hello

Conceptually:

hello.c
↓
Preprocessor
↓
Compiler
↓
Assembler
↓
Linker
↓
hello

We’ll learn these stages in depth because they’re very important for driver development.

⸻

2. -Wall

-Wall

Means:

Enable a broad set of useful compiler warnings.

For example:

#include <stdio.h>
int main() {
int x;
printf("%d\n", x);
}

x is uninitialized.

GCC can warn you about this kind of problem.

You might see something like:

warning: ‘x’ is used uninitialized

Important

-Wall does not literally mean “all warnings”.

It’s a predefined collection of commonly useful warnings.

⸻

3. -Wextra

-Wextra

Enables additional warnings beyond -Wall.

So commonly you’ll see:

-Wall -Wextra

Together.

Think:

-Wall
↓
Common important warnings
-Wextra
↓
More warnings

For serious C development, warnings are extremely important.

⸻

4. -O0

-O0

This controls optimization.

O = Optimization.

0 = level zero.

Therefore:

-O0

means:

Don’t optimize the generated code.

For learning and debugging, this is useful.

For example:

int add(int a, int b)
{
int result = a + b;
return result;
}

With:

-O0

the compiler generally keeps the generated code closer to the source structure.

With:

-O2

GCC can perform many optimizations.

There are several levels:

-O0    No optimization
-O1    Basic optimization
-O2    More optimization
-O3    Aggressive optimization
-Os    Optimize for size

For now, while learning:

-O0

is a good choice.

⸻

5. -g

-g

This is debug information.

It tells GCC:

Put debugging information into the executable.

This allows debuggers such as gdb to understand the relationship between:

machine instructions
↕
C source code

For example:

int main()
{
int x = 10;
int y = 20;
int result = x + y;
return 0;
}

With -g, GDB can show you things like:

Breakpoint 1, main () at hello.c:5
5       int result = x + y;

Without -g, debugging becomes much harder.

For your goal of learning systems programming:

-g

is very useful.

⸻

6. hello.c

hello.c

This is your input source file.

For example:

#include <stdio.h>
int main()
{
printf("Hello World\n");
return 0;
}

⸻

7. -o hello

-o hello

-o means:

Specify the output filename.

So:

-o hello

means:

Create executable named:
hello

Without -o hello, GCC commonly produces:

a.out

For example:

gcc hello.c

produces:

a.out

Whereas:

gcc hello.c -o hello

produces:

hello

⸻

So the whole command means

gcc -Wall -Wextra -O0 -g hello.c -o hello

In English:

Compile hello.c using GCC, enable useful warnings, enable extra warnings, don’t optimize the code, include debugging information, and produce an executable called hello.

⸻

Then how do you run it?

On Linux/macOS:

./hello

Why ./?

Because you’re saying:

Run the executable named hello
from the current directory.

⸻

Very important for your driver journey

I recommend you get comfortable with this progression:

gcc hello.c -o hello

Then:

gcc -Wall -Wextra hello.c -o hello

Then:

gcc -Wall -Wextra -O0 -g hello.c -o hello

Then learn what actually happens:

hello.c
│
├── Preprocessing
│
↓
hello.i
│
├── Compilation
│
↓
hello.s
│
├── Assembly
│
↓
hello.o
│
├── Linking
│
↓
hello

That compilation pipeline is one of the first things I’d recommend learning deeply if your end goal is C + Linux drivers.