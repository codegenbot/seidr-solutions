Here's the solution:

#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordStart = 0;
    for(int i = 0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(wordStart, i - wordStart);
            if(word.length() >= 5) {
                result += word.substr(reverse(word).length()) + " ";
            } else {
                result += word + " ";
            }
            wordStart = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}

int reverse(string s) {
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
    return 0;
}