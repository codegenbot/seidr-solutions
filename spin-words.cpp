#include <iostream>
#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int wordStart = 0;
    
    for(int i = 0; i <= input.length(); i++) {
        if(i == input.length() || input[i] == ' ') {
            string word = input.substr(wordStart, i-wordStart);
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + (i == input.length()? "" : " ");
            wordStart = i+1;
        }
    }
    
    return output;
}

int main() {
    string input;
    while(true) {
        cout << "Enter a string: ";
        cin >> input;
        if(input.size() < 2)
            break;
        cout << spinWords(input) << endl;
    }
    return 0;
}