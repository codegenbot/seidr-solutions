``` 
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : std::string(str).c_str()) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; i--) {
                    result += word[i];
                }
            } else {
                result += word;
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--) {
            result += word[i];
        }
    } else {
        result += word;
    }

    return result;
}