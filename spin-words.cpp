#include <algorithm>
#include <string>
#include <sstream>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::stringstream ss(str);
    std::string token;
    std::vector<std::string> tokens;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    std::string str;
    std::cout << "Enter a string of one or more words (separated by spaces): ";
    std::cin >> str;
    
    std::vector<std::string> words = split(str, ' ');
    std::string result;

    for (int i = 0; i < words.size(); i++) {
        std::string temp = words[i];
        if (words[i].length() >= 5) {
            std::reverse(temp.begin(), temp.end());
            result += temp + " ";
        } else {
            result += temp + " ";
        }
    }

    std::cout << "The resulting string is: " << result.substr(0, result.size() - 1) << std::endl;
    
    return 0;
}