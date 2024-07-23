#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string result = "";
string word = "";

int main() {
    string input;
    getline(cin, input);

    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;

    cout << result << "\n";

    return 0;
}