Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) != string::npos) {
            int j = str.find(" ", i);
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            i = j + 1;
        } else {
            string word = str.substr(i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word;
            break;
        }
    }
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi

    return 0;
}