```cpp
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string temp = "";

    for(int i=0; i<sentence.length(); i++) {
        char c = sentence[i];
        if(c == ' ') {
            if(temp.length() >= 5)
                std::reverse(temp.begin(), temp.end());
            result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }

    if(temp.length() >= 5)
        std::reverse(temp.begin(), temp.end());

    result += temp;

    return result;
}

std::cout << spinWords("a") << std::endl; 
std::cout << spinWords("this is a test") << std::endl; 
std::cout << spinWords("this is another test") << std::endl; 
std::cout << spinWords("hi") << std::endl;