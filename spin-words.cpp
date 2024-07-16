#include <iostream>
#include <string>

int main() {
    std::string spinWords(std::string str) {
        std::string result = "";
        int i = 0;
        while (i < str.length()) {
            if (str.find(" ", i) == -1 || i + 1 >= str.length()) {
                std::string word = str.substr(i);
                if (word.length() >= 5) {
                    for (int k = word.length() - 1; k >= 0; --k)
                        result += word[k];
                } else
                    result += word;
                break;
            }
            int j = str.find(" ", i);
            std::string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                for (int k = word.length() - 1; k >= 0; --k)
                    result += word[k];
            } else
                result += word;
            i = j + 1;
        }
        return result;
    }
    std::cout << spinWords("This is a test");
}