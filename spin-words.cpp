#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::vector<std::string> words;
    int start = 0;
    for(int i=0; i<=sentence.size(); i++) {
        if(i == sentence.size() || sentence[i] == ' ') {
            string word = sentence.substr(start, i-start);
            if(word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            words.push_back(word);
            start = i+1;
        }
    }
    for(int i=0; i<words.size(); i++) {
        cout << words[i] << " ";
    }
    return "";
}