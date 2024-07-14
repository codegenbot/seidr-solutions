Here is the solution:

#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += str[i];
        }
    }
    
    result += word;
    
    std::string newStr;
    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i;
            while (j > 0 && (result[j-1] >= 'a' && result[j-1] <= 'z' || result[j-1] >= 'A' && result[j-1] <= 'Z')) {
                j--;
            }
            if (j - i >= 5) {
                std::string temp = result.substr(i, j-i);
                for (int k = temp.length() - 1; k >= 0; k--) {
                    newStr += temp[k];
                }
                i = j;
            } else {
                newStr += result[i];
                i++;
            }
        } else {
            newStr += result[i];
            i++;
        }
    }
    
    return newStr;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}