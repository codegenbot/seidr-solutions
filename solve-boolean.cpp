```cpp
#include <string>

bool solveBoolean(std::string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '|') {
            result = !result;
        }
        else if (s[i] == '&') {
            while(i+1<s.length() && s[i+1] == '&') i++;
            if (!result) return false;
        }
    }
    return true;
}

int main() {
    char c;
    std::string input;
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    while ((c = getchar()) != '\n') {
        input += c;
    }
    bool result = solveBoolean(input);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}