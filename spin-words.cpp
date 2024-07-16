```cpp
#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else if ((int)str[i + str.substr(i).size() - 1] >= 122 || (int)str[i + str.substr(i).size() - 1] <= 96) {
            for (int j = str.substr(i).size(); j > 0; j--) {
                result += str[i + j - 1];
            }
            i += str.substr(i).size();
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