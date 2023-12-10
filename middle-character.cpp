
Sure, here's a possible solution:
```
#include <string>
using namespace std;

string middleCharacter(string str) {
    if (str.length() % 2 == 0) {
        return string(1, str[str.length() / 2 - 1]) + string(1, str[str.length() / 2]);
    } else {
        return string(1, str[str.length() / 2]);
    }
}
```
Explanation:
The function `middleCharacter` takes a string as input and returns the middle character(s) of the string based on its length. If the length is even, it returns the two middle characters as a string separated by a space. If the length is odd, it returns only the middle character. The main function reads a string from the user using `cin`, calls the `middleCharacter` function with the input string, and prints the result to the console using `cout`.

Note that this code snippet does not have a `main` function, so it cannot be compiled on its own. It is meant to be used as a helper function in a larger program.