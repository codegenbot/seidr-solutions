#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += sentence[i];
        }
    }
    
    result += word;
    
    std::string newResult = "";
    int j = 0;
    
    while (j < result.length()) {
        if (result[j] == ' ') {
            for (int i = j + 1; i <= result.find(' ', j); i++) {
                if (i - j >= 5) {
                    std::string temp = result.substr(j, i - j);
                    std::reverse(temp.begin(), temp.end());
                    newResult += temp;
                    j = i;
                    break;
                }
            }
        } else {
            newResult += result[j];
            j++;
        }
    }
    
    return newResult;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    // Your code here
    return 0;
}