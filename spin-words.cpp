```c++
#include <string>
#include <algorithm>

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                char* revStr = new char[word.length() + 1];
                strcpy(revStr, word.c_str());
                for (int j = word.length(); j >= 0; --j) {
                    result += revStr[j];
                }
                delete[] revStr;
                result += " ";
                word.clear();
            } else {
                result += (word + " ");
            }
            word.clear();
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        char* tempRevStr = new char[word.length() + 1];
        strcpy(tempRevStr, word.c_str());
        for (int j = word.length(); j >= 0; --j) {
            result += tempRevStr[j];
        }
        delete[] tempRevStr;
    } else {
        result += (word);
    }

    return result;
}