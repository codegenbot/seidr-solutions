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
                word = std::string(word.rbegin(), word.rend());
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
        result += word;
        word = std::string(word.rbegin(), word.rend());
    } else {
        result += word;
    }

    return result;
}

int main() { return spinWords("Your input string here"); }