#include <sstream>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (std::getline(ss, word, ' ')) {
        if(word.size()>4)
            for(int i = word.size() - 1; i >= 0; --i)
                result += word[i];
        else
            result += word + " ";
    }

    if (result.back() == ' ') 
        result.pop_back();

    return result;
}

int main() {
    std::string str = "rxbdfjbu khcjnx";
    std::string result = spinWords(str);
    // print or do something with 'result'
    return 0;
}