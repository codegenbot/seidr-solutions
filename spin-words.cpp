#include <vector>
#include <iostream>
#include <string>

string spinWords(string sentence) {
    string result = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
        } else {
            int j = i;
            while (j < sentence.size() && sentence[j] != ' ') {
                j++;
            }
            string word = sentence.substr(i, j - i);
            if (word.length() >= 5) {
                for (int k = word.length() - 1; k >= 0; k--) {
                    result += word[k];
                }
            } else {
                result += word;
            }
            i = j;
        }
    }
    return result;
}

int main() {
    // Testing the function
    cout << spinWords("a") << endl; // Output: a
    cout << spinWords("this is a test") << endl; // Output: this is a test
    cout << spinWords("this is another test") << endl; // Output: this is rehtona test
    cout << spinWords("hi") << endl; // Output: hi

    return 0;
}