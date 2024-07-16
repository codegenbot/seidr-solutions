```
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::string result;
    std::stringstream iss(str); 
    std::string word;

    while (iss >> word) {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.size()-1); 
}

cout << spinWords("Hello World this is a test") << endl;