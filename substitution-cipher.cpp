#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (char c : message) {
        if(isalpha(c)) { 
            int index = tolower(c) - 'a'; 
            if (index >= 0 && index < cipher1.length()) {
                char newC = cipher2[index]; 
                if(isupper(c)) newC = toupper(newC); 
                result += newC; 
            } else {
                result += c;
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}