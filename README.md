# C-ourse
[C Programming Course from YouTube](https://www.youtube.com/watch?v=87SH2Cn0s9A&list=LL&index=7&)


## General information
- Most compilers are written in C
- Middle level programming language
- Not object-oriented
- C++ is an object-oriented extension of C

### Escape sequences
- `\t` : tab
- `\n` : new line
- `\"` : print quotes

### Variables
- Allocated space in memory to store values
- `int x = 123` : declaration + initialization
- No string datatype because strings are technically objects
    - `char name[] = "Márton"` - array of characters
- `const float PI = 3.14` - read-only value

#### Format specifiers
- `%d` or `%i`  → int	
- `%f`          → float	
- `%lf`         → double (long float)	
- `%c`          → char	
- `%s`          → strings (text)

### Math functions `#include <math.h>`
- négyzetgyök → `sqrt(9)`
- hatványozás → `pow(2,4)`
- kerekítés → `round(3.14)`
- felfele kerekítés `ceil(3.14)`
- lefele kerekítés → `floor(3.14)`
- abszolút érték → `fabs()`
- logaritmus → `log()`
- `sin()`, `cos()`, `tan()`

### Ternary operator - Három operandusú operátor
- shortcut to if/else statement when assigning/returning a value
- (condition) ? value if true : value if false

### Function prototype
- Function declaration, without a body, before `main()`
- `void hello(char[], int);`
- Ensures that you can call a function with a required amount of arguments
- Many C compilers do not check for parameter checking
- Missing arguments will result in unexpected behavior - lefut, csak hülyeséget ír ki. Így viszont hibát dob és le sem fut

### String fucntions `#include <string.h>`
- `strlwv()` → converts string to lowercase
- `strlwv()` → converts string to uppercase
- `strcat(string1, string2)` → appends string2 to end of string1
- `strncat(string1, string, 2)` → appends n characters from string2 to string1
- `strcpy(string1, string2)` → copy string2 to string1
- `strncpy(string1, string2, 1)` → copy n characters from string2 to string1
    - `strncpy("iPhone", "Android", 1)` → APhone
- `strset(string1, "?")` → sets all characters of a string to a given character
- `strnset(string1, "?" , 1)` → sets n characters of a string to a given character
- `strrev()` → reverses a string

#### These all return integer
- `strlen(string1)` → returns string length
- `strcmp(string1, string2)` → compare all characters
    - If the two strings are identical, it returns 0
- `strncmp(string1, string2)` → compare n characters
- `strncmpi(string1, string2 , 1)` → compare all characters (ignoring case)
- `strnicmp(string1, string2 , 1)` → compare n characters (ignoring case)

### Bitwise operators
- `&` → AND
- `|` → OR
- `^` → XOR
- `<<` → left shirt
- `>>` → right shift
-   `int x = 6`      `00000110`
    `int y = 12`     `00001100`

    - `&` →         `00000100`→ 4
    - `|` →         `00001110`→ 14
    - `^` →         `00001010`→ 10
    - `x << 1` →    `00001100`→ 12 (doubles the number)
    - `x >> 1` →    `00000011`→ 3 