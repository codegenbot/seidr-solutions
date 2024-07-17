Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        if (end == string::npos) {
            end = str.length();
        }
        string word = str.substr(start, end - start);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
        start = end + 1;
    }
    return result;
}

int main() {
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    return 0;
}