```cpp
#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    vector<string> words;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }

    words.push_back(word);

    for (auto &word : words) {
        if (word.length() >= 5) {
            result += string(word.rbegin(), word.rend()) + " ";
        } else {
            result += word + " ";
        }
    }

    return result.substr(0, result.size()-1);
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Result: " << spinWords(str) << endl;
    return 0;
}