Here is the C++ code to solve the "mastermind" problem:

```cpp
#include <iostream>
#include <string>

int countWhitePegs(std::string code, std::string guess) {
    int count = 0;
    int freq[6] = {0};

    for (int i = 0; i < code.size(); i++) {
        if (code[i] != guess[i]) freq[guess[i] - 'A']++;
    }

    for (int i = 0; i < code.size(); i++) {
        if (code[i] != guess[i] && freq[code[i] - 'A'] > 0) {
            count++;
            freq[code[i] - 'A']--;
        }
    }

    return count;
}

int countBlackPegs(std::string code, std::string guess) {
    int count = 0;

    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) count++;
    }

    return count;
}

int main() {
    std::string code, guess;

    std::cout << "Enter the code: ";
    std::cin >> code;

    std::cout << "Enter the guess: ";
    std::cin >> guess;

    int blackPegs = countBlackPegs(code, guess);
    int whitePegs = countWhitePegs(code, guess);

    std::cout << "Black Pegs: " << blackPegs << std::endl;
    std::cout << "White Pegs: " << whitePegs << std::endl;

    return 0;
}
```

Please note that the code snippet provided is a complete C++ program and can be compiled and executed as is. It takes user input for the code and guess strings and calculates the number of white and black pegs using the `countWhitePegs()` and `countBlackPegs()` functions. Finally, it outputs the results.