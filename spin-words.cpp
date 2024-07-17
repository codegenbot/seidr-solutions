#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); ++i) {
        cout << words[i] << " ";
    }
    return str;
}

int main() {
    string s;
    while (getline(cin, s)) {
        spinWords(s);
        cout << endl;
    }
    return 0;
}