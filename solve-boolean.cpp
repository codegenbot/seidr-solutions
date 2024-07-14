```cpp
#include <iostream>
#include <string>

bool solveBoolean(const std::string& s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '|') {
            result = !result;
        }
        else if (s[i] == '&') {
            i++; // increment 'i' to skip '&' and move to the next character
            while(i+1<s.length() && s[i+1] == '&') i++;
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    std::string strinput;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    getline(std::cin, strinput);

    bool result = solveBoolean(strinput);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}