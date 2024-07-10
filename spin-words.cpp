#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            words.push_back(word);
            start = i + 1;
        }
    }
    for(int i = 0; i < words.size(); i++) {
        str = str.replace(start, start + words[i].length(), words[i]);
        start += words[i].length() + 1;
    }
    return str;
}