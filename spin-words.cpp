#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        if (end == -1) {
            end = str.length();
        }
        string word = str.substr(start, end - start);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + ' ';
        start = end + 1;
    }
    return result.substr(0, result.length() - 1);
}