#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += reversed(word) + " ";
            } else {
                result += word + " ";
            }
            start = i + 1;
        }
    }
    return result.trim();
}

string reversed(string s) {
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

// function to trim the leading and trailing spaces
string trim(const string& str) {
    size_t start = str.find_first_not_of(' ');
    size_t end = str.find_last_not_of(' ');
    return str.substr(start, (end - start + 1));
}