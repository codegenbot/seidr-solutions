```cpp
#include <algorithm>
#include <sstream>
#include <vector>

std::string spinWords(const std::string& str) {
    std::stringstream ss(str);
    std::vector<std::string> words;

    while (ss >> words.push_back()) {
        if (words.back().size() >= 5)
            std::reverse(words.back().begin(), words.back().end());
    }

    return std::accumulate(std::next(words.begin()), words.end(), "", 
                            [&](const std::string& prev, const std::string& word) { 
                                return prev.empty() ? word : prev + " " + word; 
                            });
}