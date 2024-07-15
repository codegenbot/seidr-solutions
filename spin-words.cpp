#include <string>

#include <vector>
#include <algorithm>
#include <sstream>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    boost::split(words, str, boost::is_space());

    std::stringstream result;
    
    for (auto &word : words) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result << word << " ";
    }
    
    return result.str();
}