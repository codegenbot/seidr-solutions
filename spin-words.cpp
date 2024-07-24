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