Here is the solution:

#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                result += string(word.rbegin(), word.rend()) + " ";
            } else {
                result += word + " ";
            }
            wordStart = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    // Your code to test the function goes here
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}