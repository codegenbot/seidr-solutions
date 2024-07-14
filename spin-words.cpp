#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }
    
    result += word;
    
    int i = 0;
    while (i < result.length()) {
        if (result[i] != ' ' && result.length() - i >= 5) {
            for (int j = i; j < result.length(); j++) {
                if (j == i || result[j] != ' ') {
                    break;
                }
            }
            std::reverse(result.substr(i, j-i).begin(), result.substr(i, j-i).end());
            i = j;
        } else {
            i++;
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    
    return 0;
}