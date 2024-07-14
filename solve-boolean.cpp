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
    char input[100]; 
    std::cout << "Enter a Boolean expression (T/F/|/&): ";
    std::cin.get(input, 100); 
    input[std::cin.getline(input, 100)-1] = '\0'; 

    std::string strinput(input);
    bool result = solveBoolean(strinput);
    std::cout << "Result: " << (result ? "True" : "False") << std::endl;
    return 0;
}