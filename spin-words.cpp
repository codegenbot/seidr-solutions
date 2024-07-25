#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word;
    
    std::string result = "";
    
    while (iss >> word) {
        if(word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main() {
    // test cases
    cout << spinWords("a") << endl;  // a
    cout << spinWords("this is a test") << endl;  // this is a test
    cout << spinWords("this is another test") << endl;  // this is rehtona test
    cout << spinWords("hi") << endl;  // hi

    return 0;
}