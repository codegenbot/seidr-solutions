#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    
    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        
        cout << word << " ";
    }
    
    return "";
}

int main() {
    string s;
    getline(cin, s);
    cout << spinWords(s) << endl;
    return 0;
}