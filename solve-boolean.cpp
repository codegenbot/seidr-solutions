#include <iostream>

int main() {
    std::string input;
    std::cin >> input;
    
    if (input == "t") {
        std::cout << "True";
    } else if (input == "f") {
        std::cout << "False";
    } else {
        bool result = true;
        for (int i = 0; i < input.size(); i+=2) {
            if (input[i] == 'f' || input[i+1] == 'f') {
                result = false;
                break;
            }
        }
        if (result) {
            std::cout << "True";
        } else {
            std::cout << "False";
        }
    }
    
    return 0;
}