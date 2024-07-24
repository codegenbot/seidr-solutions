#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    bool inWord = false;
    
    for (char c : str) {
        if (c == ' ') {
            inWord = false;
        } else {
            inWord = true;
            result += c;
        }
        
        if (!inWord && !result.empty()) {
            wordLength = result.length();
            
            if (wordLength >= 5) {
                reverse(result.begin(), result.end());
            }
            
            result += ' ';
        }
    }
    
    return result.substr(0, result.size() - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}