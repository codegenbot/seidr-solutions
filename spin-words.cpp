```cpp
#include <iostream>
#include <cstring> 
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str.substr(i);
            i++;
        } else if (strlen(str.substr(i).c_str()) >= 5) { 
            string temp = str.substr(i); 
            for (int j = temp.length() - 1; j >= 0; j--) {
                result += temp[j];
            }
            i += temp.length(); 
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