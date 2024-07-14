Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || str.length() - 1 - i <= 4) {
            result += str.substr(i);
            break;
        }
        int j = str.find(" ", i);
        string word = str.substr(i, j - i);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
        i = j + 1;
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