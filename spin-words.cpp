#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength) + " ";
            wordLength = i + 1;
        }
        else if (i == str.length()) {
            result += str.substr(wordLength);
        }
    }

    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i;
            while (j > 0 && (result[j-1] >= 'a' && result[j-1] <= 'z' || result[j-1] >= 'A' && result[j-1] <= 'Z')) {
                j--;
            }
            string temp = result.substr(i, j - i + 1);
            reverse(temp.begin(), temp.end());
            result.replace(i, j - i + 1, temp);
            i += temp.length() - 1;
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Result: " << spinWords(str) << endl;

    return 0;
}