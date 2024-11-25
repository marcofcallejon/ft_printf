# ft_printf

# ft_printf

A reimplementation of the `printf` function in C, created as part of the 42 curriculum. The goal of this project is to deepen understanding of variadic functions, memory management, and formatted output in C programming.

---

## Features

- Supports a variety of format specifiers:
  - **%c**: Prints a single character.
  - **%s**: Prints a string.
  - **%p**: Prints a memory address (pointer).
  - **%d**/**%i**: Prints a signed integer.
  - **%u**: Prints an unsigned integer.
  - **%x**/**%X**: Prints an unsigned integer in hexadecimal (lowercase/uppercase).
  - **%%**: Prints a literal `%` character.
- Handles variable arguments using the `stdarg.h` library.
- Works with negative numbers, zero-padding, and precision for integers and strings.

---

## Usage

1. Clone this repository:
   ```bash
   git clone https://github.com/marcofcallejon/ft_printf.git
   cd ft_printf

2. Compile the library:
   ```bash
   make

3. Include the libftprintf.a in your project:
```bash
    Copiar código
    gcc your_file.c -L. -lftprintf
```
4. Use ft_printf in your C programs just like the standard printf:
#include "ft_printf.h"
````bash
  int main(void)
  {
      int num = 42;
      ft_printf("Hello, 42! The answer is: %d\n", num);
      return 0;
  }
````

## File Structure
- ft_printf.c: Contains the main logic for processing format specifiers.
- ft_printf_utils.c: Helper functions for various output types.
- ft_printf.h: Header file with function prototypes and macros.
- libftprintf.a: The compiled library.

## Testing
To test ft_printf, compile and run a test file:
````bash
  gcc test.c -L. -lftprintf
  ./a.out
````

## Project Goals
- Understand the inner workings of printf.
- Learn to use variadic arguments effectively.
- Develop a deeper understanding of formatted output and string manipulation in C.

## Contributions
This project is part of the 42 curriculum and is not open to external contributions at this time. However, feedback and suggestions are welcome.
