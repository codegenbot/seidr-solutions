#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string spinWords(const string& input) {
    istringstream iss(input);
    string word, result;

    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    // Remove the trailing space
    result.pop_back();

    return result;
}

int main() {
    string input;
    getline(cin, input);

    cout << spinWords(input);

    return 0;
}