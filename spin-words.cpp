#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    
    while (pos < str.length()) {
        size_t spacePos = str.find(' ', pos);
        
        if (spacePos == string::npos) {
            result += str.substr(pos);
            break;
        } else {
            string word = str.substr(pos, spacePos - pos);
            
            if (word.length() >= 5)
                reverse(word.begin(), word.end());
            
            result += word + " ";
            pos = spacePos + 1;
        }
    }
    
    return result.substr(0, result.length() - 1); // remove the extra space
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence ('exit' to quit): ";
        cin >> str;
        
        if (str == "exit")
            break;
        
        cout << spinWords(str) << endl;
    }
    
    return 0;
}