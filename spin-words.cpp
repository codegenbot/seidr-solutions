#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    string word = "";

    for(int i=0; i<input.length(); i++) {
        if(input[i] != ' ') {
            word += input[i];
        } else {
            if(word.length() >= 5) {
                for(int j=word.length()-1; j>=0; j--) {
                    output += word[j];
                }
            } else {
                output += word;
            }
            word = "";
        }
    }

    if(word.length() >= 5) {
        for(int i=word.length()-1; i>=0; i--) {
            output += word[i];
        }
    } else {
        output += word;
    }

    return output;
}

int main() {
    string input;
    cout << "Enter a string of one or more words (separated by spaces): ";
    getline(cin, input);
    cout << "Output: " << spinWords(input) << endl;
    return 0;
}