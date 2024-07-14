Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i - word.length() + 1);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter the sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}