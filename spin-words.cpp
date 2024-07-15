```cpp
#include <string>
using namespace std;

int main() {
    string result = spinWords("your_input_string_here"); // test with a sample input
    cout << result; // print the result
    return 0;
}

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str[i - j];
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
            result += str[i];
        }
    }
    return result;
}