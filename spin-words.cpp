#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    for (size_t end = 0; end <= str.size(); ) {
        if (str.substr(start, end - start).size() >= 5) {
            std::reverse(str.substr(start, end - start).begin(), str.substr(start, end - start).end());
            result += str.substr(start, end - start);
            start = end;
        } else {
            result += str.substr(start, end - start);
            start = end + 1;
        }
        if (++end > str.size()) break;
    }
    
    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}