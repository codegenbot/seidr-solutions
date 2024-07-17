#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                result += newReverse(word) + " ";
            else
                result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        result += newReverse(word);
    else
        result += word;

    return result;
}

string newReverse(string str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; --i)
        reversedStr += str[i];
    return reversedStr;
}