#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        size_t nextPos = sentence.find(" ", pos + 1);
        if (nextPos == std::string::npos)
            nextPos = sentence.length();
        
        std::string word = sentence.substr(pos, nextPos - pos);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word;
        if (nextPos < sentence.length())
            result += " ";
        
        pos = nextPos + 1;
    }
    
    if (pos < sentence.length()) {
        std::string lastWord = sentence.substr(pos);
        if (lastWord.length() >= 5)
            std::reverse(lastWord.begin(), lastWord.end());
        result += lastWord;
    }
    
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;    // a
    cout << spinWords("this is a test") << endl;    // this is a test
    cout << spinWords("this is another test") << endl;    // this is rehtona test
    cout << spinWords("hi") << endl;    // hi

    return 0;
}