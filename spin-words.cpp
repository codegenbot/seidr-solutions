#include <iostream>
#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
            count = 0;
        } else {
            count++;
            if (count >= 5) {
                for (int j = i; j >= i - count + 1; j--) {
                    result += sentence[j];
                }
                i -= count - 1;
            } else {
                result += sentence[i];
            }
        }
    }
    return result;
}

string spinWords(string sentence) {
    string reversed = "";
    int start = 0;
    for (int end = 0; end <= sentence.length(); end++) {
        if ((end == sentence.length()) || (sentence[end] == ' ')) {
            string word = sentence.substr(start, end - start);
            if (word.length() >= 5) {
                reversed += string(word.rbegin(), word.rend());
            } else {
                reversed += word;
            }
            if (end < sentence.length()) {
                reversed += " ";
            }
            start = end + 1;
        }
    }
    return reversed;