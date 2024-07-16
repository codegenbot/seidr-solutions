#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::stringstream iss(str);
    std::string word;
    std::string result;

    while (getline(iss, word, ' ')) {
        if(word.size()>4)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    return result.substr(0, result.find_last_of(" ")).substr(0);
}

int main() {
    return 0;
}