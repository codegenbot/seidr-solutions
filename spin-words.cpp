#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int i = 0;
    
    while(i <= str.length()) {
        if(str.find(" ", i) == -1 || i + 1 >= str.length())
            result += str.substr(i);
        else
            result += (str.substr(i, str.find(" ", i)) == str.substr(i, str.find(" ", i)).rdbuf()->str()) ? str.substr(i, str.find(" ")) : std::string(str.rdbuf()->str().substr(str.find(" "), 0)).reverse().append(std::string(str.rdbuf()->str().substr(0, str.find(" ")))): "";
        i = str.find(" ") + 1;
    }
    
    return result;
}

int main() {
    std::cout << spinWords("this is another test") << std::endl;
    // Do something
    return 0;
}