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
        } else if ((int)str[i + 1] >= 122 || (int)str[i + 1] <= 96) {
            string temp = str.substr(i);
            for (auto it = temp.rbegin(); it != temp.rend(); ++it) {
                result += *it;
            }
            i += temp.size();
        } else {
            int k = 0;
            while (i < str.length() && str[i] != ' ') {
                result += str[i];
                i++;
                k++;
            }
            if (k > 0) {
                for (int j = k; j > 0; j--) {
                    result += str[i - 1];
                }
                i--;
            } else {
                result += str.substr(i);
                i++;
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}