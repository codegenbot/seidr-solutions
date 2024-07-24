Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int wordCount = 0;
    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            string word = input.substr(wordCount, i - wordCount);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            wordCount = i + 1;
        }
    }
    return output;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Should print: a
    cout << spinWords("this is a test") << endl;  // Should print: this is a test
    cout << spinWords("this is another test") << endl;  // Should print: this is rehtona test
    cout << spinWords("hi") << endl;  // Should print: hi
    return 0;
}