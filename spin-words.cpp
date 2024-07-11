```cpp
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || str.length() - 1 == i) {
            string word = str.substr(i);
            if (word.length() >= 5)
                result += string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            break;
        }
        int pos = str.find(" ", i);
        string word = str.substr(i, pos - i);
        if (word.length() >= 5)
            result += string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
        i = pos + 1;
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;
}