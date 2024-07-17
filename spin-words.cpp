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
            newResult += " ";
            j++;
        } else {
            int k = j;
            while (k < result.length() && result[k] != ' ') {
                k++;
            }
            std::string temp = result.substr(j, k - j);
            for (int i = 0; i < temp.length(); i++) {
                newResult += temp[temp.length() - i - 1];
            }
            j = k;
        }
    }
    
    return newResult;
}

int main() {
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    
    return 0;
}