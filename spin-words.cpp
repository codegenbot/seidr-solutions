#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count = 0;
            result += str[i];
        } else {
            count++;
            if (count >= 5) {
                for (int j = i; j >= i - count + 1; j--) {
                    result += str[j];
                }
            } else {
                result += str[i];
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    while (cin >> input) {
        cout << spinWords(input) << endl;
    }
    return 0;
}