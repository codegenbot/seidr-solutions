```cpp
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || i + 1 >= str.length())
            break;
        int j = str.find(" ", i);
        string word = str.substr(i, j - i);
        if (word.length() >= 5)
            result += reverse(word) + " ";
        else
            result += word + " ";
        i = j + 1;
    }
    return result.substr(0, result.length() - 1);
}

string reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    return rev;
}

int main() {
    string str;
    cin >> str;
    cout << spinWords(str) << endl;
    return 0;
}