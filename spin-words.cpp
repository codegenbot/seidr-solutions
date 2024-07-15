```cpp
#include <string>
using namespace std;

int main() {
    string input = "hello world spin";
    string result = spinWords(input); 
    cout << result; 
    return 0;
}

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str.substr(i - length, length).at(j);
                }
            } else {
                result += " ";
            }
            length = 0;
        } else {
            length++;
            result += str[i];
        }
    }
    if (length >= 5) {
        for (int i = length - 1; i >= 0; i--) {
            result += str.substr(str.length() - length, length).at(i);
        }
    }
    return result;
}