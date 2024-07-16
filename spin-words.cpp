#include <sstream>

int main() {
    std::string str = "Hello World!";
    std::string result = spinWords(str);
    // print or do something with 'result'
    return 0;
}

std::string spinWords(std::string str) {
    std::stringstream ss;
    std::string word;

    for (const auto& w : str.split(" ")) {  
        if(w.size()>4)
            ss << std::string(w.rbegin(), w.rend()) + " ";
        else
            ss << w << " ";
    }

    return ss.str();
}