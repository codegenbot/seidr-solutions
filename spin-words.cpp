#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            wordCount++;
            result += " ";
        } else {
            if (wordCount > 0) {
                wordCount--;
            }
            if (i >= str.length() - 5 || str.length() <= 4) {
                for (int j = i; j < str.length(); j++) {
                    result += str[j];
                }
            } else {
                string temp;
                int k = i;
                while (k < str.length()) {
                    if (str[k] == ' ') {
                        break;
                    }
                    temp += str[k];
                    k++;
                }
                for (int j = temp.length() - 1; j >= 0; j--) {
                    result += temp[j];
                }
            }
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}