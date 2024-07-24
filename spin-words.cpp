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

string spinWords(string input) {
    string output = "";
    int start = 0;
    for (int end = 0; end <= input.length(); end++) {
        if (end == input.length() || input[end] == ' ') {
            string word = input.substr(start, end - start);
            if (word.length() >= 5) {
                output += string(word.rbegin(), word.rend()) + " ";
            } else {
                output += word + " ";
            }
            start = end + 1;
        }
    }
    return output.substr(0, output.length() - 1);
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string: ";
        cin >> input;
        if (input == "exit") break;
        cout << spinWords(input) << endl;
    }
    return 0;
}