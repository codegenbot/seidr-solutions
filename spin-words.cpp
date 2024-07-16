#include <string>
#include <iostream>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || i + 1 >= str.length()) {
            result += str.substr(i);
            break;
        }
        int j = str.find(" ", i);
        string word = str.substr(i, j - i);
        if (word.length() >= 5) {
            for (int k = word.length() - 1; k >= 0; --k)
                result += word[k];
        } else
            result += word;
        i = j + 1;
    }
    return result;
}

int main() {
    return spinWords("Hello World");
}