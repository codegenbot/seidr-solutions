#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, output;
    getline(cin, input);
    
    // Split the input into words
    vector<string> words = splitString(input);
    
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            // Reverse the word
            string reversedWord = reverseString(words[i]);
            
            // Add the reversed word to the output
            if (output.empty()) {
                output += reversedWord;
            } else {
                output += " " + reversedWord;
            }
        } else {
            // Add the unchanged word to the output
            if (output.empty()) {
                output += words[i];
            } else {
                output += " " + words[i];
            }
        }
    }
    
    cout << output << endl;
}

string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

vector<string> splitString(string str, char delimiter) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == delimiter) {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    return words;
}