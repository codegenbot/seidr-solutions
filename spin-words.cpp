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

    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i;
            while (j > 0 && ((result[j] >= 'a' && result[j] <= 'z') || (result[j] >= 'A' && result[j] <= 'Z'))) {
                j--;
            }
            if (j < i) {
                std::string temp = result.substr(j + 1, i - j - 1);
                for (int k = temp.length() - 1; k >= 0; k--) {
                    result.replace(i - temp.length(), temp.length(), 1, temp[k]);
                }
            }
        }
    }

    return result;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    return 0;
}