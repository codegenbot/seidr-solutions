Here's the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (char c : str) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += str[wordLength - i - 1];
                result += " ";
            } else
                result += " ";
            wordLength = 0;
        } else {
            result += c;
            ++wordLength;
        }
    }

    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += str[wordLength - i - 1];
    } else
        result = str;

    return result;
}

int main() {
    // your code goes here
    string str;
    cout << "Enter the input: ";
    cin >> str;
    cout << "Output: " << spinWords(str) << endl;
    return 0;
}