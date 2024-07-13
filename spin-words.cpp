#include <string>
#include <sstream>

string spinWords(string str) {
    stringstream ss(str);
    string word;

    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }

    return "";
}