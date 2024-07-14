```cpp
#include <string>
#include <iostream>

int main() {
    std::string expression;
    char c;

    while ((c = std::getchar()) != '\n' && c != EOF) {
        expression.push_back(c); 
    }

    bool result = false;

    for (char e : expression) {
        if (e == 'T') result = true; else if (e == 'F') result = false;
        else if (e == '|') result = !result;
        else if (e == '&') {
            bool temp = result;
            result = !result;
            result = temp && result;
        }
    }

    if (result)
        std::cout << "The result is TRUE." << std::endl;
    else
        std::cout << "The result is FALSE." << std::endl;

    return 0;
}