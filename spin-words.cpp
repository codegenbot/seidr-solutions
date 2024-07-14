#include <string>
#include <vector>

std::string spinWords(std::string sentence) {
    std::vector<std::string> words;
    std::stringstream ss(sentence);
    
    std::string word;
    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    sentence = "";
    for (int i = 0; i < words.size(); i++) {
        sentence += words[i];
        if (i < words.size() - 1) {
            sentence += " ";
        }
    }

    return sentence;
}