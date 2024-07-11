#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        string word = str.substr(0, pos);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
        str.erase(0, pos + 1);
    }
    result += str;
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << spinWords(str) << endl;
    }
    return 0;