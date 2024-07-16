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
                result += tmp[j-1];
            }
            i += tmp.size();
        } else {
            std::string ch;
            while (i < str.length() && str[i] != ' ') {
                ch += str[i];
                i++;
            }
            if (ch.size() > 4) {
                for (int j = ch.size(); j > 0; j--) {
                    result += ch[j-1];
                }
            } else {
                result += ch;
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}