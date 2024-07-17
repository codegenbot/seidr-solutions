#include <vector>
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
    
    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i + 1;
            while (j < result.length() && ((result[j] >= 'a' && result[j] <= 'z') || (result[j] >= 'A' && result[j] <= 'Z'))) {
                j++;
            }
            
            if (j - i > 4) {
                std::string temp = result.substr(i, j - i);
                for (int k = temp.length() - 1; k >= 0; k--) {
                    result.replace(i, j - i, 1, temp[k]);
                    i++;
                }
            }
        }
    }
    
    return result;
}

int main() {
    std::string sentence;
    while (true) {
        std::cout << "Enter a string of one or more words (separated by spaces), or 'q' to quit: ";
        std::cin >> sentence;
        if (sentence == "q") break;
        std::cout << spinWords(sentence) << std::endl;
    }
    return 0;
}