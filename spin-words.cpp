#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        string word = str.substr(0, pos);
        if (word.length() >= 5) {
            vector<char> vec(word.begin(), word.end());
            reverse(vec.begin(), vec.end());
            word = string(vec.begin(), vec.end());
        }
        result += word + " ";
        str.erase(0, pos + 1);
    }
    result += str;
    return result;