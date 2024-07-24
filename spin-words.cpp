Here's the solution:

#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() >= 5)
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
            else
                result += word;
            word = "";
        } else {
            word += str[i];
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;

    return 0;
}