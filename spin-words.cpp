Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    string temp = "";

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = temp.length();
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += temp[j];
                }
            } else {
                result += temp;
            }
            temp = "";
        } else {
            temp += str[i];
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}