#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = " ";
    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i + 1] == ' ') {
            int pos = i;
            string word = str.substr(pos);
            if (word.length() >= 5)
                result.append(string(word.rbegin(), word.rend()) + " ");
            else
                result.append(word + " ");
            i += word.length();
        } else {
            if (str.find(" ", i) == -1 || i == str.length() - 1) {
                string word = str.substr(i);
                if (word.length() >= 5)
                    result.append(string(word.rbegin(), word.rend()) + " ");
                else
                    result.append(word + " ");
                break;
            }
            int pos = str.find(" ", i);
            string word = str.substr(i, pos - i);
            if (word.length() >= 5)
                result.append(string(word.rbegin(), word.rend()) + " ");
            else
                result.append(word + " ");
            i = pos;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;
}