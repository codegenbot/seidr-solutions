Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else if (i + 4 >= str.length() || str[i+5] == ' ') {
            for (int j = i; j < str.length(); j++) {
                if (j != i && j - i >= 5) break;
                if (j >= i + 5 && str[j] == ' ') break;
                result += str[j];
            }
        } else {
            int length = 0;
            for (int j = i; j < str.length(); j++) {
                if (str[j] == ' ') break;
                length++;
            }
            for (int j = length - 1; j >= 0; j--) {
                result += str[i + j];
            }
            i += length;
        }
    }
    return result;
}

int main() {
    // Input string here...
    cout << spinWords("this is another test") << endl;
    return 0;
}