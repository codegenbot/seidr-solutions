#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str[i];
            i++;
        } else if (i >= str.length() - 5) {
            for (int j = i; j >= max(0, i-5); j--) {
                result += str[j];
            }
            i = str.length();
        } else {
            int k = i;
            while (++k < min((int)str.length(), k+6)) {
                result += str[k];
            }
            i = k - 1;
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