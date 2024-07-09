```c++
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                result += word;
                vector<char> v(word.rbegin(), word.rend());
                word = std::string(v.begin(), v.end());
                result += " ";
                word = "";
            } else {
                result += word;
                result += " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        vector<char> v(word.rbegin(), word.rend());
        word = std::string(v.begin(), v.end());
    }

    result += word;
    return result;
}