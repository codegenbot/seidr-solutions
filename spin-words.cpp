#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int start = 0;
    
    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            string word = input.substr(start, i - start);
            
            if (word.length() >= 5) {
                string reversedWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                output += reversedWord + " ";
            } else {
                output += word + " ";
            }
            
            start = i + 1;
        }
    }
    
    return output;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << spinWords(input) << endl;
    return 0;
}