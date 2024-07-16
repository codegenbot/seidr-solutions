#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else {
            int j = 0;
            while (i < str.length() && str[i] != ' ') {
                i++;
                j++;
            }
            if(j>=5) {
                for(int k = j-1; k >= 0; k--) {
                    result += str[i-k-1];
                }
            } else {
                for(int k = 0; k < j; k++) {
                    result += str[i-k-1];
                }
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}