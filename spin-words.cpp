#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordStart = 0;
    
    for (int i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(wordStart, i - wordStart);
            
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            wordStart = i + 1;
        }
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    // Your code here
    return 0;
}