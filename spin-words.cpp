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
        } else if ((int)str[i + tmp.size() - 1] >= 122 || (int)str[i + tmp.size() - 1] <= 96) {
            for (int j = tmp.size(); j > 0; j--) {
                result += tmp[j - 1];
            }
            i += tmp.size();
        } else {
            int k = 0;
            while (i < str.length() && str[i] != ' ') {
                ch = str[i];
                result += ch;
                i++;
                k++;
            }
            if (k > 0) {
                for (int j = k; j > 0; j--) {
                    result += str[i - 1];
                }
                i--;
            } else {
                result += tmp;
                i++;
            }
        }
    }
    return result;
}

std::string ch;
std::string tmp;

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}