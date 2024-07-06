#include <algorithm> // for split and reverse
#include <string>    // for string manipulation
#include <vector>    // for vector container
#include <iostream>  // for input/output

using namespace std;

string spinWords(string input) {
    // Split the input string into words
    vector<string> words = split(input, ' ');

    // Reverse all words that are five or more letters long
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }

    // Join the words back into a single string
    return join(words, ' ');
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}